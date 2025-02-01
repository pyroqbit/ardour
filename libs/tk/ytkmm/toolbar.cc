// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
 

#include <glibmm.h>

#include <gtkmm/toolbar.h>
#include <gtkmm/private/toolbar_p.h>


// -*- c++ -*-
/* $Id: toolbar.ccg,v 1.6 2004/03/03 18:48:04 murrayc Exp $ */

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

#include <glib.h>
#include <gtkmm/button.h>
#include <gtkmm/togglebutton.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/tooltips.h>
//#include <gtkmm/image.h>
#include <gtkmm/label.h>
#include <ytk/ytk.h>

namespace Gtk
{

void Toolbar::insert(ToolButton& item, int pos, const sigc::slot<void>& clicked_slot)
{
  item.signal_clicked().connect(clicked_slot);
  gtk_toolbar_insert(gobj(), (GtkToolItem*)((item).gobj()), pos);
}

void Toolbar::insert(ToggleToolButton& item, int pos, const sigc::slot<void>& toggled_slot)
{
  item.signal_toggled().connect(toggled_slot);
  gtk_toolbar_insert(gobj(), (GtkToolItem*)((item).gobj()), pos);
}

void Toolbar::append(ToolItem& item)
{
  gtk_toolbar_insert(gobj(), (item).gobj(), -1 /* See GTK+ docs */);
}

void Toolbar::append(ToolButton& item, const sigc::slot<void>& clicked_slot)
{
  item.signal_clicked().connect(clicked_slot);
  gtk_toolbar_insert(gobj(), (GtkToolItem*)((item).gobj()), -1 /* See GTK+ docs */);
}

void Toolbar::append(ToggleToolButton& item, const sigc::slot<void>& toggled_slot)
{
  item.signal_toggled().connect(toggled_slot);
  gtk_toolbar_insert(gobj(), (GtkToolItem*)((item).gobj()), -1 /* See GTK+ docs */);
}

void Toolbar::prepend(ToolItem& item)
{
  gtk_toolbar_insert(gobj(), (item).gobj(), 0 /* See GTK+ docs */);
}

void Toolbar::prepend(ToolButton& item, const sigc::slot<void>& clicked_slot)
{
  item.signal_clicked().connect(clicked_slot);
  gtk_toolbar_insert(gobj(), (GtkToolItem*)((item).gobj()), 0 /* See GTK+ docs */);
}

void Toolbar::prepend(ToggleToolButton& item, const sigc::slot<void>& toggled_slot)
{
  item.signal_toggled().connect(toggled_slot);
  gtk_toolbar_insert(gobj(), (GtkToolItem*)((item).gobj()), 0 /* See GTK+ docs */);
}

void Toolbar::unset_drop_highlight_item()
{
  //See GTK+ docs.
  gtk_toolbar_set_drop_highlight_item(gobj(), 0, 0);
}

#ifndef GTKMM_DISABLE_DEPRECATED
Tooltips* Toolbar::get_tooltips_object() const
{
  //Note that the _tooltips field is deprecated and broken since GTK+ 2.12:
  return 0; //Glib::wrap((GtkTooltips*)gobj()->_tooltips);
}
#endif //GTKMM_DISABLE_DEPRECATED

} // namespace Gtk


