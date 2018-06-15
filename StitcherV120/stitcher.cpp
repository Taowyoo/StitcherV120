#include "stitcher.h"
#include <QDebug>
stitcher::stitcher(QObject *parent) : QObject(parent)
{
    stitcherType = 0;
}

void stitcher::run()
{
    generateCmd();
    for (int i = 0; i < cmdList.size(); ++i){
        qDebug() << cmdList[i];
    }

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
    if(stitcherType == 1){
    currentStitcher = stitcher6Name;
    }
    else if(stitcherType == 0){
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

void stitcher::setCurrentStitcher(int type)
{
    currentStitcher = type;
}

void stitcher::setArgumentsStr(const QString &value)
{
    argumentsStr = value;
}

void stitcher::setResultName(const QString &value)
{
    resultName = value;
}

void stitcher::generateCmd()
{
    //QString cmd;
    //int totalImagesNum = imagesName.size();
    QStringList tempList(imagesName);
    int level = 0;
    while (tempList.size() > 1) {
        //QString reusltcmd;
        int currentTotal = tempList.size();
        int currentIndex = 0;
        while (currentIndex < currentTotal) {
            if((currentTotal - currentIndex - 1) < 8){
                QString resultName = QString("L%1_%2-%3.tif").arg(level).arg(currentIndex).arg(currentTotal);
                QString names = getImgNames(tempList, currentIndex, currentTotal);
                QString cmd = QString("%1 %2 --output %3 %4").arg(currentStitcher).arg(argumentsStr).arg(resultName).arg(names);
                tempName << resultName;
                cmdList << cmd;
            }
            else{
                QString resultName = QString("L%1_%2-%3.tif").arg(level).arg(currentIndex).arg(currentIndex + 3);
                QString names = getImgNames(tempList, currentIndex, currentIndex + 4);
                QString cmd = QString("%1 %2 --output %3 %4").arg(currentStitcher).arg(argumentsStr).arg(resultName).arg(names);
                tempName << resultName;
                cmdList << cmd;
            }

        }
        level++;
        tempList.clear();
        tempList = tempName;
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
