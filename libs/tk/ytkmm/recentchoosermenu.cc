// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/recentchoosermenu.h>
#include <gtkmm/private/recentchoosermenu_p.h>


/* Copyright 2006 The gtkmm Development Team
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

#include <ytk/ytk.h>

namespace Gtk
{

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::RecentChooserMenu* wrap(GtkRecentChooserMenu* object, bool take_copy)
{
  return dynamic_cast<Gtk::RecentChooserMenu *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RecentChooserMenu_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RecentChooserMenu_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_recent_chooser_menu_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  RecentChooser::add_interface(get_type());

  }

  return *this;
}


void RecentChooserMenu_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* RecentChooserMenu_Class::wrap_new(GObject* o)
{
  return manage(new RecentChooserMenu((GtkRecentChooserMenu*)(o)));

}


/* The implementation: */

RecentChooserMenu::RecentChooserMenu(const Glib::ConstructParams& construct_params)
:
  Gtk::Menu(construct_params)
{
  }

RecentChooserMenu::RecentChooserMenu(GtkRecentChooserMenu* castitem)
:
  Gtk::Menu((GtkMenu*)(castitem))
{
  }

RecentChooserMenu::~RecentChooserMenu()
{
  destroy_();
}

RecentChooserMenu::CppClassType RecentChooserMenu::recentchoosermenu_class_; // initialize static member

GType RecentChooserMenu::get_type()
{
  return recentchoosermenu_class_.init().get_type();
}


GType RecentChooserMenu::get_base_type()
{
  return gtk_recent_chooser_menu_get_type();
}


RecentChooserMenu::RecentChooserMenu()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Menu(Glib::ConstructParams(recentchoosermenu_class_.init()))
{
  

}

RecentChooserMenu::RecentChooserMenu(const Glib::RefPtr<RecentManager>& recent_manager)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Menu(Glib::ConstructParams(recentchoosermenu_class_.init(), "recent_manager", Glib::unwrap(recent_manager), static_cast<char*>(0)))
{
  

}

void RecentChooserMenu::set_show_numbers(bool show_numbers)
{
  gtk_recent_chooser_menu_set_show_numbers(gobj(), static_cast<int>(show_numbers));
}

bool RecentChooserMenu::get_show_numbers() const
{
  return gtk_recent_chooser_menu_get_show_numbers(const_cast<GtkRecentChooserMenu*>(gobj()));
}


Glib::PropertyProxy< bool > RecentChooserMenu::property_show_numbers() 
{
  return Glib::PropertyProxy< bool >(this, "show-numbers");
}

Glib::PropertyProxy_ReadOnly< bool > RecentChooserMenu::property_show_numbers() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-numbers");
}


} // namespace Gtk


