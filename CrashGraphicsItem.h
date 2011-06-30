/***************************************************************************
 *   Copyright (c) 2011  Andreas Kling <awesomekling@gmail.com>            *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
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
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/

#ifndef CrashGraphicsItem_h
#define CrashGraphicsItem_h

#include <QtGui/QGraphicsItem>

class CrashGraphicsItem : public QGraphicsItem
{
public:
    CrashGraphicsItem(QGraphicsItem* parent = 0);
    virtual ~CrashGraphicsItem();

    void setGeometry(const QRectF& rect);
    virtual QRectF boundingRect() const;

    virtual void paint(QPainter*, const QStyleOptionGraphicsItem*, QWidget* = 0);
private:
    QRectF m_geometry;
};

#endif
