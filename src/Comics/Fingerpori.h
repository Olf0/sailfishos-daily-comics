/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#ifndef FINGERPORI_H
#define FINGERPORI_H

#include "../Comic.h"

class Fingerpori : public Comic
{
    Q_OBJECT

public:
    explicit Fingerpori(QString id, QObject *parent = 0);
};

#endif // FINGERPORI_H
