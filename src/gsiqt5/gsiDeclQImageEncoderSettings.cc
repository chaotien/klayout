
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
*  @file gsiDeclQImageEncoderSettings.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QImageEncoderSettings>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtCommon.h"
#include "gsiDeclQtTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QImageEncoderSettings

//  Constructor QImageEncoderSettings::QImageEncoderSettings()


static void _init_ctor_QImageEncoderSettings_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QImageEncoderSettings> ();
}

static void _call_ctor_QImageEncoderSettings_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImageEncoderSettings *> (new QImageEncoderSettings ());
}


//  Constructor QImageEncoderSettings::QImageEncoderSettings(const QImageEncoderSettings &other)


static void _init_ctor_QImageEncoderSettings_3430 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  decl->set_return_new<QImageEncoderSettings> ();
}

static void _call_ctor_QImageEncoderSettings_3430 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = args.read<const QImageEncoderSettings & > (heap);
  ret.write<QImageEncoderSettings *> (new QImageEncoderSettings (arg1));
}


// QString QImageEncoderSettings::codec()


static void _init_f_codec_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_codec_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QImageEncoderSettings *)cls)->codec ());
}


// QVariant QImageEncoderSettings::encodingOption(const QString &option)


static void _init_f_encodingOption_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_encodingOption_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QVariant > ((QVariant)((QImageEncoderSettings *)cls)->encodingOption (arg1));
}


// QMap<QString, QVariant> QImageEncoderSettings::encodingOptions()


static void _init_f_encodingOptions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMap<QString, QVariant> > ();
}

static void _call_f_encodingOptions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMap<QString, QVariant> > ((QMap<QString, QVariant>)((QImageEncoderSettings *)cls)->encodingOptions ());
}


// bool QImageEncoderSettings::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QImageEncoderSettings *)cls)->isNull ());
}


// bool QImageEncoderSettings::operator!=(const QImageEncoderSettings &other)


static void _init_f_operator_excl__eq__c3430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = args.read<const QImageEncoderSettings & > (heap);
  ret.write<bool > ((bool)((QImageEncoderSettings *)cls)->operator!= (arg1));
}


// QImageEncoderSettings &QImageEncoderSettings::operator=(const QImageEncoderSettings &other)


static void _init_f_operator_eq__3430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  decl->set_return<QImageEncoderSettings & > ();
}

static void _call_f_operator_eq__3430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = args.read<const QImageEncoderSettings & > (heap);
  ret.write<QImageEncoderSettings & > ((QImageEncoderSettings &)((QImageEncoderSettings *)cls)->operator= (arg1));
}


// bool QImageEncoderSettings::operator==(const QImageEncoderSettings &other)


static void _init_f_operator_eq__eq__c3430 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QImageEncoderSettings & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3430 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImageEncoderSettings &arg1 = args.read<const QImageEncoderSettings & > (heap);
  ret.write<bool > ((bool)((QImageEncoderSettings *)cls)->operator== (arg1));
}


// QMultimedia::EncodingQuality QImageEncoderSettings::quality()


static void _init_f_quality_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type > ();
}

static void _call_f_quality_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type > ((qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type)qt_gsi::CppToQtAdaptor<QMultimedia::EncodingQuality>(((QImageEncoderSettings *)cls)->quality ()));
}


// QSize QImageEncoderSettings::resolution()


static void _init_f_resolution_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_resolution_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QImageEncoderSettings *)cls)->resolution ());
}


// void QImageEncoderSettings::setCodec(const QString &)


static void _init_f_setCodec_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodec_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderSettings *)cls)->setCodec (arg1);
}


// void QImageEncoderSettings::setEncodingOption(const QString &option, const QVariant &value)


static void _init_f_setEncodingOption_4036 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("option");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setEncodingOption_4036 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  const QVariant &arg2 = args.read<const QVariant & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderSettings *)cls)->setEncodingOption (arg1, arg2);
}


// void QImageEncoderSettings::setEncodingOptions(const QMap<QString, QVariant> &options)


static void _init_f_setEncodingOptions_3508 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options");
  decl->add_arg<const QMap<QString, QVariant> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEncodingOptions_3508 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMap<QString, QVariant> &arg1 = args.read<const QMap<QString, QVariant> & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderSettings *)cls)->setEncodingOptions (arg1);
}


// void QImageEncoderSettings::setQuality(QMultimedia::EncodingQuality quality)


static void _init_f_setQuality_3220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("quality");
  decl->add_arg<const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setQuality_3220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & arg1 = args.read<const qt_gsi::Converter<QMultimedia::EncodingQuality>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderSettings *)cls)->setQuality (qt_gsi::QtToCppAdaptor<QMultimedia::EncodingQuality>(arg1).cref());
}


