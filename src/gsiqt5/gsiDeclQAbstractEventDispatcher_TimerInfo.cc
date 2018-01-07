
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
*  @file gsiDeclQAbstractEventDispatcher_TimerInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractEventDispatcher>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QAbstractEventDispatcher::TimerInfo

//  Constructor QAbstractEventDispatcher::TimerInfo::TimerInfo(int id, int i, Qt::TimerType t)


static void _init_ctor_QAbstractEventDispatcher_TimerInfo_2998 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("i");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("t");
  decl->add_arg<const qt_gsi::Converter<Qt::TimerType>::target_type & > (argspec_2);
  decl->set_return_new<QAbstractEventDispatcher::TimerInfo> ();
}

static void _call_ctor_QAbstractEventDispatcher_TimerInfo_2998 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  const qt_gsi::Converter<Qt::TimerType>::target_type & arg3 = args.read<const qt_gsi::Converter<Qt::TimerType>::target_type & > (heap);
  ret.write<QAbstractEventDispatcher::TimerInfo *> (new QAbstractEventDispatcher::TimerInfo (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::TimerType>(arg3).cref()));
}



namespace gsi
{

static gsi::Methods methods_QAbstractEventDispatcher_TimerInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractEventDispatcher::TimerInfo::TimerInfo(int id, int i, Qt::TimerType t)\nThis method creates an object of class QAbstractEventDispatcher::TimerInfo.", &_init_ctor_QAbstractEventDispatcher_TimerInfo_2998, &_call_ctor_QAbstractEventDispatcher_TimerInfo_2998);
  return methods;
}

gsi::Class<QAbstractEventDispatcher::TimerInfo> decl_QAbstractEventDispatcher_TimerInfo ("QAbstractEventDispatcher_TimerInfo",
  methods_QAbstractEventDispatcher_TimerInfo (),
  "@qt\n@brief Binding of QAbstractEventDispatcher::TimerInfo");

gsi::ClassExt<QAbstractEventDispatcher> decl_QAbstractEventDispatcher_TimerInfo_as_child (decl_QAbstractEventDispatcher_TimerInfo, "TimerInfo");

GSIQT_PUBLIC gsi::Class<QAbstractEventDispatcher::TimerInfo> &qtdecl_QAbstractEventDispatcher_TimerInfo () { return decl_QAbstractEventDispatcher_TimerInfo; }

}

