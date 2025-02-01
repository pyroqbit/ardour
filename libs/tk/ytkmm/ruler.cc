// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

//Allow us to use the struct fields.
//TODO: We need to remove these methods anyway in a future ABI break.
#undef GSEAL_ENABLE
 #undef GTK_DISABLE_DEPRECATED
 
#ifndef GTKMM_DISABLE_DEPRECATED


#include <glibmm.h>

#include <gtkmm/ruler.h>
#include <gtkmm/private/ruler_p.h>


// -*- c++ -*-
/* $Id: ruler.ccg,v 1.1 2003/01/21 13:40:35 murrayc Exp $ */

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

#include <ytk/ytk.h>

namespace Gtk
{

} // namespace Gtk

namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::Ruler* wrap(GtkRuler* object, bool take_copy)
{
  return dynamic_cast<Gtk::Ruler *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Ruler_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Ruler_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_ruler_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Ruler_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->draw_ticks = &draw_ticks_vfunc_callback;
  klass->draw_pos = &draw_pos_vfunc_callback;

}

void Ruler_Class::draw_ticks_vfunc_callback(GtkRuler* self)
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
        obj->draw_ticks_vfunc();
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
  if(base && base->draw_ticks)
  {
    (*base->draw_ticks)(self);
  }

}
void Ruler_Class::draw_pos_vfunc_callback(GtkRuler* self)
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
        obj->draw_pos_vfunc();
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
  if(base && base->draw_pos)
  {
    (*base->draw_pos)(self);
  }

}


Glib::ObjectBase* Ruler_Class::wrap_new(GObject* o)
{
  return manage(new Ruler((GtkRuler*)(o)));

}


/* The implementation: */

Ruler::Ruler(const Glib::ConstructParams& construct_params)
:
  Gtk::Widget(construct_params)
{
  }

Ruler::Ruler(GtkRuler* castitem)
:
  Gtk::Widget((GtkWidget*)(castitem))
{
  }

Ruler::~Ruler()
{
  destroy_();
}

Ruler::CppClassType Ruler::ruler_class_; // initialize static member

GType Ruler::get_type()
{
  return ruler_class_.init().get_type();
}


GType Ruler::get_base_type()
{
  return gtk_ruler_get_type();
}


Ruler::Ruler()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Widget(Glib::ConstructParams(ruler_class_.init()))
{
  

}

void Ruler::set_metric(MetricType metric)
{
  gtk_ruler_set_metric(gobj(), ((GtkMetricType)(metric)));
}

MetricType Ruler::get_metric() const
{
  return ((MetricType)(gtk_ruler_get_metric(const_cast<GtkRuler*>(gobj()))));
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
MetricType Ruler::get_metric()
{
  return ((MetricType)(gtk_ruler_get_metric(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

 double Ruler::get_range_lower() const
{
  return gobj()->lower;
}
 
 double Ruler::get_range_upper() const
{
  return gobj()->upper;
}
 
void Ruler::set_range(double lower, double upper, double position, double max_size)
{
  gtk_ruler_set_range(gobj(), lower, upper, position, max_size);
}

void Ruler::get_range(double& lower, double& upper, double& position, double& max_size)
{
  gtk_ruler_get_range(gobj(), &(lower), &(upper), &(position), &(max_size));
}

void Ruler::draw_ticks()
{
  gtk_ruler_draw_ticks(gobj());
}

void Ruler::draw_pos()
{
  gtk_ruler_draw_pos(gobj());
}


Glib::PropertyProxy< double > Ruler::property_lower() 
{
  return Glib::PropertyProxy< double >(this, "lower");
}

Glib::PropertyProxy_ReadOnly< double > Ruler::property_lower() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "lower");
}

Glib::PropertyProxy< double > Ruler::property_upper() 
{
  return Glib::PropertyProxy< double >(this, "upper");
}

Glib::PropertyProxy_ReadOnly< double > Ruler::property_upper() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "upper");
}

Glib::PropertyProxy< double > Ruler::property_position() 
{
  return Glib::PropertyProxy< double >(this, "position");
}

Glib::PropertyProxy_ReadOnly< double > Ruler::property_position() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "position");
}

Glib::PropertyProxy< double > Ruler::property_max_size() 
{
  return Glib::PropertyProxy< double >(this, "max-size");
}

Glib::PropertyProxy_ReadOnly< double > Ruler::property_max_size() const
{
  return Glib::PropertyProxy_ReadOnly< double >(this, "max-size");
}

Glib::PropertyProxy< MetricType > Ruler::property_metric() 
{
  return Glib::PropertyProxy< MetricType >(this, "metric");
}

Glib::PropertyProxy_ReadOnly< MetricType > Ruler::property_metric() const
{
  return Glib::PropertyProxy_ReadOnly< MetricType >(this, "metric");
}


void Gtk::Ruler::draw_ticks_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->draw_ticks)
  {
    (*base->draw_ticks)(gobj());
  }
}
void Gtk::Ruler::draw_pos_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->draw_pos)
  {
    (*base->draw_pos)(gobj());
  }
}


} // namespace Gtk


namespace Glib
{

Gtk::VRuler* wrap(GtkVRuler* object, bool take_copy)
{
  return dynamic_cast<Gtk::VRuler *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& VRuler_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &VRuler_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_vruler_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void VRuler_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* VRuler_Class::wrap_new(GObject* o)
{
  return manage(new VRuler((GtkVRuler*)(o)));

}


/* The implementation: */

VRuler::VRuler(const Glib::ConstructParams& construct_params)
:
  Gtk::Ruler(construct_params)
{
  }

VRuler::VRuler(GtkVRuler* castitem)
:
  Gtk::Ruler((GtkRuler*)(castitem))
{
  }

VRuler::~VRuler()
{
  destroy_();
}

VRuler::CppClassType VRuler::vruler_class_; // initialize static member

GType VRuler::get_type()
{
  return vruler_class_.init().get_type();
}


GType VRuler::get_base_type()
{
  return gtk_vruler_get_type();
}

VRuler::VRuler()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Ruler(Glib::ConstructParams(vruler_class_.init()))
{
  

}


} // namespace Gtk


namespace Glib
{

Gtk::HRuler* wrap(GtkHRuler* object, bool take_copy)
{
  return dynamic_cast<Gtk::HRuler *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& HRuler_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &HRuler_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_hruler_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void HRuler_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* HRuler_Class::wrap_new(GObject* o)
{
  return manage(new HRuler((GtkHRuler*)(o)));

}


/* The implementation: */

HRuler::HRuler(const Glib::ConstructParams& construct_params)
:
  Gtk::Ruler(construct_params)
{
  }

HRuler::HRuler(GtkHRuler* castitem)
:
  Gtk::Ruler((GtkRuler*)(castitem))
{
  }

HRuler::~HRuler()
{
  destroy_();
}

HRuler::CppClassType HRuler::hruler_class_; // initialize static member

GType HRuler::get_type()
{
  return hruler_class_.init().get_type();
}


GType HRuler::get_base_type()
{
  return gtk_hruler_get_type();
}

HRuler::HRuler()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Ruler(Glib::ConstructParams(hruler_class_.init()))
{
  

}


} // namespace Gtk

#endif // GTKMM_DISABLE_DEPRECATED