// void QImageEncoderSettings::setResolution(const QSize &)


static void _init_f_setResolution_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = args.read<const QSize & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderSettings *)cls)->setResolution (arg1);
}


// void QImageEncoderSettings::setResolution(int width, int height)


static void _init_f_setResolution_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("height");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setResolution_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  int arg2 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QImageEncoderSettings *)cls)->setResolution (arg1, arg2);
}



namespace gsi
{

static gsi::Methods methods_QImageEncoderSettings () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageEncoderSettings::QImageEncoderSettings()\nThis method creates an object of class QImageEncoderSettings.", &_init_ctor_QImageEncoderSettings_0, &_call_ctor_QImageEncoderSettings_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QImageEncoderSettings::QImageEncoderSettings(const QImageEncoderSettings &other)\nThis method creates an object of class QImageEncoderSettings.", &_init_ctor_QImageEncoderSettings_3430, &_call_ctor_QImageEncoderSettings_3430);
  methods += new qt_gsi::GenericMethod (":codec", "@brief Method QString QImageEncoderSettings::codec()\n", true, &_init_f_codec_c0, &_call_f_codec_c0);
  methods += new qt_gsi::GenericMethod ("encodingOption", "@brief Method QVariant QImageEncoderSettings::encodingOption(const QString &option)\n", true, &_init_f_encodingOption_c2025, &_call_f_encodingOption_c2025);
  methods += new qt_gsi::GenericMethod (":encodingOptions", "@brief Method QMap<QString, QVariant> QImageEncoderSettings::encodingOptions()\n", true, &_init_f_encodingOptions_c0, &_call_f_encodingOptions_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QImageEncoderSettings::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QImageEncoderSettings::operator!=(const QImageEncoderSettings &other)\n", true, &_init_f_operator_excl__eq__c3430, &_call_f_operator_excl__eq__c3430);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QImageEncoderSettings &QImageEncoderSettings::operator=(const QImageEncoderSettings &other)\n", false, &_init_f_operator_eq__3430, &_call_f_operator_eq__3430);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QImageEncoderSettings::operator==(const QImageEncoderSettings &other)\n", true, &_init_f_operator_eq__eq__c3430, &_call_f_operator_eq__eq__c3430);
  methods += new qt_gsi::GenericMethod (":quality", "@brief Method QMultimedia::EncodingQuality QImageEncoderSettings::quality()\n", true, &_init_f_quality_c0, &_call_f_quality_c0);
  methods += new qt_gsi::GenericMethod (":resolution", "@brief Method QSize QImageEncoderSettings::resolution()\n", true, &_init_f_resolution_c0, &_call_f_resolution_c0);
  methods += new qt_gsi::GenericMethod ("setCodec|codec=", "@brief Method void QImageEncoderSettings::setCodec(const QString &)\n", false, &_init_f_setCodec_2025, &_call_f_setCodec_2025);
  methods += new qt_gsi::GenericMethod ("setEncodingOption", "@brief Method void QImageEncoderSettings::setEncodingOption(const QString &option, const QVariant &value)\n", false, &_init_f_setEncodingOption_4036, &_call_f_setEncodingOption_4036);
  methods += new qt_gsi::GenericMethod ("setEncodingOptions|encodingOptions=", "@brief Method void QImageEncoderSettings::setEncodingOptions(const QMap<QString, QVariant> &options)\n", false, &_init_f_setEncodingOptions_3508, &_call_f_setEncodingOptions_3508);
  methods += new qt_gsi::GenericMethod ("setQuality|quality=", "@brief Method void QImageEncoderSettings::setQuality(QMultimedia::EncodingQuality quality)\n", false, &_init_f_setQuality_3220, &_call_f_setQuality_3220);
  methods += new qt_gsi::GenericMethod ("setResolution|resolution=", "@brief Method void QImageEncoderSettings::setResolution(const QSize &)\n", false, &_init_f_setResolution_1805, &_call_f_setResolution_1805);
  methods += new qt_gsi::GenericMethod ("setResolution", "@brief Method void QImageEncoderSettings::setResolution(int width, int height)\n", false, &_init_f_setResolution_1426, &_call_f_setResolution_1426);
  return methods;
}

gsi::Class<QImageEncoderSettings> decl_QImageEncoderSettings ("QImageEncoderSettings",
  methods_QImageEncoderSettings (),
  "@qt\n@brief Binding of QImageEncoderSettings");


GSIQT_PUBLIC gsi::Class<QImageEncoderSettings> &qtdecl_QImageEncoderSettings () { return decl_QImageEncoderSettings; }

}

