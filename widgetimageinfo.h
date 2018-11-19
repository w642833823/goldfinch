/***************************************************************************
 *      Project created by QtCreator 2018-06-01T17:15:24                   *
 *                                                                         *
 *    goldfinch Copyright (C) 2014 AbouZakaria <yahiaui@gmail.com>         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

#ifndef WIDGETIMAGEINFO_H
#define WIDGETIMAGEINFO_H

#include <QObject>
#include <QWidget>

class WidgetImageInfo : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetImageInfo(QWidget *parent = nullptr);
   virtual void paintEvent(QPaintEvent *event);
signals:

public slots:
    void setImage(QImage img){
          mImage48=img.scaled(50,50,Qt::KeepAspectRatio,Qt::SmoothTransformation);
          mImage=img;
          update();
    }
    void setTitle(const QString &tit,const QString &info){mTitle=tit;mInfo=info;update();}
   // void setInfo(const QString &info){mInfo=info;}
    void setHorizontal(bool arg){mHorisontal=arg;update();}
private:

    QImage mImage;
    QImage mImage48;
    QString mTitle;
    QString mInfo;
    bool mHorisontal;

};

#endif // WIDGETIMAGEINFO_H
