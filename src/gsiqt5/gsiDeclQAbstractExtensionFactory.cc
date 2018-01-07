
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
*  @file gsiDeclQAbstractExtensionFactory.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractExtensionFactory>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractExtensionFactory

// QObject *QAbstractExtensionFactory::extension(QObject *object, const QString &iid)


static void _init_f_extension_c3219 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QObject * > ();
}

static void _call_f_extension_c3219 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QObject * > ((QObject *)((QAbstractExtensionFactory *)cls)->extension (arg1, arg2));
}


namespace gsi
{

static gsi::Methods methods_QAbstractExtensionFactory () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("extension", "@brief Method QObject *QAbstractExtensionFactory::extension(QObject *object, const QString &iid)\n", true, &_init_f_extension_c3219, &_call_f_extension_c3219);
  return methods;
}

gsi::Class<QAbstractExtensionFactory> decl_QAbstractExtensionFactory ("QAbstractExtensionFactory_Native",
  methods_QAbstractExtensionFactory (),
  "@hide\n@alias QAbstractExtensionFactory");

GSIQT_PUBLIC gsi::Class<QAbstractExtensionFactory> &qtdecl_QAbstractExtensionFactory () { return decl_QAbstractExtensionFactory; }

}


class QAbstractExtensionFactory_Adaptor : public QAbstractExtensionFactory, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractExtensionFactory_Adaptor();

  //  [adaptor ctor] QAbstractExtensionFactory::QAbstractExtensionFactory()
  QAbstractExtensionFactory_Adaptor() : QAbstractExtensionFactory()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QObject *QAbstractExtensionFactory::extension(QObject *object, const QString &iid)
  QObject * cbs_extension_c3219_0(QObject *object, const QString &iid) const
  {
    __SUPPRESS_UNUSED_WARNING (object);
    __SUPPRESS_UNUSED_WARNING (iid);
    throw qt_gsi::AbstractMethodCalledException("extension");
  }

  virtual QObject * extension(QObject *object, const QString &iid) const
  {
    if (cb_extension_c3219_0.can_issue()) {
      return cb_extension_c3219_0.issue<QAbstractExtensionFactory_Adaptor, QObject *, QObject *, const QString &>(&QAbstractExtensionFactory_Adaptor::cbs_extension_c3219_0, object, iid);
    } else {
      throw qt_gsi::AbstractMethodCalledException("extension");
    }
  }

  gsi::Callback cb_extension_c3219_0;
};

QAbstractExtensionFactory_Adaptor::~QAbstractExtensionFactory_Adaptor() { }

//  Constructor QAbstractExtensionFactory::QAbstractExtensionFactory() (adaptor class)

static void _init_ctor_QAbstractExtensionFactory_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractExtensionFactory_Adaptor> ();
}

static void _call_ctor_QAbstractExtensionFactory_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractExtensionFactory_Adaptor *> (new QAbstractExtensionFactory_Adaptor ());
}


// QObject *QAbstractExtensionFactory::extension(QObject *object, const QString &iid)

static void _init_cbs_extension_c3219_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iid");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QObject * > ();
}

static void _call_cbs_extension_c3219_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QObject * > ((QObject *)((QAbstractExtensionFactory_Adaptor *)cls)->cbs_extension_c3219_0 (arg1, arg2));
}

static void _set_callback_cbs_extension_c3219_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractExtensionFactory_Adaptor *)cls)->cb_extension_c3219_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractExtensionFactory> &qtdecl_QAbstractExtensionFactory ();

static gsi::Methods methods_QAbstractExtensionFactory_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractExtensionFactory::QAbstractExtensionFactory()\nThis method creates an object of class QAbstractExtensionFactory.", &_init_ctor_QAbstractExtensionFactory_Adaptor_0, &_call_ctor_QAbstractExtensionFactory_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("extension", "@hide", true, &_init_cbs_extension_c3219_0, &_call_cbs_extension_c3219_0);
  methods += new qt_gsi::GenericMethod ("extension", "@brief Virtual method QObject *QAbstractExtensionFactory::extension(QObject *object, const QString &iid)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_extension_c3219_0, &_call_cbs_extension_c3219_0, &_set_callback_cbs_extension_c3219_0);
  return methods;
}

gsi::Class<QAbstractExtensionFactory_Adaptor> decl_QAbstractExtensionFactory_Adaptor (qtdecl_QAbstractExtensionFactory (), "QAbstractExtensionFactory",
  methods_QAbstractExtensionFactory_Adaptor (),
  "@qt\n@brief Binding of QAbstractExtensionFactory");

}

