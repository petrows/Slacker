/* ============================================================
* QupZilla - WebKit based browser
* Copyright (C) 2013-2014  David Rosca <nowrep@gmail.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
* ============================================================ */
#include "notificationpresenter.h"
//#include <mainapplication.h>
#include <QDebug>

NotificationPresenter::NotificationPresenter()
    : QWebNotificationPresenter()
{
}

void NotificationPresenter::showNotification(const QWebNotificationData* data)
{
    if (data->message().isEmpty()) {
        qDebug() << "NotificationPresenter: HTML notifications are not supported.";
        return;
    }

    qDebug() << "AASDDDDDDD!!!!!!!!!!!!!!!!!!" << data->title() << data->message();

//    mApp->desktopNotifications()->showNotification(QPixmap(":qupzilla.png"),
//            data->title(),
//            data->message());
}