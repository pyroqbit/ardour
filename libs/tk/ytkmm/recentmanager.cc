// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
 

#include <glibmm.h>

#include <gtkmm/recentmanager.h>
#include <gtkmm/private/recentmanager_p.h>


/* Copyright (C) 2006 The gtkmm Development Team
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

//Allow the generated code to work without the prefix:
typedef RecentManager::ListHandle_RecentInfos ListHandle_RecentInfos;

bool RecentManager::add_item(const Glib::ustring& uri, const Data& data)
{
  GtkRecentData c_data;
  gboolean result;

  // I wonder whether these should be const in the GTK+ API. armin.
  c_data.display_name = data.display_name.empty() ? NULL : const_cast<gchar*>(data.display_name.c_str());
  c_data.description = const_cast<gchar*>(data.description.c_str());
  c_data.mime_type = const_cast<gchar*>(data.mime_type.c_str());
  c_data.app_name = const_cast<gchar*>(data.app_name.c_str());
  c_data.app_exec = const_cast<gchar*>(data.app_exec.c_str());
  
  c_data.groups = static_cast<gchar**>(g_malloc((data.groups.size() + 1) * sizeof(gchar*)));
  for(unsigned int i = 0; i < data.groups.size(); ++ i)
    c_data.groups[i] = const_cast<gchar*>(data.groups[i].c_str());
  c_data.groups[data.groups.size()] = NULL;
  
  c_data.is_private = data.is_private;

  result = gtk_recent_manager_add_full(gobj(), uri.c_str(), &c_data);
  g_free(c_data.groups);
  return result == TRUE;
}

} //namespace Gtk

namespace
{


static const Glib::SignalProxyInfo RecentManager_signal_changed_info =
{
  "changed",
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback,
  (GCallback) &Glib::SignalProxyNormal::slot0_void_callback
};


} // anonymous namespace


Gtk::RecentManagerError::RecentManagerError(Gtk::RecentManagerError::Code error_code, const Glib::ustring& error_message)
:
  Glib::Error (GTK_RECENT_MANAGER_ERROR, error_code, error_message)
{}

Gtk::RecentManagerError::RecentManagerError(GError* gobject)
:
  Glib::Error (gobject)
{}

Gtk::RecentManagerError::Code Gtk::RecentManagerError::code() const
{
  return static_cast<Code>(Glib::Error::code());
}

void Gtk::RecentManagerError::throw_func(GError* gobject)
{
  throw Gtk::RecentManagerError(gobject);
}

// static
GType Glib::Value<Gtk::RecentManagerError::Code>::value_type()
{
  return gtk_recent_manager_error_get_type();
}


namespace Glib
{

Glib::RefPtr<Gtk::RecentManager> wrap(GtkRecentManager* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::RecentManager>( dynamic_cast<Gtk::RecentManager*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RecentManager_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RecentManager_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_recent_manager_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void RecentManager_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->changed = &changed_callback;
}


void RecentManager_Class::changed_callback(GtkRecentManager* self)
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
        obj->on_changed();
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
  if(base && base->changed)
    (*base->changed)(self);
}


Glib::ObjectBase* RecentManager_Class::wrap_new(GObject* object)
{
  return new RecentManager((GtkRecentManager*)object);
}


/* The implementation: */

GtkRecentManager* RecentManager::gobj_copy()
{
  reference();
  return gobj();
}

RecentManager::RecentManager(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

RecentManager::RecentManager(GtkRecentManager* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


RecentManager::~RecentManager()
{}


RecentManager::CppClassType RecentManager::recentmanager_class_; // initialize static member

GType RecentManager::get_type()
{
  return recentmanager_class_.init().get_type();
}


GType RecentManager::get_base_type()
{
  return gtk_recent_manager_get_type();
}


RecentManager::RecentManager()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(recentmanager_class_.init()))
{
  

}

Glib::RefPtr<RecentManager> RecentManager::create()
{
  return Glib::RefPtr<RecentManager>( new RecentManager() );
}

Glib::RefPtr<RecentManager> RecentManager::get_default()
{

  Glib::RefPtr<RecentManager> retvalue = Glib::wrap(gtk_recent_manager_get_default());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<RecentManager> RecentManager::get_for_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{

  Glib::RefPtr<RecentManager> retvalue = Glib::wrap(gtk_recent_manager_get_for_screen(Glib::unwrap(screen)));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void RecentManager::set_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{
  gtk_recent_manager_set_screen(gobj(), Glib::unwrap(screen));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

bool RecentManager::add_item(const Glib::ustring& uri)
{
  GError* gerror = 0;
  bool retvalue = gtk_recent_manager_add_item(gobj(), uri.c_str());
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool RecentManager::remove_item(const Glib::ustring& uri)
{
  GError* gerror = 0;
  bool retvalue = gtk_recent_manager_remove_item(gobj(), uri.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<RecentInfo> RecentManager::lookup_item(const Glib::ustring& uri)
{
  GError* gerror = 0;
  Glib::RefPtr<RecentInfo> retvalue = Glib::wrap(gtk_recent_manager_lookup_item(gobj(), uri.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<const RecentInfo> RecentManager::lookup_item(const Glib::ustring& uri) const
{
  GError* gerror = 0;
  Glib::RefPtr<const RecentInfo> retvalue = Glib::wrap(gtk_recent_manager_lookup_item(const_cast<GtkRecentManager*>(gobj()), uri.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

bool RecentManager::has_item(const Glib::ustring& uri) const
{
  return gtk_recent_manager_has_item(const_cast<GtkRecentManager*>(gobj()), uri.c_str());
}

bool RecentManager::move_item(const Glib::ustring& uri, const Glib::ustring& new_uri)
{
  GError* gerror = 0;
  bool retvalue = gtk_recent_manager_move_item(gobj(), uri.c_str(), new_uri.c_str(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void RecentManager::set_limit(int limit)
{
  gtk_recent_manager_set_limit(gobj(), limit);
}

int RecentManager::get_limit() const
{
  return gtk_recent_manager_get_limit(const_cast<GtkRecentManager*>(gobj()));
}

ListHandle_RecentInfos RecentManager::get_items() const
{
  return ListHandle_RecentInfos(gtk_recent_manager_get_items(const_cast<GtkRecentManager*>(gobj())), Glib::OWNERSHIP_SHALLOW);
}

int RecentManager::purge_items()
{
  GError* gerror = 0;
  int retvalue = gtk_recent_manager_purge_items(gobj(), &(gerror));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}


Glib::SignalProxy0< void > RecentManager::signal_changed()
{
  return Glib::SignalProxy0< void >(this, &RecentManager_signal_changed_info);
}


Glib::PropertyProxy_ReadOnly< Glib::ustring > RecentManager::property_filename() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "filename");
}

Glib::PropertyProxy< int > RecentManager::property_limit() 
{
  return Glib::PropertyProxy< int >(this, "limit");
}

Glib::PropertyProxy_ReadOnly< int > RecentManager::property_limit() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "limit");
}

Glib::PropertyProxy_ReadOnly< int > RecentManager::property_size() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "size");
}


void Gtk::RecentManager::on_changed()
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->changed)
    (*base->changed)(gobj());
}


} // namespace Gtk


