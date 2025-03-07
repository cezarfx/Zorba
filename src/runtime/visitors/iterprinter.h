/*
 * Copyright 2006-2008 The FLWOR Foundation.
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
#pragma once
#ifndef ZORBA_VISITORPRINTER_H
#define ZORBA_VISITORPRINTER_H

// standard
#include <ostream>
#include <stack>
#include <string>

// Zorba
#include <zorba/internal/ztd.h>
#include "common/common.h"
#include "zorbatypes/schema_types.h"

namespace zorba {

///////////////////////////////////////////////////////////////////////////////

class IterPrinter {
public:
  IterPrinter( std::ostream &os, char const *descr = "" );
  virtual ~IterPrinter();

  virtual void start() = 0;
  virtual void stop() = 0;

  virtual void startBeginVisit( char const *name, int addr ) = 0;
  virtual void endBeginVisit( int addr ) = 0;

  virtual void addAttribute( char const *name, char const *value ) = 0;
  virtual void addAttribute( char const *name, xs_long value ) = 0;

  template<class ValueType>
  typename std::enable_if<ZORBA_HAS_C_STR(ValueType),void>::type
  addAttribute( char const *name, ValueType const &value ) {
    return addAttribute( name, value.c_str() );
  }

  virtual void startEndVisit() = 0;
  virtual void endEndVisit() = 0;

protected:  
  zstring descr_;
  std::ostream &os_;
};

///////////////////////////////////////////////////////////////////////////////

class XMLIterPrinter : public IterPrinter {
public:
  XMLIterPrinter( std::ostream&, char const* = "" );
  ~XMLIterPrinter();

  void start();
  void stop();

  void startBeginVisit( char const *name, int addr );
  void endBeginVisit( int addr );

  void addAttribute( char const *name, char const *value );
  void addAttribute( char const *name, xs_long value );

  void startEndVisit();
  void endEndVisit();

private:
  std::stack<std::string> theNameStack;
  bool theOpenStart;
};

///////////////////////////////////////////////////////////////////////////////

class DOTIterPrinter : public IterPrinter {
public:
  DOTIterPrinter( std::ostream&, char const* = "" );
  ~DOTIterPrinter();
      
  void start();
  void stop();

  void startBeginVisit( char const *name, int addr );
  void endBeginVisit( int addr );

  void addAttribute( char const *name, char const *value );
  void addAttribute( char const *name, xs_long value );

  void startEndVisit();
  void endEndVisit();

private:
  std::stack<int> theNameStack;
};

///////////////////////////////////////////////////////////////////////////////

class JSONIterPrinter : public IterPrinter {
public:
  JSONIterPrinter( std::ostream&, char const* = "" );
  ~JSONIterPrinter();

  void start();
  void stop();

  void startBeginVisit( char const *name, int addr );
  void endBeginVisit( int addr );

  void addAttribute( char const *name, char const *value );
  void addAttribute( char const *name, xs_long value );

  void startEndVisit();
  void endEndVisit();

private:
  std::stack<bool> theListStack;
};

///////////////////////////////////////////////////////////////////////////////

} // namespace zorba

#endif /* ZORBA_VISITORPRINTER_H */
/*
 * Local variables:
 * mode: c++
 * End:
 */
/* vim:set et sw=2 ts=2: */
