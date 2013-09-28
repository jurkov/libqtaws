/*
    Copyright 2013 Paul Colby

    This file is part of libqtaws.

    libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSANONYMOUSCREDENTIALS_H
#define AWSANONYMOUSCREDENTIALS_H

#include "awsabstractcredentials.h"

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAnonymousCredentials : public AwsAbstractCredentials {
    Q_OBJECT

public:
    AwsAnonymousCredentials(QObject * const parent = 0);

    virtual QString accessKeyId() const;
    virtual QString secretKey() const;
    virtual QString token() const;
};

QTAWS_END_NAMESPACE

#endif