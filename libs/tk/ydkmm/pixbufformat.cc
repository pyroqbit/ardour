// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/pixbufformat.h>
#include <gdkmm/private/pixbufformat_p.h>


// -*- c++ -*-
/* $Id: pixbufformat.ccg,v 1.2 2003/11/22 18:58:20 murrayc Exp $ */

/* Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/utility.h>
#include <ydk-pixbuf/ydk-pixbuf.h>

namespace Gdk
{

PixbufFormat::PixbufFormat()
: gobject_ (0)
{}

PixbufFormat::PixbufFormat(const GdkPixbufFormat* gobject)
: gobject_ (gobject)
{}

PixbufFormat::~PixbufFormat()
{
  //We don't free anything because we did not take ownership of the underlying C instance
  //(because we can't.)
}

PixbufFormat::PixbufFormat(const PixbufFormat& src)
: gobject_(src.gobject_)
{
}

PixbufFormat& PixbufFormat::operator=(const PixbufFormat& src)
{
  gobject_ = src.gobject_;
  return *this;
}


} // namespace Gdk


namespace
{
} // anonymous namespace


namespace Gdk
{


Glib::ustring PixbufFormat::get_name() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gdk_pixbuf_format_get_name(const_cast<GdkPixbufFormat*>(gobj())));
}

Glib::ustring PixbufFormat::get_description() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gdk_pixbuf_format_get_description(const_cast<GdkPixbufFormat*>(gobj())));
}

Glib::StringArrayHandle PixbufFormat::get_mime_types() const
{
  return Glib::StringArrayHandle(gdk_pixbuf_format_get_mime_types(const_cast<GdkPixbufFormat*>(gobj())));
}

Glib::StringArrayHandle PixbufFormat::get_extensions() const
{
  return Glib::StringArrayHandle(gdk_pixbuf_format_get_extensions(const_cast<GdkPixbufFormat*>(gobj())));
}

bool PixbufFormat::is_writable() const
{
  return gdk_pixbuf_format_is_writable(const_cast<GdkPixbufFormat*>(gobj()));
}

bool PixbufFormat::is_scalable() const
{
  return gdk_pixbuf_format_is_scalable(const_cast<GdkPixbufFormat*>(gobj()));
}

bool PixbufFormat::is_disabled() const
{
  return gdk_pixbuf_format_is_disabled(const_cast<GdkPixbufFormat*>(gobj()));
}

void PixbufFormat::set_disabled(bool disabled)
{
  gdk_pixbuf_format_set_disabled(gobj(), static_cast<int>(disabled));
}

Glib::ustring PixbufFormat::get_license() const
{
  return Glib::convert_return_gchar_ptr_to_ustring(gdk_pixbuf_format_get_license(const_cast<GdkPixbufFormat*>(gobj())));
}


} // namespace Gdk


