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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/model/PolicyScopeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API ListPoliciesRequest : public IAMRequest
  {
  public:
    ListPoliciesRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The scope to use for filtering the results. </p> <p>To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. To list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. </p> <p>This parameter is optional. If it is not included, or if it is set to <code>All</code>, all policies are returned.</p>
    */
    inline const PolicyScopeType& GetScope() const{ return m_scope; }

    /*
     <p>The scope to use for filtering the results. </p> <p>To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. To list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. </p> <p>This parameter is optional. If it is not included, or if it is set to <code>All</code>, all policies are returned.</p>
    */
    inline void SetScope(const PolicyScopeType& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /*
     <p>The scope to use for filtering the results. </p> <p>To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. To list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. </p> <p>This parameter is optional. If it is not included, or if it is set to <code>All</code>, all policies are returned.</p>
    */
    inline void SetScope(PolicyScopeType&& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /*
     <p>The scope to use for filtering the results. </p> <p>To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. To list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. </p> <p>This parameter is optional. If it is not included, or if it is set to <code>All</code>, all policies are returned.</p>
    */
    inline ListPoliciesRequest& WithScope(const PolicyScopeType& value) { SetScope(value); return *this;}

    /*
     <p>The scope to use for filtering the results. </p> <p>To list only AWS managed policies, set <code>Scope</code> to <code>AWS</code>. To list only the customer managed policies in your AWS account, set <code>Scope</code> to <code>Local</code>. </p> <p>This parameter is optional. If it is not included, or if it is set to <code>All</code>, all policies are returned.</p>
    */
    inline ListPoliciesRequest& WithScope(PolicyScopeType&& value) { SetScope(value); return *this;}

    /*
     <p>A flag to filter the results to only the attached policies. </p> <p>When <code>OnlyAttached</code> is <code>true</code>, the returned list contains only the policies that are attached to a user, group, or role. When <code>OnlyAttached</code> is <code>false</code>, or when the parameter is not included, all policies are returned.</p>
    */
    inline bool GetOnlyAttached() const{ return m_onlyAttached; }

    /*
     <p>A flag to filter the results to only the attached policies. </p> <p>When <code>OnlyAttached</code> is <code>true</code>, the returned list contains only the policies that are attached to a user, group, or role. When <code>OnlyAttached</code> is <code>false</code>, or when the parameter is not included, all policies are returned.</p>
    */
    inline void SetOnlyAttached(bool value) { m_onlyAttachedHasBeenSet = true; m_onlyAttached = value; }

    /*
     <p>A flag to filter the results to only the attached policies. </p> <p>When <code>OnlyAttached</code> is <code>true</code>, the returned list contains only the policies that are attached to a user, group, or role. When <code>OnlyAttached</code> is <code>false</code>, or when the parameter is not included, all policies are returned.</p>
    */
    inline ListPoliciesRequest& WithOnlyAttached(bool value) { SetOnlyAttached(value); return *this;}

    /*
     <p>The path prefix for filtering the results. This parameter is optional. If it is not included, it defaults to a slash (/), listing all policies.</p>
    */
    inline const Aws::String& GetPathPrefix() const{ return m_pathPrefix; }

    /*
     <p>The path prefix for filtering the results. This parameter is optional. If it is not included, it defaults to a slash (/), listing all policies.</p>
    */
    inline void SetPathPrefix(const Aws::String& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /*
     <p>The path prefix for filtering the results. This parameter is optional. If it is not included, it defaults to a slash (/), listing all policies.</p>
    */
    inline void SetPathPrefix(Aws::String&& value) { m_pathPrefixHasBeenSet = true; m_pathPrefix = value; }

    /*
     <p>The path prefix for filtering the results. This parameter is optional. If it is not included, it defaults to a slash (/), listing all policies.</p>
    */
    inline void SetPathPrefix(const char* value) { m_pathPrefixHasBeenSet = true; m_pathPrefix.assign(value); }

    /*
     <p>The path prefix for filtering the results. This parameter is optional. If it is not included, it defaults to a slash (/), listing all policies.</p>
    */
    inline ListPoliciesRequest& WithPathPrefix(const Aws::String& value) { SetPathPrefix(value); return *this;}

    /*
     <p>The path prefix for filtering the results. This parameter is optional. If it is not included, it defaults to a slash (/), listing all policies.</p>
    */
    inline ListPoliciesRequest& WithPathPrefix(Aws::String&& value) { SetPathPrefix(value); return *this;}

    /*
     <p>The path prefix for filtering the results. This parameter is optional. If it is not included, it defaults to a slash (/), listing all policies.</p>
    */
    inline ListPoliciesRequest& WithPathPrefix(const char* value) { SetPathPrefix(value); return *this;}

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListPoliciesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListPoliciesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p>Use this parameter only when paginating results and only after you have received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received.</p>
    */
    inline ListPoliciesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /*
     <p>Use this only when paginating results to indicate the maximum number of items you want in the response. If there are additional items beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>.</p> <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline long GetMaxItems() const{ return m_maxItems; }

    /*
     <p>Use this only when paginating results to indicate the maximum number of items you want in the response. If there are additional items beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>.</p> <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /*
     <p>Use this only when paginating results to indicate the maximum number of items you want in the response. If there are additional items beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>.</p> <p>This parameter is optional. If you do not include it, it defaults to 100.</p>
    */
    inline ListPoliciesRequest& WithMaxItems(long value) { SetMaxItems(value); return *this;}

  private:
    PolicyScopeType m_scope;
    bool m_scopeHasBeenSet;
    bool m_onlyAttached;
    bool m_onlyAttachedHasBeenSet;
    Aws::String m_pathPrefix;
    bool m_pathPrefixHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