namespace
{


static void Toolbar_signal_orientation_changed_callback(GtkToolbar* self, GtkOrientation p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,Orientation > SlotType;

  Toolbar* obj = dynamic_cast<Toolbar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((Orientation)(p0))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Toolbar_signal_orientation_changed_info =
{
  "orientation_changed",
  (GCallback) &Toolbar_signal_orientation_changed_callback,
  (GCallback) &Toolbar_signal_orientation_changed_callback
};


static void Toolbar_signal_toolbar_style_changed_callback(GtkToolbar* self, GtkToolbarStyle p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,ToolbarStyle > SlotType;

  Toolbar* obj = dynamic_cast<Toolbar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(((ToolbarStyle)(p0))
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo Toolbar_signal_toolbar_style_changed_info =
{
  "style_changed",
  (GCallback) &Toolbar_signal_toolbar_style_changed_callback,
  (GCallback) &Toolbar_signal_toolbar_style_changed_callback
};


static gboolean Toolbar_signal_popup_context_menu_callback(GtkToolbar* self, gint p0,gint p1,gint p2,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool,int,int,int > SlotType;

  Toolbar* obj = dynamic_cast<Toolbar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(p0
, p1
, p2
));
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static gboolean Toolbar_signal_popup_context_menu_notify_callback(GtkToolbar* self, gint p0,gint p1,gint p2, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,int,int,int > SlotType;

  Toolbar* obj = dynamic_cast<Toolbar*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
, p2
);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo Toolbar_signal_popup_context_menu_info =
{
  "popup_context_menu",
  (GCallback) &Toolbar_signal_popup_context_menu_callback,
  (GCallback) &Toolbar_signal_popup_context_menu_notify_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Toolbar* wrap(GtkToolbar* object, bool take_copy)
{
  return dynamic_cast<Gtk::Toolbar *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Toolbar_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Toolbar_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_toolbar_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Toolbar_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->orientation_changed = &orientation_changed_callback;
  klass->style_changed = &style_changed_callback;
  klass->popup_context_menu = &popup_context_menu_callback;
}


void Toolbar_Class::orientation_changed_callback(GtkToolbar* self, GtkOrientation p0)
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
        obj->on_orientation_changed(((Orientation)(p0))
);
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
  if(base && base->orientation_changed)
    (*base->orientation_changed)(self, p0);
}
void Toolbar_Class::style_changed_callback(GtkToolbar* self, GtkToolbarStyle p0)
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
        obj->on_toolbar_style_changed(((ToolbarStyle)(p0))
);
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
  if(base && base->style_changed)
    (*base->style_changed)(self, p0);
}
gboolean Toolbar_Class::popup_context_menu_callback(GtkToolbar* self, gint p0, gint p1, gint p2)
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
        return static_cast<int>(obj->on_popup_context_menu(p0
, p1
, p2
));
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
  if(base && base->popup_context_menu)
    return (*base->popup_context_menu)(self, p0, p1, p2);

  typedef gboolean RType;
  return RType();
}


Glib::ObjectBase* Toolbar_Class::wrap_new(GObject* o)
{
  return manage(new Toolbar((GtkToolbar*)(o)));

}


/* The implementation: */

Toolbar::Toolbar(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

Toolbar::Toolbar(GtkToolbar* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }

Toolbar::~Toolbar()
{
  destroy_();
}

Toolbar::CppClassType Toolbar::toolbar_class_; // initialize static member

GType Toolbar::get_type()
{
  return toolbar_class_.init().get_type();
}


GType Toolbar::get_base_type()
{
  return gtk_toolbar_get_type();
}


Toolbar::Toolbar()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Container(Glib::ConstructParams(toolbar_class_.init()))
{
  

}

void Toolbar::insert(ToolItem& item, int pos)
{
  gtk_toolbar_insert(gobj(), (item).gobj(), pos);
}

int Toolbar::get_item_index(const ToolItem& item) const
{
  return gtk_toolbar_get_item_index(const_cast<GtkToolbar*>(gobj()), const_cast<GtkToolItem*>((item).gobj()));
}

int Toolbar::get_n_items() const
{
  return gtk_toolbar_get_n_items(const_cast<GtkToolbar*>(gobj()));
}

ToolItem* Toolbar::get_nth_item(int n)
{
  return Glib::wrap(gtk_toolbar_get_nth_item(gobj(), n));
}

const ToolItem* Toolbar::get_nth_item(int n) const
{
  return const_cast<Toolbar*>(this)->get_nth_item(n);
}

bool Toolbar::get_show_arrow() const
{
  return gtk_toolbar_get_show_arrow(const_cast<GtkToolbar*>(gobj()));
}

void Toolbar::set_show_arrow(bool show_arrow)
{
  gtk_toolbar_set_show_arrow(gobj(), static_cast<int>(show_arrow));
}

void Toolbar::set_orientation(Orientation orientation)
{
  gtk_toolbar_set_orientation(gobj(), ((GtkOrientation)(orientation)));
}

Orientation Toolbar::get_orientation() const
{
  return ((Orientation)(gtk_toolbar_get_orientation(const_cast<GtkToolbar*>(gobj()))));
}

void Toolbar::set_toolbar_style(ToolbarStyle style)
{
  gtk_toolbar_set_style(gobj(), ((GtkToolbarStyle)(style)));
}

ToolbarStyle Toolbar::get_toolbar_style() const
{
  return ((ToolbarStyle)(gtk_toolbar_get_style(const_cast<GtkToolbar*>(gobj()))));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void Toolbar::set_tooltips(bool enable)
{
  gtk_toolbar_set_tooltips(gobj(), static_cast<int>(enable));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
bool Toolbar::get_tooltips() const
{
  return gtk_toolbar_get_tooltips(const_cast<GtkToolbar*>(gobj()));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

void Toolbar::unset_toolbar_style()
{
  gtk_toolbar_unset_style(gobj());
}

void Toolbar::set_icon_size(IconSize icon_size)
{
  gtk_toolbar_set_icon_size(gobj(), static_cast<GtkIconSize>(int(icon_size)));
}

void Toolbar::unset_icon_size()
{
  gtk_toolbar_unset_icon_size(gobj());
}

IconSize Toolbar::get_icon_size() const
{
  return IconSize(static_cast<int>(gtk_toolbar_get_icon_size(const_cast<GtkToolbar*>(gobj()))));
}

ReliefStyle Toolbar::get_relief_style() const
{
  return ((ReliefStyle)(gtk_toolbar_get_relief_style(const_cast<GtkToolbar*>(gobj()))));
}

int Toolbar::get_drop_index(int x, int y) const
{
  return gtk_toolbar_get_drop_index(const_cast<GtkToolbar*>(gobj()), x, y);
}

void Toolbar::set_drop_highlight_item(ToolItem& tool_item, int index)
{
  gtk_toolbar_set_drop_highlight_item(gobj(), (tool_item).gobj(), index);
}


Glib::SignalProxy1< void,Orientation > Toolbar::signal_orientation_changed()
{
  return Glib::SignalProxy1< void,Orientation >(this, &Toolbar_signal_orientation_changed_info);
}


Glib::SignalProxy1< void,ToolbarStyle > Toolbar::signal_toolbar_style_changed()
{
  return Glib::SignalProxy1< void,ToolbarStyle >(this, &Toolbar_signal_toolbar_style_changed_info);
}


Glib::SignalProxy3< bool,int,int,int > Toolbar::signal_popup_context_menu()
{
  return Glib::SignalProxy3< bool,int,int,int >(this, &Toolbar_signal_popup_context_menu_info);
}


Glib::PropertyProxy< Orientation > Toolbar::property_orientation() 
{
  return Glib::PropertyProxy< Orientation >(this, "orientation");
}

Glib::PropertyProxy_ReadOnly< Orientation > Toolbar::property_orientation() const
{
  return Glib::PropertyProxy_ReadOnly< Orientation >(this, "orientation");
}

Glib::PropertyProxy< ToolbarStyle > Toolbar::property_toolbar_style() 
{
  return Glib::PropertyProxy< ToolbarStyle >(this, "toolbar-style");
}

Glib::PropertyProxy_ReadOnly< ToolbarStyle > Toolbar::property_toolbar_style() const
{
  return Glib::PropertyProxy_ReadOnly< ToolbarStyle >(this, "toolbar-style");
}

Glib::PropertyProxy< bool > Toolbar::property_show_arrow() 
{
  return Glib::PropertyProxy< bool >(this, "show-arrow");
}

Glib::PropertyProxy_ReadOnly< bool > Toolbar::property_show_arrow() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "show-arrow");
}

Glib::PropertyProxy< bool > Toolbar::property_tooltips() 
{
  return Glib::PropertyProxy< bool >(this, "tooltips");
}

Glib::PropertyProxy_ReadOnly< bool > Toolbar::property_tooltips() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "tooltips");
}

Glib::PropertyProxy< IconSize > Toolbar::property_icon_size() 
{
  return Glib::PropertyProxy< IconSize >(this, "icon-size");
}

Glib::PropertyProxy_ReadOnly< IconSize > Toolbar::property_icon_size() const
{
  return Glib::PropertyProxy_ReadOnly< IconSize >(this, "icon-size");
}

Glib::PropertyProxy< bool > Toolbar::property_icon_size_set() 
{
  return Glib::PropertyProxy< bool >(this, "icon-size-set");
}

Glib::PropertyProxy_ReadOnly< bool > Toolbar::property_icon_size_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "icon-size-set");
}


void Gtk::Toolbar::on_orientation_changed(Orientation orientation)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->orientation_changed)
    (*base->orientation_changed)(gobj(),((GtkOrientation)(orientation)));
}
void Gtk::Toolbar::on_toolbar_style_changed(ToolbarStyle style)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->style_changed)
    (*base->style_changed)(gobj(),((GtkToolbarStyle)(style)));
}
bool Gtk::Toolbar::on_popup_context_menu(int x, int y, int button_number)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->popup_context_menu)
    return (*base->popup_context_menu)(gobj(),x,y,button_number);

  typedef bool RType;
  return RType();
}


} // namespace Gtk


