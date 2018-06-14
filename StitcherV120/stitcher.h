﻿#ifndef STITCHER_H
#define STITCHER_H

#include <QObject>
#include <QVector>
class stitcher : public QObject
{
    Q_OBJECT
public:
    explicit stitcher(QObject *parent = nullptr);
    void run();
    void stop();

    void setStitcher3Name(const QString &value);

    void setStitcher6Name(const QString &value);

    void setStitcherType(int value);

    void setArgument(const QVector<QStringList> &value);

    void setImagesName(const QStringList &value);

    void setCurrentStitcher(int type);

private:
    QString stitcher3Name;
    QString stitcher6Name;
    QString currentStitcher;
    int stitcherType;
    QVector<QStringList> argument ;
    QString argumentsStr;
    QStringList imagesName;
    QStringList tempName;
    QStringList cmdList;
    void generateCmd();
    QString getImgNames(QStringList &nameList, int begin, int end);
signals:

public slots:
};

#endif // STITCHER_H
