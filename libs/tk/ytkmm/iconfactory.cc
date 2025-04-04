// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <ytkmm/iconfactory.h>
#include <ytkmm/private/iconfactory_p.h>


// -*- c++ -*-
/* $Id: iconfactory.ccg,v 1.1 2003/01/21 13:40:26 murrayc Exp $ */

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

#include <ytkmm/settings.h>
#include <ytk/ytk.h>

namespace Gtk
{

// static
bool IconSize::lookup(IconSize size, int& width, int& height)
{
  return gtk_icon_size_lookup((GtkIconSize) int(size), &width, &height);
}

// static
bool IconSize::lookup(IconSize size, int& width, int& height, const Glib::RefPtr<Gtk::Settings>& settings)
{
  return gtk_icon_size_lookup_for_settings(Glib::unwrap(settings), (GtkIconSize) int(size), &width, &height);
}


// static
IconSize IconSize::register_new(const Glib::ustring& name, int width, int height)
{
  const int size = gtk_icon_size_register(name.c_str(), width, height);
  return IconSize(size);
}

// static
void IconSize::register_alias(const Glib::ustring& alias, IconSize target)
{
  gtk_icon_size_register_alias(alias.c_str(), (GtkIconSize) int(target));
}

// static
IconSize IconSize::from_name(const Glib::ustring& name)
{
  const int size = gtk_icon_size_from_name(name.c_str());
  return IconSize(size);
}

// static
Glib::ustring IconSize::get_name(IconSize size)
{
  return gtk_icon_size_get_name((GtkIconSize) int(size));
}

} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::IconFactory> wrap(GtkIconFactory* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::IconFactory>( dynamic_cast<Gtk::IconFactory*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& IconFactory_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &IconFactory_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_icon_factory_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void IconFactory_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* IconFactory_Class::wrap_new(GObject* object)
{
  return new IconFactory((GtkIconFactory*)object);
}


/* The implementation: */

GtkIconFactory* IconFactory::gobj_copy()
{
  reference();
  return gobj();
}

IconFactory::IconFactory(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

IconFactory::IconFactory(GtkIconFactory* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


IconFactory::~IconFactory()
{}


IconFactory::CppClassType IconFactory::iconfactory_class_; // initialize static member

GType IconFactory::get_type()
{
  return iconfactory_class_.init().get_type();
}


GType IconFactory::get_base_type()
{
  return gtk_icon_factory_get_type();
}


IconFactory::IconFactory()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(iconfactory_class_.init()))
{
  

}

Glib::RefPtr<IconFactory> IconFactory::create()
{
  return Glib::RefPtr<IconFactory>( new IconFactory() );
}

void IconFactory::add(const Gtk::StockID& stock_id, const IconSet& icon_set)
{
  gtk_icon_factory_add(gobj(), (stock_id).get_c_str(), const_cast<GtkIconSet*>((icon_set).gobj()));
}

void IconFactory::add_default()
{
  gtk_icon_factory_add_default(gobj());
}

void IconFactory::remove_default()
{
  gtk_icon_factory_remove_default(gobj());
}


} // namespace Gtk


