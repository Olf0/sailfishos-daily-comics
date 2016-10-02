/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#ifndef PEANUTS_H
#define PEANUTS_H

#include "../Comic.h"

class Peanuts : public Comic
{
    Q_OBJECT

public:
    explicit Peanuts(QString id, QObject *parent = 0);
};

#endif // PEANUTS_H
