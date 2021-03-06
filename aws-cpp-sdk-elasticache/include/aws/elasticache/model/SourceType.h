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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{
  enum class SourceType
  {
    NOT_SET,
    cache_cluster,
    cache_parameter_group,
    cache_security_group,
    cache_subnet_group
  };

namespace SourceTypeMapper
{
AWS_ELASTICACHE_API SourceType GetSourceTypeForName(const Aws::String& name);

AWS_ELASTICACHE_API Aws::String GetNameForSourceType(SourceType value);
} // namespace SourceTypeMapper
} // namespace Model
} // namespace ElastiCache
} // namespace Aws
