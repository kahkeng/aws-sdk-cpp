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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ELASTICBEANSTALK_API Latency
  {
  public:
    Latency();
    Latency(const Aws::Utils::Xml::XmlNode& xmlNode);
    Latency& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline double GetP999() const{ return m_p999; }
    
    inline void SetP999(double value) { m_p999HasBeenSet = true; m_p999 = value; }

    
    inline Latency&  WithP999(double value) { SetP999(value); return *this;}

    
    inline double GetP99() const{ return m_p99; }
    
    inline void SetP99(double value) { m_p99HasBeenSet = true; m_p99 = value; }

    
    inline Latency&  WithP99(double value) { SetP99(value); return *this;}

    
    inline double GetP95() const{ return m_p95; }
    
    inline void SetP95(double value) { m_p95HasBeenSet = true; m_p95 = value; }

    
    inline Latency&  WithP95(double value) { SetP95(value); return *this;}

    
    inline double GetP90() const{ return m_p90; }
    
    inline void SetP90(double value) { m_p90HasBeenSet = true; m_p90 = value; }

    
    inline Latency&  WithP90(double value) { SetP90(value); return *this;}

    
    inline double GetP85() const{ return m_p85; }
    
    inline void SetP85(double value) { m_p85HasBeenSet = true; m_p85 = value; }

    
    inline Latency&  WithP85(double value) { SetP85(value); return *this;}

    
    inline double GetP75() const{ return m_p75; }
    
    inline void SetP75(double value) { m_p75HasBeenSet = true; m_p75 = value; }

    
    inline Latency&  WithP75(double value) { SetP75(value); return *this;}

    
    inline double GetP50() const{ return m_p50; }
    
    inline void SetP50(double value) { m_p50HasBeenSet = true; m_p50 = value; }

    
    inline Latency&  WithP50(double value) { SetP50(value); return *this;}

    
    inline double GetP10() const{ return m_p10; }
    
    inline void SetP10(double value) { m_p10HasBeenSet = true; m_p10 = value; }

    
    inline Latency&  WithP10(double value) { SetP10(value); return *this;}

  private:
    double m_p999;
    bool m_p999HasBeenSet;
    double m_p99;
    bool m_p99HasBeenSet;
    double m_p95;
    bool m_p95HasBeenSet;
    double m_p90;
    bool m_p90HasBeenSet;
    double m_p85;
    bool m_p85HasBeenSet;
    double m_p75;
    bool m_p75HasBeenSet;
    double m_p50;
    bool m_p50HasBeenSet;
    double m_p10;
    bool m_p10HasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws