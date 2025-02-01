// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/spinbutton.h>
#include <gtkmm/private/spinbutton_p.h>

#include <ytk/ytk.h>

// -*- c++ -*-
/* $Id: spinbutton.ccg,v 1.1 2003/01/21 13:40:38 murrayc Exp $ */

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtkmm/adjustment.h>
#include <ytk/ytk.h>

namespace Gtk
{

SpinButton::SpinButton(double climb_rate, guint digits)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Entry(Glib::ConstructParams(spinbutton_class_.init(), "climb_rate",climb_rate,"digits",digits, static_cast<char*>(0)))
{}

void SpinButton::unset_adjustment()
{
  gtk_spin_button_set_adjustment(gobj(), 0);
}

} // namespace Gtk


namespace
{


static gint SpinButton_signal_input_callback(GtkSpinButton* self, double* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< int,double* > SlotType;

  SpinButton* obj = dynamic_cast<SpinButton*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gint RType;
  return RType();
}

static gint SpinButton_signal_input_notify_callback(GtkSpinButton* self, double* p0, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,double* > SlotType;

  SpinButton* obj = dynamic_cast<SpinButton*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0);
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gint RType;
  return RType();
}

static const Glib::SignalProxyInfo SpinButton_signal_input_info =
{
  "input",
  (GCallback) &SpinButton_signal_input_callback,
  (GCallback) &SpinButton_signal_input_notify_callback
};


static gboolean SpinButton_signal_output_callback(GtkSpinButton* self, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool > SlotType;

  SpinButton* obj = dynamic_cast<SpinButton*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))());
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static gboolean SpinButton_signal_output_notify_callback(GtkSpinButton* self,  void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void > SlotType;

  SpinButton* obj = dynamic_cast<SpinButton*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))();
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo SpinButton_signal_output_info =
{
  "output",
  (GCallback) &SpinButton_signal_output_callback,
  (GCallback) &SpinButton_signal_output_notify_callback
};


static void SpinButton_signal_wrapped_callback(GtkSpinButton* self, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool > SlotType;

  SpinButton* obj = dynamic_cast<SpinButton*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))();
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo SpinButton_signal_wrapped_info =
{
  "wrapped",
  (GCallback) &SpinButton_signal_wrapped_callback,
  (GCallback) &SpinButton_signal_wrapped_callback
};


static const Glib::SignalProxyInfo SpinButton_signal_value_changed_info =
{
  "value_changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace

// static
GType Glib::Value<Gtk::SpinButtonUpdatePolicy>::value_type()
{
  return gtk_spin_button_update_policy_get_type();
}

// static
GType Glib::Value<Gtk::SpinType>::value_type()
{
  return gtk_spin_type_get_type();
}


namespace Glib
{

Gtk::SpinButton* wrap(GtkSpinButton* object, bool take_copy)
{
  return dynamic_cast<Gtk::SpinButton *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& SpinButton_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &SpinButton_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_spin_button_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Editable::add_interface(get_type());

  }

  return *this;
}


void SpinButton_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->input = &input_callback;
  klass->output = &output_callback;
  klass->value_changed = &value_changed_callback;
}


gint SpinButton_Class::input_callback(GtkSpinButton* self, double* p0)
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
        return obj->on_input(p0);
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
  if(base && base->input)
    return (*base->input)(self, p0);

  typedef gint RType;
  return RType();
}
gboolean SpinButton_Class::output_callback(GtkSpinButton* self)
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
        return static_cast<int>(obj->on_output());
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
  if(base && base->output)
    return (*base->output)(self);

  typedef gboolean RType;
  return RType();
}
void SpinButton_Class::value_changed_callback(GtkSpinButton* self)
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
        obj->on_value_changed();
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
  if(base && base->value_changed)
    (*base->value_changed)(self);
}


Glib::ObjectBase* SpinButton_Class::wrap_new(GObject* o)
{
  return manage(new SpinButton((GtkSpinButton*)(o)));

}


/* The implementation: */

SpinButton::SpinButton(const Glib::ConstructParams& construct_params)
:
  Gtk::Entry(construct_params)
{
  }

SpinButton::SpinButton(GtkSpinButton* castitem)
:
  Gtk::Entry((GtkEntry*)(castitem))
{
  }

SpinButton::~SpinButton()
{
  destroy_();
}

SpinButton::CppClassType SpinButton::spinbutton_class_; // initialize static member

GType SpinButton::get_type()
{
  return spinbutton_class_.init().get_type();
}


GType SpinButton::get_base_type()
{
  return gtk_spin_button_get_type();
}


SpinButton::SpinButton(Adjustment& adjustment, double climb_rate, guint digits)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Entry(Glib::ConstructParams(spinbutton_class_.init(), "adjustment", (adjustment).gobj(), "climb_rate", climb_rate, "digits", digits, static_cast<char*>(0)))
{
  

}

void SpinButton::configure(Adjustment& adjustment, double climb_rate, guint digits)
{
  gtk_spin_button_configure(gobj(), (adjustment).gobj(), climb_rate, digits);
}

void SpinButton::set_adjustment(Adjustment& adjustment)
{
  gtk_spin_button_set_adjustment(gobj(), (adjustment).gobj());
}

Gtk::Adjustment* SpinButton::get_adjustment()
{
  return Glib::wrap(gtk_spin_button_get_adjustment(gobj()));
}

const Gtk::Adjustment* SpinButton::get_adjustment() const
{
  return const_cast<SpinButton*>(this)->get_adjustment();
}

void SpinButton::set_digits(guint digits)
{
  gtk_spin_button_set_digits(gobj(), digits);
}

guint SpinButton::get_digits() const
{
  return gtk_spin_button_get_digits(const_cast<GtkSpinButton*>(gobj()));
}

void SpinButton::set_increments(double step, double page)
{
  gtk_spin_button_set_increments(gobj(), step, page);
}

void SpinButton::get_increments(double& step, double& page) const
{
  gtk_spin_button_get_increments(const_cast<GtkSpinButton*>(gobj()), &(step), &(page));
}

void SpinButton::set_range(double min, double max)
{
  gtk_spin_button_set_range(gobj(), min, max);
}

void SpinButton::get_range(double& min, double& max) const
{
  gtk_spin_button_get_range(const_cast<GtkSpinButton*>(gobj()), &(min), &(max));
}

double SpinButton::get_value() const
{
  return gtk_spin_button_get_value(const_cast<GtkSpinButton*>(gobj()));
}

int SpinButton::get_value_as_int() const
{
  return gtk_spin_button_get_value_as_int(const_cast<GtkSpinButton*>(gobj()));
}

void SpinButton::set_value(double value)
{
  gtk_spin_button_set_value(gobj(), value);
}

void SpinButton::set_update_policy(SpinButtonUpdatePolicy policy)
{
  gtk_spin_button_set_update_policy(gobj(), ((GtkSpinButtonUpdatePolicy)(policy)));
}

SpinButtonUpdatePolicy SpinButton::get_update_policy() const
{
  return ((SpinButtonUpdatePolicy)(gtk_spin_button_get_update_policy(const_cast<GtkSpinButton*>(gobj()))));
}

void SpinButton::set_numeric(bool numeric)
{
  gtk_spin_button_set_numeric(gobj(), static_cast<int>(numeric));
}

bool SpinButton::get_numeric() const
{
  return gtk_spin_button_get_numeric(const_cast<GtkSpinButton*>(gobj()));
}

void SpinButton::spin(SpinType direction, double increment)
{
  gtk_spin_button_spin(gobj(), ((GtkSpinType)(direction)), increment);
}

void SpinButton::set_wrap(bool wrap)
{
  gtk_spin_button_set_wrap(gobj(), static_cast<int>(wrap));
}

bool SpinButton::get_wrap() const
{
  return gtk_spin_button_get_wrap(const_cast<GtkSpinButton*>(gobj()));
}

void SpinButton::set_snap_to_ticks(bool snap_to_ticks)
{
  gtk_spin_button_set_snap_to_ticks(gobj(), static_cast<int>(snap_to_ticks));
}

bool SpinButton::get_snap_to_ticks() const
{
  return gtk_spin_button_get_snap_to_ticks(const_cast<GtkSpinButton*>(gobj()));
}

void SpinButton::update()
{
  gtk_spin_button_update(gobj());
}


Glib::SignalProxy1< int,double* > SpinButton::signal_input()
{
  return Glib::SignalProxy1< int,double* >(this, &SpinButton_signal_input_info);
}


Glib::SignalProxy0< bool > SpinButton::signal_output()
{
  return Glib::SignalProxy0< bool >(this, &SpinButton_signal_output_info);
}


Glib::SignalProxy0< bool > SpinButton::signal_wrapped()
{
  return Glib::SignalProxy0< bool >(this, &SpinButton_signal_wrapped_info);
}


Glib::SignalProxy0< void > SpinButton::signal_value_changed()
{
  return Glib::SignalProxy0< void >(this, &SpinButton_signal_value_changed_info);
}


Glib::PropertyProxy< Gtk::Adjustment* > SpinButton::property_adjustment() 
{
  return Glib::PropertyProxy< Gtk::Adjustment* >(this, "adjustment");
}

Glib::PropertyProxy_ReadOnly< Gtk::Adjustment* > SpinButton::property_adjustment() const
{
  return Glib::PropertyProxy_ReadOnly< Gtk::Adjustment* >(this, "adjustment");
}

Glib::PropertyProxy< double > SpinButton::property_climb_rate() 
{
  return Glib::PropertyProxy< double >(this, "climb-rate");
}

Glib::PropertyProxy_ReadOnly< double > SpinButton::property_climb_rate() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "climb-rate");
}

Glib::PropertyProxy< guint > SpinButton::property_digits() 
{
  return Glib::PropertyProxy< guint >(this, "digits");
}

Glib::PropertyProxy_ReadOnly< guint > SpinButton::property_digits() const
{
  return Glib::PropertyProxy_ReadOnly< guint >(this, "digits");
}

Glib::PropertyProxy< bool > SpinButton::property_snap_to_ticks() 
{
  return Glib::PropertyProxy< bool >(this, "snap-to-ticks");
}

Glib::PropertyProxy_ReadOnly< bool > SpinButton::property_snap_to_ticks() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "snap-to-ticks");
}

Glib::PropertyProxy< bool > SpinButton::property_numeric() 
{
  return Glib::PropertyProxy< bool >(this, "numeric");
}

Glib::PropertyProxy_ReadOnly< bool > SpinButton::property_numeric() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "numeric");
}

Glib::PropertyProxy< bool > SpinButton::property_wrap() 
{
  return Glib::PropertyProxy< bool >(this, "wrap");
}

Glib::PropertyProxy_ReadOnly< bool > SpinButton::property_wrap() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "wrap");
}

Glib::PropertyProxy< SpinButtonUpdatePolicy > SpinButton::property_update_policy() 
{
  return Glib::PropertyProxy< SpinButtonUpdatePolicy >(this, "update-policy");
}

Glib::PropertyProxy_ReadOnly< SpinButtonUpdatePolicy > SpinButton::property_update_policy() const
{
  return Glib::PropertyProxy_ReadOnly< SpinButtonUpdatePolicy >(this, "update-policy");
}

Glib::PropertyProxy< double > SpinButton::property_value() 
{
  return Glib::PropertyProxy< double >(this, "value");
}

Glib::PropertyProxy_ReadOnly< double > SpinButton::property_value() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "value");
}


int Gtk::SpinButton::on_input(double* new_value)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->input)
    return (*base->input)(gobj(),new_value);

  typedef int RType;
  return RType();
}
bool Gtk::SpinButton::on_output()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->output)
    return (*base->output)(gobj());

  typedef bool RType;
  return RType();
}
void Gtk::SpinButton::on_value_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->value_changed)
    (*base->value_changed)(gobj());
}


} // namespace Gtk


