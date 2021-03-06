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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Subnet.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /*
    <p> Contains the result of a successful invocation of the following actions: </p> <ul> <li><a>CreateDBSubnetGroup</a></li> <li><a>ModifyDBSubnetGroup</a></li> <li><a>DescribeDBSubnetGroups</a></li> <li><a>DeleteDBSubnetGroup</a></li> </ul> <p>This data type is used as a response element in the <a>DescribeDBSubnetGroups</a> action.</p>
  */
  class AWS_RDS_API DBSubnetGroup
  {
  public:
    DBSubnetGroup();
    DBSubnetGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBSubnetGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p> Specifies the name of the DB Subnet Group. </p>
    */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /*
     <p> Specifies the name of the DB Subnet Group. </p>
    */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /*
     <p> Specifies the name of the DB Subnet Group. </p>
    */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /*
     <p> Specifies the name of the DB Subnet Group. </p>
    */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /*
     <p> Specifies the name of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> Specifies the name of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> Specifies the name of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /*
     <p> Provides the description of the DB Subnet Group. </p>
    */
    inline const Aws::String& GetDBSubnetGroupDescription() const{ return m_dBSubnetGroupDescription; }

    /*
     <p> Provides the description of the DB Subnet Group. </p>
    */
    inline void SetDBSubnetGroupDescription(const Aws::String& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }

    /*
     <p> Provides the description of the DB Subnet Group. </p>
    */
    inline void SetDBSubnetGroupDescription(Aws::String&& value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription = value; }

    /*
     <p> Provides the description of the DB Subnet Group. </p>
    */
    inline void SetDBSubnetGroupDescription(const char* value) { m_dBSubnetGroupDescriptionHasBeenSet = true; m_dBSubnetGroupDescription.assign(value); }

    /*
     <p> Provides the description of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithDBSubnetGroupDescription(const Aws::String& value) { SetDBSubnetGroupDescription(value); return *this;}

    /*
     <p> Provides the description of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithDBSubnetGroupDescription(Aws::String&& value) { SetDBSubnetGroupDescription(value); return *this;}

    /*
     <p> Provides the description of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithDBSubnetGroupDescription(const char* value) { SetDBSubnetGroupDescription(value); return *this;}

    /*
     <p> Provides the VpcId of the DB Subnet Group. </p>
    */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /*
     <p> Provides the VpcId of the DB Subnet Group. </p>
    */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /*
     <p> Provides the VpcId of the DB Subnet Group. </p>
    */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /*
     <p> Provides the VpcId of the DB Subnet Group. </p>
    */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /*
     <p> Provides the VpcId of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /*
     <p> Provides the VpcId of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithVpcId(Aws::String&& value) { SetVpcId(value); return *this;}

    /*
     <p> Provides the VpcId of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /*
     <p> Provides the status of the DB Subnet Group. </p>
    */
    inline const Aws::String& GetSubnetGroupStatus() const{ return m_subnetGroupStatus; }

    /*
     <p> Provides the status of the DB Subnet Group. </p>
    */
    inline void SetSubnetGroupStatus(const Aws::String& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = value; }

    /*
     <p> Provides the status of the DB Subnet Group. </p>
    */
    inline void SetSubnetGroupStatus(Aws::String&& value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus = value; }

    /*
     <p> Provides the status of the DB Subnet Group. </p>
    */
    inline void SetSubnetGroupStatus(const char* value) { m_subnetGroupStatusHasBeenSet = true; m_subnetGroupStatus.assign(value); }

    /*
     <p> Provides the status of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithSubnetGroupStatus(const Aws::String& value) { SetSubnetGroupStatus(value); return *this;}

    /*
     <p> Provides the status of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithSubnetGroupStatus(Aws::String&& value) { SetSubnetGroupStatus(value); return *this;}

    /*
     <p> Provides the status of the DB Subnet Group. </p>
    */
    inline DBSubnetGroup& WithSubnetGroupStatus(const char* value) { SetSubnetGroupStatus(value); return *this;}

    /*
     <p> Contains a list of <a>Subnet</a> elements. </p>
    */
    inline const Aws::Vector<Subnet>& GetSubnets() const{ return m_subnets; }

    /*
     <p> Contains a list of <a>Subnet</a> elements. </p>
    */
    inline void SetSubnets(const Aws::Vector<Subnet>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /*
     <p> Contains a list of <a>Subnet</a> elements. </p>
    */
    inline void SetSubnets(Aws::Vector<Subnet>&& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /*
     <p> Contains a list of <a>Subnet</a> elements. </p>
    */
    inline DBSubnetGroup& WithSubnets(const Aws::Vector<Subnet>& value) { SetSubnets(value); return *this;}

    /*
     <p> Contains a list of <a>Subnet</a> elements. </p>
    */
    inline DBSubnetGroup& WithSubnets(Aws::Vector<Subnet>&& value) { SetSubnets(value); return *this;}

    /*
     <p> Contains a list of <a>Subnet</a> elements. </p>
    */
    inline DBSubnetGroup& AddSubnets(const Subnet& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /*
     <p> Contains a list of <a>Subnet</a> elements. </p>
    */
    inline DBSubnetGroup& AddSubnets(Subnet&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_dBSubnetGroupDescription;
    bool m_dBSubnetGroupDescriptionHasBeenSet;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::String m_subnetGroupStatus;
    bool m_subnetGroupStatusHasBeenSet;
    Aws::Vector<Subnet> m_subnets;
    bool m_subnetsHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
