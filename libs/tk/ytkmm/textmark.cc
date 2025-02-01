// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/textmark.h>
#include <gtkmm/private/textmark_p.h>


// -*- c++ -*-
/* $Id: textmark.ccg,v 1.1 2003/01/21 13:40:43 murrayc Exp $ */

/* 
 *
 * Copyright 1998-2002 The gtkmm Development Team
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


#include <gtkmm/textmark.h>
#include <gtkmm/textbuffer.h>
#include <ytk/ytk.h>


namespace Gtk
{

TextMark::TextMark(bool left_gravity)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(textmark_class_.init(), "left_gravity",gboolean(left_gravity), static_cast<char*>(0)))
{}

TextIter TextMark::get_iter()
{
  Glib::RefPtr<TextMark> mark = Glib::RefPtr<TextMark>(this);
  mark->reference(); // RefPtr (T_CppObject* pCppObject) does not do a reference
  return get_buffer()->get_iter_at_mark(mark);
}

} //namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::TextMark> wrap(GtkTextMark* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::TextMark>( dynamic_cast<Gtk::TextMark*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& TextMark_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &TextMark_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_text_mark_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void TextMark_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* TextMark_Class::wrap_new(GObject* object)
{
  return new TextMark((GtkTextMark*)object);
}


/* The implementation: */

GtkTextMark* TextMark::gobj_copy()
{
  reference();
  return gobj();
}

TextMark::TextMark(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

TextMark::TextMark(GtkTextMark* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


TextMark::~TextMark()
{}


TextMark::CppClassType TextMark::textmark_class_; // initialize static member

GType TextMark::get_type()
{
  return textmark_class_.init().get_type();
}


GType TextMark::get_base_type()
{
  return gtk_text_mark_get_type();
}


TextMark::TextMark(const Glib::ustring& name, bool left_gravity)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(textmark_class_.init(), "name", name.c_str(), "left_gravity", static_cast<int>(left_gravity), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<TextMark> TextMark::create(bool left_gravity)
{
  return Glib::RefPtr<TextMark>( new TextMark(left_gravity) );
}

Glib::RefPtr<TextMark> TextMark::create(const Glib::ustring& name, bool left_gravity)
{
  return Glib::RefPtr<TextMark>( new TextMark(name, left_gravity) );
}

void TextMark::set_visible(bool setting)
{
  gtk_text_mark_set_visible(gobj(), static_cast<int>(setting));
}

bool TextMark::get_visible() const
{
  return gtk_text_mark_get_visible(const_cast<GtkTextMark*>(gobj()));
}

Glib::ustring TextMark::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_text_mark_get_name(const_cast<GtkTextMark*>(gobj())));
}

bool TextMark::get_deleted() const
{
  return gtk_text_mark_get_deleted(const_cast<GtkTextMark*>(gobj()));
}

Glib::RefPtr<TextBuffer> TextMark::get_buffer()
{
  Glib::RefPtr<TextBuffer> retvalue = Glib::wrap(gtk_text_mark_get_buffer(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const TextBuffer> TextMark::get_buffer() const
{
  return const_cast<TextMark*>(this)->get_buffer();
}

bool TextMark::get_left_gravity() const
{
  return gtk_text_mark_get_left_gravity(const_cast<GtkTextMark*>(gobj()));
}


Glib::PropertyProxy_ReadOnly< Glib::ustring > TextMark::property_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "name");
}

Glib::PropertyProxy_ReadOnly< bool > TextMark::property_left_gravity() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "left-gravity");
}


} // namespace Gtk


