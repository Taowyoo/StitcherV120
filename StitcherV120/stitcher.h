#ifndef STITCHER_H
#define STITCHER_H

#include <QObject>

class stitcher : public QObject
{
    Q_OBJECT
public:
    explicit stitcher(QObject *parent = nullptr);

signals:

public slots:
};

#endif // STITCHER_H