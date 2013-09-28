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

#ifndef AWSSIGNATUREV3_P_H
#define AWSSIGNATUREV3_P_H

#include "qtawsglobal.h"

#include <QString>

QTAWS_BEGIN_NAMESPACE

class AwsSignatureV3;

class QTAWS_EXPORT AwsSignatureV3Private {
    Q_DECLARE_PUBLIC(AwsSignatureV3)

public:
    AwsSignatureV3Private(AwsSignatureV3 * const q);

private:
    AwsSignatureV3 * const q_ptr; ///< Internal q-pointer.
    friend class TestAwsSignatureV3;
};

QTAWS_END_NAMESPACE

#endif