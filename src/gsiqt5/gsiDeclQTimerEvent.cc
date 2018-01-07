
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQTimerEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTimerEvent>
#include <QEvent>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTimerEvent

// int QTimerEvent::timerId()


static void _init_f_timerId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_timerId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTimerEvent *)cls)->timerId ());
}


namespace gsi
{

static gsi::Methods methods_QTimerEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("timerId", "@brief Method int QTimerEvent::timerId()\n", true, &_init_f_timerId_c0, &_call_f_timerId_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QTimerEvent> decl_QTimerEvent (qtdecl_QEvent (), "QTimerEvent_Native",
  methods_QTimerEvent (),
  "@hide\n@alias QTimerEvent");

GSIQT_PUBLIC gsi::Class<QTimerEvent> &qtdecl_QTimerEvent () { return decl_QTimerEvent; }

}


class QTimerEvent_Adaptor : public QTimerEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTimerEvent_Adaptor();

  //  [adaptor ctor] QTimerEvent::QTimerEvent(int timerId)
  QTimerEvent_Adaptor(int timerId) : QTimerEvent(timerId)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QTimerEvent_Adaptor::~QTimerEvent_Adaptor() { }

//  Constructor QTimerEvent::QTimerEvent(int timerId) (adaptor class)

static void _init_ctor_QTimerEvent_Adaptor_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timerId");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QTimerEvent_Adaptor> ();
}

static void _call_ctor_QTimerEvent_Adaptor_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTimerEvent_Adaptor *> (new QTimerEvent_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QTimerEvent> &qtdecl_QTimerEvent ();

static gsi::Methods methods_QTimerEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTimerEvent::QTimerEvent(int timerId)\nThis method creates an object of class QTimerEvent.", &_init_ctor_QTimerEvent_Adaptor_767, &_call_ctor_QTimerEvent_Adaptor_767);
  return methods;
}

gsi::Class<QTimerEvent_Adaptor> decl_QTimerEvent_Adaptor (qtdecl_QTimerEvent (), "QTimerEvent",
  methods_QTimerEvent_Adaptor (),
  "@qt\n@brief Binding of QTimerEvent");

}

