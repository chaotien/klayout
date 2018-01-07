
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


#include "layConverters.h"
#include "tlInternational.h"

namespace lay
{

// ----------------------------------------------------------------
//  ColorConverter implementation

std::string 
ColorConverter::to_string (const QColor &c) const
{
  if (! c.isValid ()) {
    return "auto";
  } else {
    return tl::to_string (c.name ());
  }
}

void 
ColorConverter::from_string (const std::string &s, QColor &c) const
{
  std::string t (tl::trim (s));
  if (t == "auto") {
    c = QColor ();
  } else {
    c = QColor (t.c_str ());
  } 
}

}

