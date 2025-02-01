// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!

#undef GTK_DISABLE_DEPRECATED
 

#include <glibmm.h>

#include <gtkmm/aboutdialog.h>
#include <gtkmm/private/aboutdialog_p.h>


// -*- c++ -*-
/* $Id: aboutdialog.ccg,v 1.5 2006/06/13 17:24:35 murrayc Exp $ */

/* 
 *
 * Copyright 2004 The gtkmm Development Team
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

#ifndef GTKMM_DISABLE_DEPRECATED

//We use a function instead of a static method, so we can make it static, so it is not exported.
static void SignalProxy_ActivateLink_gtk_callback(GtkAboutDialog* about, const gchar* link, gpointer data)
{
  Gtk::AboutDialog::SlotActivateLink* the_slot = static_cast<Gtk::AboutDialog::SlotActivateLink*>(data);

  try
  {
    Gtk::AboutDialog* pCppAbout = Glib::wrap(about);
    (*the_slot)( *pCppAbout, Glib::convert_const_gchar_ptr_to_ustring(link) );
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
  }
}

static void SignalProxy_ActivateLink_gtk_callback_destroy(void* data)
{
  Gtk::AboutDialog::SlotActivateLink* the_slot = static_cast<Gtk::AboutDialog::SlotActivateLink*>(data);
  delete the_slot;
}


namespace Gtk
{

//static:
void AboutDialog::set_email_hook(const SlotActivateLink& slot)
{
  // Create a copy of the slot object. A pointer to this will be passed
  // through the callback's data parameter.  It will be deleted
  // when SignalProxy_SlotForwardPage_gtk_callback_destroy() is called.
  SlotActivateLink* slot_copy = new SlotActivateLink(slot);

  gtk_about_dialog_set_email_hook(
      &SignalProxy_ActivateLink_gtk_callback, slot_copy,
      &SignalProxy_ActivateLink_gtk_callback_destroy);
}
  
//static:
void AboutDialog::set_url_hook(const SlotActivateLink& slot)
{
  // Create a copy of the slot object. A pointer to this will be passed
  // through the callback's data parameter.  It will be deleted
  // when SignalProxy_SlotForwardPage_gtk_callback_destroy() is called.
  SlotActivateLink* slot_copy = new SlotActivateLink(slot);

  gtk_about_dialog_set_url_hook(
      &SignalProxy_ActivateLink_gtk_callback, slot_copy,
      &SignalProxy_ActivateLink_gtk_callback_destroy);
}
#endif // GTKMM_DISABLE_DEPRECATED


} // namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Gtk::AboutDialog* wrap(GtkAboutDialog* object, bool take_copy)
{
  return dynamic_cast<Gtk::AboutDialog *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& AboutDialog_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &AboutDialog_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_about_dialog_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void AboutDialog_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* AboutDialog_Class::wrap_new(GObject* o)
{
  return new AboutDialog((GtkAboutDialog*)(o)); //top-level windows can not be manage()ed.

}


/* The implementation: */

AboutDialog::AboutDialog(const Glib::ConstructParams& construct_params)
:
  Gtk::Dialog(construct_params)
{
  }

AboutDialog::AboutDialog(GtkAboutDialog* castitem)
:
  Gtk::Dialog((GtkDialog*)(castitem))
{
  }

AboutDialog::~AboutDialog()
{
  destroy_();
}

AboutDialog::CppClassType AboutDialog::aboutdialog_class_; // initialize static member

GType AboutDialog::get_type()
{
  return aboutdialog_class_.init().get_type();
}


GType AboutDialog::get_base_type()
{
  return gtk_about_dialog_get_type();
}


AboutDialog::AboutDialog()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Dialog(Glib::ConstructParams(aboutdialog_class_.init()))
{
  

}

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::ustring AboutDialog::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_name(const_cast<GtkAboutDialog*>(gobj())));
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

#ifndef GTKMM_DISABLE_DEPRECATED
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
void AboutDialog::set_name(const Glib::ustring& name)
{
  gtk_about_dialog_set_name(gobj(), name.c_str());
}
G_GNUC_END_IGNORE_DEPRECATIONS
#endif // GTKMM_DISABLE_DEPRECATED

