/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#ifndef GWTB_H
#define GWTB_H

#include "../Comic.h"

class Gwtb : public Comic
{
    Q_OBJECT

public:
    explicit Gwtb(QString id, QObject *parent = 0);
};

#endif // GWTB_H
