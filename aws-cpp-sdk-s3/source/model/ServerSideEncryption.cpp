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
#include <aws/s3/model/ServerSideEncryption.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int AES256_HASH = HashingUtils::HashString("AES256");
static const int aws_kms_HASH = HashingUtils::HashString("aws:kms");

namespace Aws
{
namespace S3
{
namespace Model
{
namespace ServerSideEncryptionMapper
{
ServerSideEncryption GetServerSideEncryptionForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == AES256_HASH)
  {
    return ServerSideEncryption::AES256;
  }
  else if (hashCode == aws_kms_HASH)
  {
    return ServerSideEncryption::aws_kms;
  }

  return ServerSideEncryption::NOT_SET;
}

Aws::String GetNameForServerSideEncryption(ServerSideEncryption value)
{
  switch(value)
  {
  case ServerSideEncryption::AES256:
    return "AES256";
  case ServerSideEncryption::aws_kms:
    return "aws:kms";
  default:
    return "";
  }
}

} // namespace ServerSideEncryptionMapper
} // namespace Model
} // namespace S3
} // namespace Aws