Glib::ustring AboutDialog::get_program_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_program_name(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_program_name(const Glib::ustring& name)
{
  gtk_about_dialog_set_program_name(gobj(), name.c_str());
}

Glib::ustring AboutDialog::get_version() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_version(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_version(const Glib::ustring& version)
{
  gtk_about_dialog_set_version(gobj(), version.c_str());
}

Glib::ustring AboutDialog::get_copyright() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_copyright(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_copyright(const Glib::ustring& copyright)
{
  gtk_about_dialog_set_copyright(gobj(), copyright.c_str());
}

Glib::ustring AboutDialog::get_comments() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_comments(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_comments(const Glib::ustring& comments)
{
  gtk_about_dialog_set_comments(gobj(), comments.c_str());
}

Glib::ustring AboutDialog::get_license() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_license(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_license(const Glib::ustring& license)
{
  gtk_about_dialog_set_license(gobj(), license.c_str());
}

Glib::ustring AboutDialog::get_website() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_website(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_website(const Glib::ustring& website)
{
  gtk_about_dialog_set_website(gobj(), website.c_str());
}

Glib::ustring AboutDialog::get_website_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_website_label(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_website_label(const Glib::ustring& website_label)
{
  gtk_about_dialog_set_website_label(gobj(), website_label.c_str());
}

Glib::StringArrayHandle AboutDialog::get_authors() const
{
  return Glib::StringArrayHandle(gtk_about_dialog_get_authors(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_authors(const Glib::StringArrayHandle& authors) const
{
  gtk_about_dialog_set_authors(const_cast<GtkAboutDialog*>(gobj()), const_cast<const gchar**>((authors).data()));
}

Glib::StringArrayHandle AboutDialog::get_documenters() const
{
  return Glib::StringArrayHandle(gtk_about_dialog_get_documenters(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_documenters(const Glib::StringArrayHandle& documenters)
{
  gtk_about_dialog_set_documenters(gobj(), const_cast<const gchar**>((documenters).data()));
}

Glib::StringArrayHandle AboutDialog::get_artists() const
{
  return Glib::StringArrayHandle(gtk_about_dialog_get_artists(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_artists(const Glib::StringArrayHandle& artists)
{
  gtk_about_dialog_set_artists(gobj(), const_cast<const gchar**>((artists).data()));
}

Glib::ustring AboutDialog::get_translator_credits() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_translator_credits(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_translator_credits(const Glib::ustring& translator_credits)
{
  gtk_about_dialog_set_translator_credits(gobj(), translator_credits.c_str());
}

Glib::RefPtr<Gdk::Pixbuf> AboutDialog::get_logo()
{
  return Glib::wrap(gtk_about_dialog_get_logo(gobj()));
}

Glib::RefPtr<const Gdk::Pixbuf> AboutDialog::get_logo() const
{
  return const_cast<AboutDialog*>(this)->get_logo();
}

void AboutDialog::set_logo(const Glib::RefPtr<Gdk::Pixbuf>& logo)
{
  gtk_about_dialog_set_logo(gobj(), Glib::unwrap(logo));
}

Glib::ustring AboutDialog::get_logo_icon_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_about_dialog_get_logo_icon_name(const_cast<GtkAboutDialog*>(gobj())));
}

void AboutDialog::set_logo_icon_name(const Glib::ustring& icon_name)
{
  gtk_about_dialog_set_logo_icon_name(gobj(), icon_name.c_str());
}

bool AboutDialog::get_wrap_license() const
{
  return gtk_about_dialog_get_wrap_license(const_cast<GtkAboutDialog*>(gobj()));
}

void AboutDialog::set_wrap_license(bool wrap_license)
{
  gtk_about_dialog_set_wrap_license(gobj(), static_cast<int>(wrap_license));
}


Glib::PropertyProxy< Glib::ustring > AboutDialog::property_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "name");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_program_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "program-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_program_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "program-name");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_version() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "version");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_version() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "version");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_copyright() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "copyright");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_copyright() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "copyright");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_comments() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "comments");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_comments() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "comments");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_website() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "website");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_website() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "website");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_website_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "website-label");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_website_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "website-label");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_license() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "license");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_license() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "license");
}

Glib::PropertyProxy< Glib::StringArrayHandle > AboutDialog::property_authors() 
{
  return Glib::PropertyProxy< Glib::StringArrayHandle >(this, "authors");
}

Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > AboutDialog::property_authors() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle >(this, "authors");
}

Glib::PropertyProxy< Glib::StringArrayHandle > AboutDialog::property_documenters() 
{
  return Glib::PropertyProxy< Glib::StringArrayHandle >(this, "documenters");
}

Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > AboutDialog::property_documenters() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle >(this, "documenters");
}

Glib::PropertyProxy< Glib::StringArrayHandle > AboutDialog::property_translator_credits() 
{
  return Glib::PropertyProxy< Glib::StringArrayHandle >(this, "translator-credits");
}

Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > AboutDialog::property_translator_credits() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle >(this, "translator-credits");
}

Glib::PropertyProxy< Glib::StringArrayHandle > AboutDialog::property_artists() 
{
  return Glib::PropertyProxy< Glib::StringArrayHandle >(this, "artists");
}

Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle > AboutDialog::property_artists() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::StringArrayHandle >(this, "artists");
}

Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > AboutDialog::property_logo() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> >(this, "logo");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > AboutDialog::property_logo() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> >(this, "logo");
}

Glib::PropertyProxy< Glib::ustring > AboutDialog::property_logo_icon_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "logo-icon-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > AboutDialog::property_logo_icon_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "logo-icon-name");
}

Glib::PropertyProxy< bool > AboutDialog::property_wrap_license() 
{
  return Glib::PropertyProxy< bool >(this, "wrap-license");
}

Glib::PropertyProxy_ReadOnly< bool > AboutDialog::property_wrap_license() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "wrap-license");
}


} // namespace Gtk


