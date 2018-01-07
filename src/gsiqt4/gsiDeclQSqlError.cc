
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
*  @file gsiDeclQSqlError.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSqlError>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSqlError

//  Constructor QSqlError::QSqlError(const QString &driverText, const QString &databaseText, QSqlError::ErrorType type, int number)


static void _init_ctor_QSqlError_6892 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("driverText", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("databaseText", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("type", true, "QSqlError::NoError");
  decl->add_arg<const qt_gsi::Converter<QSqlError::ErrorType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("number", true, "-1");
  decl->add_arg<int > (argspec_3);
  decl->set_return_new<QSqlError> ();
}

static void _call_ctor_QSqlError_6892 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const QString &arg2 = args ? args.read<const QString & > (heap) : (const QString &)(QString());
  const qt_gsi::Converter<QSqlError::ErrorType>::target_type & arg3 = args ? args.read<const qt_gsi::Converter<QSqlError::ErrorType>::target_type & > (heap) : (const qt_gsi::Converter<QSqlError::ErrorType>::target_type &)(qt_gsi::CppToQtReadAdaptor<QSqlError::ErrorType>(heap, QSqlError::NoError));
  int arg4 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QSqlError *> (new QSqlError (arg1, arg2, qt_gsi::QtToCppAdaptor<QSqlError::ErrorType>(arg3).cref(), arg4));
}


//  Constructor QSqlError::QSqlError(const QSqlError &other)


static void _init_ctor_QSqlError_2220 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlError & > (argspec_0);
  decl->set_return_new<QSqlError> ();
}

static void _call_ctor_QSqlError_2220 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlError &arg1 = args.read<const QSqlError & > (heap);
  ret.write<QSqlError *> (new QSqlError (arg1));
}


// QString QSqlError::databaseText()


static void _init_f_databaseText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_databaseText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlError *)cls)->databaseText ());
}


// QString QSqlError::driverText()


static void _init_f_driverText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_driverText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlError *)cls)->driverText ());
}


// bool QSqlError::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSqlError *)cls)->isValid ());
}


// int QSqlError::number()


static void _init_f_number_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_number_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSqlError *)cls)->number ());
}


// QSqlError &QSqlError::operator=(const QSqlError &other)


static void _init_f_operator_eq__2220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSqlError & > (argspec_0);
  decl->set_return<QSqlError & > ();
}

static void _call_f_operator_eq__2220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSqlError &arg1 = args.read<const QSqlError & > (heap);
  ret.write<QSqlError & > ((QSqlError &)((QSqlError *)cls)->operator= (arg1));
}


// void QSqlError::setDatabaseText(const QString &databaseText)


static void _init_f_setDatabaseText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("databaseText");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDatabaseText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlError *)cls)->setDatabaseText (arg1);
}


// void QSqlError::setDriverText(const QString &driverText)


static void _init_f_setDriverText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("driverText");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDriverText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlError *)cls)->setDriverText (arg1);
}


// void QSqlError::setNumber(int number)


static void _init_f_setNumber_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("number");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNumber_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlError *)cls)->setNumber (arg1);
}


// void QSqlError::setType(QSqlError::ErrorType type)


static void _init_f_setType_2399 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QSqlError::ErrorType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setType_2399 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSqlError::ErrorType>::target_type & arg1 = args.read<const qt_gsi::Converter<QSqlError::ErrorType>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSqlError *)cls)->setType (qt_gsi::QtToCppAdaptor<QSqlError::ErrorType>(arg1).cref());
}


// QString QSqlError::text()


static void _init_f_text_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_text_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSqlError *)cls)->text ());
}


