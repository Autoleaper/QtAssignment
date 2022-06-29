﻿#ifndef TOWERPOSITION_H
#define TOWERPOSITION_H

#include <QSize>
#include <QPainter>
#include <QString>

class TowerPosition{
public:
    TowerPosition(QPoint pos, QString path = (":/images/towerdir.png"));
    QPoint getCenterPos();//防御塔坑中心点
    QPoint getPos();

    bool ContainPos(QPoint pos);//判断pos是否在防御塔坑的范围内

    void draw(QPainter* painter)const;

    bool hasTower();//判定是否有防御塔

    void setHasTower(bool hasTower = true);//设置是否有防御塔

private:
    QPoint m_pos;
    QString m_path;

    bool m_hasTower;
    static const QSize m_fixedSize;
};



#endif // TOWERPOSITION_H
