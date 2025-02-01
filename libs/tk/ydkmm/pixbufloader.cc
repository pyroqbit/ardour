// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/pixbufloader.h>
#include <gdkmm/private/pixbufloader_p.h>


// -*- c++ -*-
/* $Id: pixbufloader.ccg,v 1.6 2006/05/11 11:40:23 murrayc Exp $ */

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

#include <ydk/gdk.h>
#include <ydk-pixbuf/ydk-pixbuf.h>


namespace
{

/* We use this helper function in the constructor to be able to throw
 * before the base class' (Glib::Object) constructor is called.
 */
static GdkPixbufLoader* pixbuf_loader_create_with_type(const Glib::ustring& image_type, bool mime_type)
{
  GError* error = 0;
  GdkPixbufLoader* loader = 0;

  if(mime_type)
    loader = gdk_pixbuf_loader_new_with_mime_type(image_type.c_str(), &error);
  else
    loader = gdk_pixbuf_loader_new_with_type(image_type.c_str(), &error);

  if(error)
    Glib::Error::throw_exception(error);

  return loader;
}

} // anonymous namespace


namespace Gdk
{

PixbufLoader::PixbufLoader(const Glib::ustring& image_type, bool mime_type)
:
  Glib::ObjectBase(0),
  Glib::Object((GObject*) pixbuf_loader_create_with_type(image_type, mime_type))
{}

} // namespace Gdk


