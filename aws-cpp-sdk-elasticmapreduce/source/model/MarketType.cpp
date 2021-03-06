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
#include <aws/elasticmapreduce/model/MarketType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ON_DEMAND_HASH = HashingUtils::HashString("ON_DEMAND");
static const int SPOT_HASH = HashingUtils::HashString("SPOT");

namespace Aws
{
namespace EMR
{
namespace Model
{
namespace MarketTypeMapper
{
MarketType GetMarketTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == ON_DEMAND_HASH)
  {
    return MarketType::ON_DEMAND;
  }
  else if (hashCode == SPOT_HASH)
  {
    return MarketType::SPOT;
  }

  return MarketType::NOT_SET;
}

Aws::String GetNameForMarketType(MarketType value)
{
  switch(value)
  {
  case MarketType::ON_DEMAND:
    return "ON_DEMAND";
  case MarketType::SPOT:
    return "SPOT";
  default:
    return "";
  }
}

} // namespace MarketTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
