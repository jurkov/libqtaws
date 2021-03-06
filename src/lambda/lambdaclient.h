/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_LAMBDACLIENT_H
#define QTAWS_LAMBDACLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Lambda {

class LambdaClientPrivate;

class QTAWS_EXPORT LambdaClient : public AwsAbstractClient {
    Q_OBJECT

public:
    LambdaClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    LambdaClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddPermissionResponse * addPermission(const AddPermissionRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateEventSourceMappingResponse * createEventSourceMapping(const CreateEventSourceMappingRequest &request);
    CreateFunctionResponse * createFunction(const CreateFunctionRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteEventSourceMappingResponse * deleteEventSourceMapping(const DeleteEventSourceMappingRequest &request);
    DeleteFunctionResponse * deleteFunction(const DeleteFunctionRequest &request);
    GetAliasResponse * getAlias(const GetAliasRequest &request);
    GetEventSourceMappingResponse * getEventSourceMapping(const GetEventSourceMappingRequest &request);
    GetFunctionResponse * getFunction(const GetFunctionRequest &request);
    GetFunctionConfigurationResponse * getFunctionConfiguration(const GetFunctionConfigurationRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    InvokeResponse * invoke(const InvokeRequest &request);
    InvokeAsyncResponse * invokeAsync(const InvokeAsyncRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListEventSourceMappingsResponse * listEventSourceMappings(const ListEventSourceMappingsRequest &request);
    ListFunctionsResponse * listFunctions(const ListFunctionsRequest &request);
    ListVersionsByFunctionResponse * listVersionsByFunction(const ListVersionsByFunctionRequest &request);
    PublishVersionResponse * publishVersion(const PublishVersionRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    UpdateAliasResponse * updateAlias(const UpdateAliasRequest &request);
    UpdateEventSourceMappingResponse * updateEventSourceMapping(const UpdateEventSourceMappingRequest &request);
    UpdateFunctionCodeResponse * updateFunctionCode(const UpdateFunctionCodeRequest &request);
    UpdateFunctionConfigurationResponse * updateFunctionConfiguration(const UpdateFunctionConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(LambdaClient)
    Q_DISABLE_COPY(LambdaClient)

};

} // namespace Lambda
} // namespace AWS

#endif
