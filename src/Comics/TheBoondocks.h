/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#ifndef THEBOONDOCKS_H
#define THEBOONDOCKS_H

#include "../Comic.h"

class TheBoondocks : public Comic
{
    Q_OBJECT

public:
    explicit TheBoondocks(QString id, QObject *parent = 0);
};

#endif // THEBOONDOCKS_H
