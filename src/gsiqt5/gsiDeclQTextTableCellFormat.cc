
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
*  @file gsiDeclQTextTableCellFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextTableCellFormat>
#include <QBrush>
#include <QColor>
#include <QFont>
#include <QPen>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextListFormat>
#include <QTextTableFormat>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextTableCellFormat

//  Constructor QTextTableCellFormat::QTextTableCellFormat()


static void _init_ctor_QTextTableCellFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextTableCellFormat> ();
}

static void _call_ctor_QTextTableCellFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextTableCellFormat *> (new QTextTableCellFormat ());
}


// double QTextTableCellFormat::bottomPadding()


static void _init_f_bottomPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_bottomPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->bottomPadding ());
}


// () const


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextTableCellFormat *)cls)->isValid ());
}


// double QTextTableCellFormat::leftPadding()


static void _init_f_leftPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_leftPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->leftPadding ());
}


// double QTextTableCellFormat::rightPadding()


static void _init_f_rightPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_rightPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->rightPadding ());
}


// void QTextTableCellFormat::setBottomPadding(double padding)


static void _init_f_setBottomPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBottomPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setBottomPadding (arg1);
}


// void QTextTableCellFormat::setLeftPadding(double padding)


static void _init_f_setLeftPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLeftPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setLeftPadding (arg1);
}


// void QTextTableCellFormat::setPadding(double padding)


static void _init_f_setPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setPadding (arg1);
}


// void QTextTableCellFormat::setRightPadding(double padding)


static void _init_f_setRightPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRightPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setRightPadding (arg1);
}


// void QTextTableCellFormat::setTopPadding(double padding)


static void _init_f_setTopPadding_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("padding");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTopPadding_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args.read<double > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextTableCellFormat *)cls)->setTopPadding (arg1);
}


// double QTextTableCellFormat::topPadding()


static void _init_f_topPadding_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_topPadding_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QTextTableCellFormat *)cls)->topPadding ());
}



namespace gsi
{

static gsi::Methods methods_QTextTableCellFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextTableCellFormat::QTextTableCellFormat()\nThis method creates an object of class QTextTableCellFormat.", &_init_ctor_QTextTableCellFormat_0, &_call_ctor_QTextTableCellFormat_0);
  methods += new qt_gsi::GenericMethod (":bottomPadding", "@brief Method double QTextTableCellFormat::bottomPadding()\n", true, &_init_f_bottomPadding_c0, &_call_f_bottomPadding_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method () const\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":leftPadding", "@brief Method double QTextTableCellFormat::leftPadding()\n", true, &_init_f_leftPadding_c0, &_call_f_leftPadding_c0);
  methods += new qt_gsi::GenericMethod (":rightPadding", "@brief Method double QTextTableCellFormat::rightPadding()\n", true, &_init_f_rightPadding_c0, &_call_f_rightPadding_c0);
  methods += new qt_gsi::GenericMethod ("setBottomPadding|bottomPadding=", "@brief Method void QTextTableCellFormat::setBottomPadding(double padding)\n", false, &_init_f_setBottomPadding_1071, &_call_f_setBottomPadding_1071);
  methods += new qt_gsi::GenericMethod ("setLeftPadding|leftPadding=", "@brief Method void QTextTableCellFormat::setLeftPadding(double padding)\n", false, &_init_f_setLeftPadding_1071, &_call_f_setLeftPadding_1071);
  methods += new qt_gsi::GenericMethod ("setPadding", "@brief Method void QTextTableCellFormat::setPadding(double padding)\n", false, &_init_f_setPadding_1071, &_call_f_setPadding_1071);
  methods += new qt_gsi::GenericMethod ("setRightPadding|rightPadding=", "@brief Method void QTextTableCellFormat::setRightPadding(double padding)\n", false, &_init_f_setRightPadding_1071, &_call_f_setRightPadding_1071);
  methods += new qt_gsi::GenericMethod ("setTopPadding|topPadding=", "@brief Method void QTextTableCellFormat::setTopPadding(double padding)\n", false, &_init_f_setTopPadding_1071, &_call_f_setTopPadding_1071);
  methods += new qt_gsi::GenericMethod (":topPadding", "@brief Method double QTextTableCellFormat::topPadding()\n", true, &_init_f_topPadding_c0, &_call_f_topPadding_c0);
  return methods;
}

gsi::Class<QTextCharFormat> &qtdecl_QTextCharFormat ();

gsi::Class<QTextTableCellFormat> decl_QTextTableCellFormat (qtdecl_QTextCharFormat (), "QTextTableCellFormat",
  methods_QTextTableCellFormat (),
  "@qt\n@brief Binding of QTextTableCellFormat");


GSIQT_PUBLIC gsi::Class<QTextTableCellFormat> &qtdecl_QTextTableCellFormat () { return decl_QTextTableCellFormat; }

}