// QSqlError::ErrorType QSqlError::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSqlError::ErrorType>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSqlError::ErrorType>::target_type > ((qt_gsi::Converter<QSqlError::ErrorType>::target_type)qt_gsi::CppToQtAdaptor<QSqlError::ErrorType>(((QSqlError *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QSqlError () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlError::QSqlError(const QString &driverText, const QString &databaseText, QSqlError::ErrorType type, int number)\nThis method creates an object of class QSqlError.", &_init_ctor_QSqlError_6892, &_call_ctor_QSqlError_6892);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSqlError::QSqlError(const QSqlError &other)\nThis method creates an object of class QSqlError.", &_init_ctor_QSqlError_2220, &_call_ctor_QSqlError_2220);
  methods += new qt_gsi::GenericMethod (":databaseText", "@brief Method QString QSqlError::databaseText()\n", true, &_init_f_databaseText_c0, &_call_f_databaseText_c0);
  methods += new qt_gsi::GenericMethod (":driverText", "@brief Method QString QSqlError::driverText()\n", true, &_init_f_driverText_c0, &_call_f_driverText_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QSqlError::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":number", "@brief Method int QSqlError::number()\n", true, &_init_f_number_c0, &_call_f_number_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSqlError &QSqlError::operator=(const QSqlError &other)\n", false, &_init_f_operator_eq__2220, &_call_f_operator_eq__2220);
  methods += new qt_gsi::GenericMethod ("setDatabaseText|databaseText=", "@brief Method void QSqlError::setDatabaseText(const QString &databaseText)\n", false, &_init_f_setDatabaseText_2025, &_call_f_setDatabaseText_2025);
  methods += new qt_gsi::GenericMethod ("setDriverText|driverText=", "@brief Method void QSqlError::setDriverText(const QString &driverText)\n", false, &_init_f_setDriverText_2025, &_call_f_setDriverText_2025);
  methods += new qt_gsi::GenericMethod ("setNumber|number=", "@brief Method void QSqlError::setNumber(int number)\n", false, &_init_f_setNumber_767, &_call_f_setNumber_767);
  methods += new qt_gsi::GenericMethod ("setType|type=", "@brief Method void QSqlError::setType(QSqlError::ErrorType type)\n", false, &_init_f_setType_2399, &_call_f_setType_2399);
  methods += new qt_gsi::GenericMethod ("text", "@brief Method QString QSqlError::text()\n", true, &_init_f_text_c0, &_call_f_text_c0);
  methods += new qt_gsi::GenericMethod (":type", "@brief Method QSqlError::ErrorType QSqlError::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QSqlError> decl_QSqlError ("QSqlError",
  methods_QSqlError (),
  "@qt\n@brief Binding of QSqlError");


GSIQT_PUBLIC gsi::Class<QSqlError> &qtdecl_QSqlError () { return decl_QSqlError; }

}


//  Implementation of the enum wrapper class for QSqlError::ErrorType
namespace qt_gsi
{

static gsi::Enum<QSqlError::ErrorType> decl_QSqlError_ErrorType_Enum ("QSqlError_ErrorType",
    gsi::enum_const ("NoError", QSqlError::NoError, "@brief Enum constant QSqlError::NoError") +
    gsi::enum_const ("ConnectionError", QSqlError::ConnectionError, "@brief Enum constant QSqlError::ConnectionError") +
    gsi::enum_const ("StatementError", QSqlError::StatementError, "@brief Enum constant QSqlError::StatementError") +
    gsi::enum_const ("TransactionError", QSqlError::TransactionError, "@brief Enum constant QSqlError::TransactionError") +
    gsi::enum_const ("UnknownError", QSqlError::UnknownError, "@brief Enum constant QSqlError::UnknownError"),
  "@qt\n@brief This class represents the QSqlError::ErrorType enum");

static gsi::QFlagsClass<QSqlError::ErrorType > decl_QSqlError_ErrorType_Enums ("QSqlError_QFlags_ErrorType",
  "@qt\n@brief This class represents the QFlags<QSqlError::ErrorType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSqlError> inject_QSqlError_ErrorType_Enum_in_parent (decl_QSqlError_ErrorType_Enum.defs ());
static gsi::ClassExt<QSqlError> decl_QSqlError_ErrorType_Enum_as_child (decl_QSqlError_ErrorType_Enum, "ErrorType");
static gsi::ClassExt<QSqlError> decl_QSqlError_ErrorType_Enums_as_child (decl_QSqlError_ErrorType_Enums, "QFlags_ErrorType");

}

