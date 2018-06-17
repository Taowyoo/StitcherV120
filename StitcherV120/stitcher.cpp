#include "stitcher.h"
#include <QDebug>

#include <QMessageBox>
#include <QFile>
stitcher::stitcher(QObject *parent) : QObject(parent)
{
    stitcherType = 0;
    p = new QProcess(this);
}

void stitcher::run()
{
    generateCmd();


    QFile::remove(".\\cmd.bat");
    QFile file(".\\cmd.bat");


    if(!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QTextStream stream(&file);

    stream << "mkdir .\\temp\n";

    for (int i = 0; i < cmdList.size(); ++i){
        QString currentCmd = cmdList[i];
        currentCmd.replace("/","\\");
        stream << currentCmd << "\n";
        qDebug()<<currentCmd;
    }
    file.close();
    system(".\\cmd.bat");
//    p->startDetached("cmd.exe");
//    p->write ("D:\\cmd.bat");
//    p->waitForFinished();
    //p.startDetached("cmd.exe", QStringList()  << "D:\\cmd.bat");


    QMessageBox msgBox;
    msgBox.setText("Stitching has been completed.");
    msgBox.exec();
    return;
}

void stitcher::setStitcher3Name(const QString &value)
{
    stitcher3Name = value;
}

void stitcher::setStitcher6Name(const QString &value)
{
    stitcher6Name = value;
}

void stitcher::setStitcherType(int value)
{
    stitcherType = value;
    if(value == 1){
        currentStitcher = stitcher6Name;
    }
    else if(value == 0){
        currentStitcher = stitcher3Name;
    }
    else   {
        currentStitcher = "NULL";
    }
}

void stitcher::setImagesName(const QStringList &value)
{
    imagesName = value;
}


void stitcher::setArgumentsStr(const QString &value)
{
    argumentsStr = value;
}

void stitcher::setFinalImageName(const QString &value)
{
    finalImageName = value;
}



void stitcher::generateCmd()
{
    //QString cmd;
    //int totalImagesNum = imagesName.size();
    QStringList tempList(imagesName);
    //qDebug()<<"tempList: "<<tempList;
    int level = 0;
    while (tempList.size() > 1) {
        //QString reusltcmd;
        int currentTotal = tempList.size();
        int currentIndex = 0;
        while (currentIndex < currentTotal) {
            if((currentTotal - currentIndex - 1) < 8){
                QString resultName;
                if(currentTotal<8)
                    resultName = finalImageName;
                else
                    resultName = QString(".\\temp\\L%1_%2-%3.tif").arg(level).arg(currentIndex).arg(currentTotal);
                QString names = getImgNames(tempList, currentIndex, currentTotal);
                QString cmd = QString("%1 %2 --output %3 %4").arg(currentStitcher).arg(argumentsStr).arg(resultName).arg(names);
                tempName << resultName;
                cmdList << cmd;
                //                qDebug()<<"tempName: "<<tempName;
                //                qDebug()<<"cmdList: "<<cmdList;
                currentIndex = currentTotal;
            }
            else{
                QString resultName = QString(".\\temp\\L%1_%2-%3.tif").arg(level).arg(currentIndex).arg(currentIndex + 3);
                QString names = getImgNames(tempList, currentIndex, currentIndex + 4);
                QString cmd = QString("%1 %2 --output %3 %4").arg(currentStitcher).arg(argumentsStr).arg(resultName).arg(names);
                tempName << resultName;
                cmdList << cmd;
                //                qDebug()<<"tempName: "<<tempName;
                //                qDebug()<<"cmdList: "<<cmdList;
                currentIndex += 4;
            }

        }
        level++;
        tempList.clear();
        tempList = tempName;
        tempName.clear();
    }

}

QString stitcher::getImgNames(QStringList &nameList, int begin, int end)
{
    QString result;
    for(int i = begin; i< end; ++i){
        result.append(" ");
        result.append(nameList[i]);

    }
    return result;
}
