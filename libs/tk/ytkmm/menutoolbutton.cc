// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
 

#include <glibmm.h>

#include <gtkmm/menutoolbutton.h>
#include <gtkmm/private/menutoolbutton_p.h>


// -*- c++ -*-
/* $Id: menutoolbutton.ccg,v 1.1 2004/10/10 20:41:20 murrayc Exp $ */

/* 
 *
 * Copyright 2003 The gtkmm Development Team
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

MenuToolButton::MenuToolButton(const Glib::ustring& label)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToolButton(Glib::ConstructParams(menutoolbutton_class_.init(), "label", label.c_str(), (char*) 0))
{
}

MenuToolButton::MenuToolButton(Widget& icon_widget, const Glib::ustring& label)
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::ToolButton(Glib::ConstructParams(menutoolbutton_class_.init(), "icon_widget", (icon_widget).gobj(), "label", label.c_str(), (char*) 0))
{
}

} // namespace Gtk


namespace
{


static const Glib::SignalProxyInfo MenuToolButton_signal_show_menu_info =
{
  "show_menu",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::MenuToolButton* wrap(GtkMenuToolButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::MenuToolButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& MenuToolButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &MenuToolButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_menu_tool_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void MenuToolButton_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->show_menu = &show_menu_callback;
}


void MenuToolButton_Class::show_menu_callback(GtkMenuToolButton* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
        // Call the virtual member method, which derived classes might override.
        obj->on_show_menu();
        return;
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
    }
  }

  BaseClassType *const base = static_cast<BaseClassType*>(
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->show_menu)
    (*base->show_menu)(self);
}


Glib::ObjectBase* MenuToolButton_Class::wrap_new(GObject* o)
{
  return manage(new MenuToolButton((GtkMenuToolButton*)(o)));

}


/* The implementation: */

MenuToolButton::MenuToolButton(const Glib::ConstructParams& construct_params)
:
  Gtk::ToolButton(construct_params)
{
  }

MenuToolButton::MenuToolButton(GtkMenuToolButton* castitem)
:
  Gtk::ToolButton((GtkToolButton*)(castitem))
{
  }

MenuToolButton::~MenuToolButton()
{
  destroy_();
}

MenuToolButton::CppClassType MenuToolButton::menutoolbutton_class_; // initialize static member

GType MenuToolButton::get_type()
{
  return menutoolbutton_class_.init().get_type();
}


GType MenuToolButton::get_base_type()
{
  return gtk_menu_tool_button_get_type();
}


MenuToolButton::MenuToolButton()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ToolButton(Glib::ConstructParams(menutoolbutton_class_.init()))
{
  

}

MenuToolButton::MenuToolButton(const Gtk::StockID& stock_id)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::ToolButton(Glib::ConstructParams(menutoolbutton_class_.init(), "stock_id", (stock_id).get_c_str(), static_cast<char*>(0)))
{
  

}

void MenuToolButton::set_menu(Menu& menu)
{
  gtk_menu_tool_button_set_menu(gobj(), (menu).Gtk::Widget::gobj());
}

Menu* MenuToolButton::get_menu()
{
  return Glib::wrap((GtkMenu*)(gtk_menu_tool_button_get_menu(gobj())));
}

const Menu* MenuToolButton::get_menu() const
{
  return const_cast<MenuToolButton*>(this)->get_menu();
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void MenuToolButton::set_arrow_tooltip(Tooltips& tooltips, const Glib::ustring& tip_text, const Glib::ustring& tip_private)
{
  gtk_menu_tool_button_set_arrow_tooltip(gobj(), (tooltips).gobj(), tip_text.c_str(), tip_private.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void MenuToolButton::set_arrow_tooltip_text(const Glib::ustring& text)
{
  gtk_menu_tool_button_set_arrow_tooltip_text(gobj(), text.c_str());
}

void MenuToolButton::set_arrow_tooltip_markup(const Glib::ustring& markup)
{
  gtk_menu_tool_button_set_arrow_tooltip_markup(gobj(), markup.c_str());
}


Glib::SignalProxy0< void > MenuToolButton::signal_show_menu()
{
  return Glib::SignalProxy0< void >(this, &MenuToolButton_signal_show_menu_info);
}


Glib::PropertyProxy< Menu* > MenuToolButton::property_menu() 
{
  return Glib::PropertyProxy< Menu* >(this, "menu");
}

Glib::PropertyProxy_ReadOnly< Menu* > MenuToolButton::property_menu() const
{
  return Glib::PropertyProxy_ReadOnly< Menu* >(this, "menu");
}


void Gtk::MenuToolButton::on_show_menu()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->show_menu)
    (*base->show_menu)(gobj());
}


} // namespace Gtk


