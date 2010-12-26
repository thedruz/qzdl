/*
 * This file is part of qZDL
 * Copyright (C) 2007-2010  Cody Harris
 * 
 * qZDL is free software: you can redistribute it and/or modify
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
 */
 
#include <QtGui>
#include <QObject>
#include "ZQWidget.h"
#include "ZSPList.h"
#include "ZIWadList.h"

class zSettingsPane: public ZQWidget{
Q_OBJECT
public: 
	zSettingsPane(QWidget *parent);
	virtual void rebuild();
	virtual void newConfig();
	void startRead();
	void writeConfig();
protected slots:
	void checkNow();	
private:
	QLineEdit *alwaysArgs;
	QCheckBox *launchClose;
	ZIWadList *iwadList;
	ZSPList *sourceList;
	QCheckBox *updater;
	QCheckBox *pathQuote;
	QCheckBox *slashConvert;
	
};
