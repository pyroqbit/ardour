// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/recentaction.h>
#include <gtkmm/private/recentaction_p.h>


// -*- c++ -*-
/* $Id: recentaction.ccg,v 1.5 2004/03/27 00:30:38 murrayc Exp $ */

/* Copyright 2003 The gtkmm Development Team
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

Glib::RefPtr<RecentAction> RecentAction::create(const Glib::ustring& name, const Glib::ustring& label, const Glib::ustring& tooltip)
{
  return Glib::RefPtr<RecentAction>( new RecentAction(name, StockID(), label, tooltip) );
}


} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::RecentAction> wrap(GtkRecentAction* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::RecentAction>( dynamic_cast<Gtk::RecentAction*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RecentAction_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RecentAction_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_recent_action_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  RecentChooser::add_interface(get_type());

  }

  return *this;
}


void RecentAction_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* RecentAction_Class::wrap_new(GObject* object)
{
  return new RecentAction((GtkRecentAction*)object);
}


/* The implementation: */

GtkRecentAction* RecentAction::gobj_copy()
{
  reference();
  return gobj();
}

RecentAction::RecentAction(const Glib::ConstructParams& construct_params)
:
  Gtk::Action(construct_params)
{

}

RecentAction::RecentAction(GtkRecentAction* castitem)
:
  Gtk::Action((GtkAction*)(castitem))
{}


RecentAction::~RecentAction()
{}


RecentAction::CppClassType RecentAction::recentaction_class_; // initialize static member

GType RecentAction::get_type()
{
  return recentaction_class_.init().get_type();
}


GType RecentAction::get_base_type()
{
  return gtk_recent_action_get_type();
}


RecentAction::RecentAction()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Action(Glib::ConstructParams(recentaction_class_.init()))
{
  

}

RecentAction::RecentAction(const Glib::ustring& name, const StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Action(Glib::ConstructParams(recentaction_class_.init(), "name", name.empty() ? 0 : name.c_str(), "stock_id", (stock_id).get_c_str(), "label", label.empty() ? 0 : label.c_str(), "tooltip", tooltip.empty() ? 0 : tooltip.c_str(), static_cast<char*>(0)))
{
  

}

RecentAction::RecentAction(const Glib::ustring& name, const StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip, const Glib::RefPtr<RecentManager>& recent_manager)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Action(Glib::ConstructParams(recentaction_class_.init(), "name", name.empty() ? 0 : name.c_str(), "stock_id", (stock_id).get_c_str(), "label", label.empty() ? 0 : label.c_str(), "tooltip", tooltip.empty() ? 0 : tooltip.c_str(), "recent_manager", Glib::unwrap(recent_manager), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<RecentAction> RecentAction::create()
{
  return Glib::RefPtr<RecentAction>( new RecentAction() );
}

Glib::RefPtr<RecentAction> RecentAction::create(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip)
{
  return Glib::RefPtr<RecentAction>( new RecentAction(name, stock_id, label, tooltip) );
}

Glib::RefPtr<RecentAction> RecentAction::create(const Glib::ustring& name, const Gtk::StockID& stock_id, const Glib::ustring& label, const Glib::ustring& tooltip, const Glib::RefPtr<RecentManager>& recent_manager)
{
  return Glib::RefPtr<RecentAction>( new RecentAction(name, stock_id, label, tooltip, recent_manager) );
}

bool RecentAction::get_show_numbers()
{
  return gtk_recent_action_get_show_numbers(gobj());
}

void RecentAction::set_show_numbers(bool show_numbers)
{
  gtk_recent_action_set_show_numbers(gobj(), static_cast<int>(show_numbers));
}


Glib::PropertyProxy< bool > RecentAction::property_show_numbers() 
{
  return Glib::PropertyProxy< bool >(this, "show-numbers");
}

Glib::PropertyProxy_ReadOnly< bool > RecentAction::property_show_numbers() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-numbers");
}


} // namespace Gtk


