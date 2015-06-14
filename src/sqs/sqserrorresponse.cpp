/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqserrorresponse.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsResponse
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param parent       This object's parent.
 */
SqsErrorResponse::SqsErrorResponse(QObject * const parent)
    : SqsResponse(parent)
{

}

bool SqsErrorResponse::isErrorResponse() const
{
    return true;
}

bool SqsErrorResponse::isValid() const
{
    Q_ASSERT_X(false, Q_FUNC_INFO, "not implemented yet");
    return false;
}

bool SqsErrorResponse::parse(QNetworkReply * const reply)
{
    Q_UNUSED(reply)
    Q_ASSERT_X(false, Q_FUNC_INFO, "not implemented yet");
    return false;
}

QTAWS_END_NAMESPACE