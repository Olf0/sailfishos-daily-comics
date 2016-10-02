/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#ifndef THEGAMERCAT_H
#define THEGAMERCAT_H

#include "../Comic.h"

class TheGamerCat : public Comic
{
    Q_OBJECT

public:
    explicit TheGamerCat(QString id, QObject *parent = 0);
};

#endif // THEGAMERCAT_H
