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
#include <aws/sns/model/SetEndpointAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

SetEndpointAttributesRequest::SetEndpointAttributesRequest() : 
    m_endpointArnHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String SetEndpointAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetEndpointAttributes&";
  if(m_endpointArnHasBeenSet)
  {
    ss << "EndpointArn=" << StringUtils::URLEncode(m_endpointArn.c_str()) << "&";
  }
  if(m_attributesHasBeenSet)
  {
    unsigned attributesCount = 1;
    for(auto& item : m_attributes)
    {
      ss << "Attributes.entry." << attributesCount << ".key="
          << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "Attributes.entry." << attributesCount << ".value="
          << StringUtils::URLEncode(item.second.c_str()) << "&";
      attributesCount++;
    }
  }
  ss << "Version=2010-03-31";
  return ss.str();
}