namespace
{


static const Glib::SignalProxyInfo PixbufLoader_signal_area_prepared_info =
{
  "area_prepared",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void PixbufLoader_signal_area_updated_callback(GdkPixbufLoader* self, gint p0,gint p1,gint p2,gint p3,void* data)
{
  using namespace Gdk;
  typedef sigc::slot< void,int,int,int,int > SlotType;

  PixbufLoader* obj = dynamic_cast<PixbufLoader*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
, p2
, p3
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo PixbufLoader_signal_area_updated_info =
{
  "area_updated",
  (GCallback) &PixbufLoader_signal_area_updated_callback,
  (GCallback) &PixbufLoader_signal_area_updated_callback
};


static const Glib::SignalProxyInfo PixbufLoader_signal_closed_info =
{
  "closed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


static void PixbufLoader_signal_size_prepared_callback(GdkPixbufLoader* self, gint p0,gint p1,void* data)
{
  using namespace Gdk;
  typedef sigc::slot< void,int,int > SlotType;

  PixbufLoader* obj = dynamic_cast<PixbufLoader*>(Glib::ObjectBase::_get_current_wrapper((GObject*) self));
  // Do not try to call a signal on a disassociated wrapper.
  if(obj)
  {
    try
    {
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(p0
, p1
);
    }
    catch(...)
    {
       Glib::exception_handlers_invoke();
    }
  }
}

static const Glib::SignalProxyInfo PixbufLoader_signal_size_prepared_info =
{
  "size_prepared",
  (GCallback) &PixbufLoader_signal_size_prepared_callback,
  (GCallback) &PixbufLoader_signal_size_prepared_callback
};


} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::PixbufLoader> wrap(GdkPixbufLoader* object, bool take_copy)
{
  return Glib::RefPtr<Gdk::PixbufLoader>( dynamic_cast<Gdk::PixbufLoader*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& PixbufLoader_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PixbufLoader_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_pixbuf_loader_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PixbufLoader_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->area_prepared = &area_prepared_callback;
  klass->area_updated = &area_updated_callback;
  klass->closed = &closed_callback;
}


void PixbufLoader_Class::area_prepared_callback(GdkPixbufLoader* self)
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
        obj->on_area_prepared();
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
  if(base && base->area_prepared)
    (*base->area_prepared)(self);
}
void PixbufLoader_Class::area_updated_callback(GdkPixbufLoader* self, gint p0, gint p1, gint p2, gint p3)
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
        obj->on_area_updated(p0
, p1
, p2
, p3
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
  if(base && base->area_updated)
    (*base->area_updated)(self, p0, p1, p2, p3);
}
void PixbufLoader_Class::closed_callback(GdkPixbufLoader* self)
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
        obj->on_closed();
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
  if(base && base->closed)
    (*base->closed)(self);
}


Glib::ObjectBase* PixbufLoader_Class::wrap_new(GObject* object)
{
  return new PixbufLoader((GdkPixbufLoader*)object);
}


/* The implementation: */

GdkPixbufLoader* PixbufLoader::gobj_copy()
{
  reference();
  return gobj();
}

PixbufLoader::PixbufLoader(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

PixbufLoader::PixbufLoader(GdkPixbufLoader* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


PixbufLoader::~PixbufLoader()
{}


PixbufLoader::CppClassType PixbufLoader::pixbufloader_class_; // initialize static member

GType PixbufLoader::get_type()
{
  return pixbufloader_class_.init().get_type();
}


GType PixbufLoader::get_base_type()
{
  return gdk_pixbuf_loader_get_type();
}


PixbufLoader::PixbufLoader()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(pixbufloader_class_.init()))
{
  

}

Glib::RefPtr<PixbufLoader> PixbufLoader::create()
{
  return Glib::RefPtr<PixbufLoader>( new PixbufLoader() );
}

Glib::RefPtr<PixbufLoader> PixbufLoader::create(const Glib::ustring& image_type, bool mime_type)
{
  return Glib::RefPtr<PixbufLoader>( new PixbufLoader(image_type, mime_type) );
}

void PixbufLoader::set_size(int width, int height)
{
  gdk_pixbuf_loader_set_size(gobj(), width, height);
}

void PixbufLoader::write(const guint8* buf, gsize count)
{
  GError* gerror = 0;
  gdk_pixbuf_loader_write(gobj(), (buf), count, &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

void PixbufLoader::close()
{
  GError* gerror = 0;
  gdk_pixbuf_loader_close(gobj(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
}

Glib::RefPtr<Gdk::Pixbuf> PixbufLoader::get_pixbuf()
{
  Glib::RefPtr<Gdk::Pixbuf> retvalue = Glib::wrap(gdk_pixbuf_loader_get_pixbuf(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<Gdk::PixbufAnimation> PixbufLoader::get_animation()
{
  Glib::RefPtr<Gdk::PixbufAnimation> retvalue = Glib::wrap(gdk_pixbuf_loader_get_animation(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

PixbufFormat PixbufLoader::get_format() const
{
  return PixbufFormat(gdk_pixbuf_loader_get_format(const_cast<GdkPixbufLoader*>(gobj())));
}


Glib::SignalProxy0< void > PixbufLoader::signal_area_prepared()
{
  return Glib::SignalProxy0< void >(this, &PixbufLoader_signal_area_prepared_info);
}


Glib::SignalProxy4< void,int,int,int,int > PixbufLoader::signal_area_updated()
{
  return Glib::SignalProxy4< void,int,int,int,int >(this, &PixbufLoader_signal_area_updated_info);
}


Glib::SignalProxy0< void > PixbufLoader::signal_closed()
{
  return Glib::SignalProxy0< void >(this, &PixbufLoader_signal_closed_info);
}


Glib::SignalProxy2< void,int,int > PixbufLoader::signal_size_prepared()
{
  return Glib::SignalProxy2< void,int,int >(this, &PixbufLoader_signal_size_prepared_info);
}


void Gdk::PixbufLoader::on_area_prepared()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->area_prepared)
    (*base->area_prepared)(gobj());
}
void Gdk::PixbufLoader::on_area_updated(int x, int y, int width, int height)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->area_updated)
    (*base->area_updated)(gobj(),x,y,width,height);
}
void Gdk::PixbufLoader::on_closed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->closed)
    (*base->closed)(gobj());
}


} // namespace Gdk


