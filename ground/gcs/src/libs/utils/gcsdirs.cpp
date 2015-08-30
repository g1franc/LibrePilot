/**
 ******************************************************************************
 *
 * @file       gcsdirs.cpp
 * @author     The LibrePilot Project, http://www.librepilot.org Copyright (C) 2015.
 * @addtogroup
 * @{
 * @addtogroup
 * @{
 * @brief
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "gcsdirs.h"

#include <QDir>
#include <QDebug>
#include <QString>
#include <QApplication>

GCSDirs::GCSDirs()
    : d(0)
{}

QString GCSDirs::rootDir()
{
    // Figure out root : Up one from 'bin'
    QDir rootDir = QApplication::applicationDirPath();

    rootDir.cdUp();
    return rootDir.canonicalPath();
}

QString GCSDirs::libraryPath(QString provider)
{
    QString libPath = rootDir();

#ifdef Q_OS_MACX
    // TODO not correct...
    libPath += QLatin1String("/Plugins");
    Q_UNUSED(provider);
#else
    // GCS_LIBRARY_BASENAME is a compiler define set by qmake
    libPath += QLatin1Char('/') + QLatin1String(LIB_REL_PATH);
    libPath += QLatin1Char('/') + provider;
#endif
    return libPath;
}

QString GCSDirs::pluginPath(QString provider)
{
    QString pluginPath = rootDir();

#ifdef Q_OS_MACX
    // TODO not correct...
    pluginPath += QLatin1String("/Plugins");
    Q_UNUSED(provider);
#else
    // GCS_LIBRARY_BASENAME is a compiler define set by qmake
    pluginPath += QLatin1Char('/') + QLatin1String(LIB_REL_PATH);
    pluginPath += QLatin1Char('/') + provider;
    pluginPath += QLatin1String("/plugins");
#endif
    return pluginPath;
}

QString GCSDirs::sharePath(QString provider)
{
    QString sharePath = rootDir();

#ifdef Q_OS_MACX
    sharePath += QLatin1String("/Resources");
    Q_UNUSED(provider);
#else
    sharePath += QLatin1String("/share/openpilotgcs");
    sharePath += QLatin1Char('/') + provider;
#endif
    return sharePath;
}

QString GCSDirs::gcsPluginPath()
{
    return pluginPath("openpilotgcs");
}

QString GCSDirs::gcsSharePath()
{
    return sharePath("openpilotgcs");
}

void GCSDirs::debug()
{
    qDebug() << "=== GCSDirs ===";
    qDebug() << "GCS Share Path :" << gcsSharePath();
    qDebug() << "GCS Plugin Path :" << gcsPluginPath();
    qDebug() << "===================";
}
