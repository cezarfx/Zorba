/*
 * Copyright 2006-2012 The FLWOR Foundation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
// ******************************************
// *                                        *
// * THIS IS A GENERATED FILE. DO NOT EDIT! *
// * SEE .xml FILE WITH SAME NAME           *
// *                                        *
// ******************************************


#include "stdafx.h"
#include "zorbatypes/rchandle.h"
#include "zorbatypes/zstring.h"
#include "runtime/visitors/planiter_visitor.h"
#include "runtime/reference/reference.h"
#include "system/globalenv.h"



namespace zorba {

// <ReferenceIterator>
SERIALIZABLE_CLASS_VERSIONS(ReferenceIterator)

void ReferenceIterator::serialize(::zorba::serialization::Archiver& ar)
{
  serialize_baseclass(ar,
  (NaryBaseIterator<ReferenceIterator, PlanIteratorState>*)this);
}


void ReferenceIterator::accept(PlanIterVisitor& v) const
{
  v.beginVisit(*this);

  std::vector<PlanIter_t>::const_iterator lIter = theChildren.begin();
  std::vector<PlanIter_t>::const_iterator lEnd = theChildren.end();
  for ( ; lIter != lEnd; ++lIter ){
    (*lIter)->accept(v);
  }

  v.endVisit(*this);
}

ReferenceIterator::~ReferenceIterator() {}


zstring ReferenceIterator::getNameAsString() const {
  return "fn-reference:reference";
}
// </ReferenceIterator>


// <HasReferenceIterator>
SERIALIZABLE_CLASS_VERSIONS(HasReferenceIterator)

void HasReferenceIterator::serialize(::zorba::serialization::Archiver& ar)
{
  serialize_baseclass(ar,
  (NaryBaseIterator<HasReferenceIterator, PlanIteratorState>*)this);
}


void HasReferenceIterator::accept(PlanIterVisitor& v) const
{
  v.beginVisit(*this);

  std::vector<PlanIter_t>::const_iterator lIter = theChildren.begin();
  std::vector<PlanIter_t>::const_iterator lEnd = theChildren.end();
  for ( ; lIter != lEnd; ++lIter ){
    (*lIter)->accept(v);
  }

  v.endVisit(*this);
}

HasReferenceIterator::~HasReferenceIterator() {}


zstring HasReferenceIterator::getNameAsString() const {
  return "fn-reference:has-reference";
}
// </HasReferenceIterator>


// <AssignReferenceIterator>
SERIALIZABLE_CLASS_VERSIONS(AssignReferenceIterator)

void AssignReferenceIterator::serialize(::zorba::serialization::Archiver& ar)
{
  serialize_baseclass(ar,
  (NaryBaseIterator<AssignReferenceIterator, PlanIteratorState>*)this);
}


void AssignReferenceIterator::accept(PlanIterVisitor& v) const
{
  v.beginVisit(*this);

  std::vector<PlanIter_t>::const_iterator lIter = theChildren.begin();
  std::vector<PlanIter_t>::const_iterator lEnd = theChildren.end();
  for ( ; lIter != lEnd; ++lIter ){
    (*lIter)->accept(v);
  }

  v.endVisit(*this);
}

AssignReferenceIterator::~AssignReferenceIterator() {}


zstring AssignReferenceIterator::getNameAsString() const {
  return "fn-reference:assign-reference";
}
// </AssignReferenceIterator>


// <DereferenceIterator>
SERIALIZABLE_CLASS_VERSIONS(DereferenceIterator)

void DereferenceIterator::serialize(::zorba::serialization::Archiver& ar)
{
  serialize_baseclass(ar,
  (NaryBaseIterator<DereferenceIterator, PlanIteratorState>*)this);
}


void DereferenceIterator::accept(PlanIterVisitor& v) const
{
  v.beginVisit(*this);

  std::vector<PlanIter_t>::const_iterator lIter = theChildren.begin();
  std::vector<PlanIter_t>::const_iterator lEnd = theChildren.end();
  for ( ; lIter != lEnd; ++lIter ){
    (*lIter)->accept(v);
  }

  v.endVisit(*this);
}

DereferenceIterator::~DereferenceIterator() {}


zstring DereferenceIterator::getNameAsString() const {
  return "fn-reference:dereference";
}
// </DereferenceIterator>



}


