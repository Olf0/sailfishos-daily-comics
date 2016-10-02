/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#ifndef WRONGHANDS_H
#define WRONGHANDS_H

#include "../Comic.h"

class WrongHands : public Comic
{
    Q_OBJECT

public:
    explicit WrongHands(QString id, QObject *parent = 0);
};

#endif // WRONGHANDS_H
