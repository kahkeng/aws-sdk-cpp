/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/codedeploy/codedeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>

namespace Aws
{
namespace codedeploy
{
namespace Model
{

  /*
    <p>Represents the input of a get application revision operation.</p>
  */
  class AWS_CODEDEPLOY_API GetApplicationRevisionRequest : public codedeployRequest
  {
  public:
    GetApplicationRevisionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The name of the application that corresponds to the revision.</p>
    */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    /*
     <p>The name of the application that corresponds to the revision.</p>
    */
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    /*
     <p>The name of the application that corresponds to the revision.</p>
    */
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    /*
     <p>The name of the application that corresponds to the revision.</p>
    */
    inline GetApplicationRevisionRequest&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /*
     <p>The name of the application that corresponds to the revision.</p>
    */
    inline GetApplicationRevisionRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /*
     <p>Information about the application revision to get, including the revision's type and its location.</p>
    */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }
    /*
     <p>Information about the application revision to get, including the revision's type and its location.</p>
    */
    inline void SetRevision(const RevisionLocation& value) { m_revision = value; }

    /*
     <p>Information about the application revision to get, including the revision's type and its location.</p>
    */
    inline GetApplicationRevisionRequest&  WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

  private:
    Aws::String m_applicationName;
    RevisionLocation m_revision;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws