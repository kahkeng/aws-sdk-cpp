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
#include <aws/dynamodb/model/ScalarAttributeType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int S_HASH = HashingUtils::HashString("S");
static const int N_HASH = HashingUtils::HashString("N");
static const int B_HASH = HashingUtils::HashString("B");

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
namespace ScalarAttributeTypeMapper
{
ScalarAttributeType GetScalarAttributeTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == S_HASH)
  {
    return ScalarAttributeType::S;
  }
  else if (hashCode == N_HASH)
  {
    return ScalarAttributeType::N;
  }
  else if (hashCode == B_HASH)
  {
    return ScalarAttributeType::B;
  }

  return ScalarAttributeType::NOT_SET;
}

Aws::String GetNameForScalarAttributeType(ScalarAttributeType value)
{
  switch(value)
  {
  case ScalarAttributeType::S:
    return "S";
  case ScalarAttributeType::N:
    return "N";
  case ScalarAttributeType::B:
    return "B";
  default:
    return "";
  }
}

} // namespace ScalarAttributeTypeMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
