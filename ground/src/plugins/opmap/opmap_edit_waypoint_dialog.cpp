/**
 ******************************************************************************
 *
 * @file       opmap_edit_waypoint_dialog.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief
 * @see        The GNU Public License (GPL) Version 3
 * @defgroup   opmap
 * @{
 *
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

#include "opmap_edit_waypoint_dialog.h"
#include "ui_opmap_edit_waypoint_dialog.h"

opmap_edit_waypoint_dialog::opmap_edit_waypoint_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::opmap_edit_waypoint_dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog);
}

opmap_edit_waypoint_dialog::~opmap_edit_waypoint_dialog()
{
    delete ui;
}

void opmap_edit_waypoint_dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void opmap_edit_waypoint_dialog::on_pushButtonOK_clicked()
{
    // to do

    close();
}

void opmap_edit_waypoint_dialog::on_pushButtonApply_clicked()
{
    // to do
}

void opmap_edit_waypoint_dialog::on_pushButtonRevert_clicked()
{
    // to do
}

void opmap_edit_waypoint_dialog::on_pushButtonCancel_clicked()
{
    close();
}
