// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/settings.h>
#include <gtkmm/private/settings_p.h>


// -*- c++ -*-
/* $Id: settings.ccg,v 1.4 2005/08/01 10:34:08 murrayc Exp $ */

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


} //namespace Gtk


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::Settings> wrap(GtkSettings* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::Settings>( dynamic_cast<Gtk::Settings*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Settings_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Settings_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_settings_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Settings_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Settings_Class::wrap_new(GObject* object)
{
  return new Settings((GtkSettings*)object);
}


/* The implementation: */

GtkSettings* Settings::gobj_copy()
{
  reference();
  return gobj();
}

Settings::Settings(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Settings::Settings(GtkSettings* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Settings::~Settings()
{}


Settings::CppClassType Settings::settings_class_; // initialize static member

GType Settings::get_type()
{
  return settings_class_.init().get_type();
}


GType Settings::get_base_type()
{
  return gtk_settings_get_type();
}


Glib::RefPtr<Settings> Settings::get_default()
{

  Glib::RefPtr<Settings> retvalue = Glib::wrap(gtk_settings_get_default());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

Glib::RefPtr<Settings> Settings::get_for_screen(const Glib::RefPtr<Gdk::Screen>& screen)
{

  Glib::RefPtr<Settings> retvalue = Glib::wrap(gtk_settings_get_for_screen(Glib::unwrap(screen)));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}


Glib::PropertyProxy< int > Settings::property_gtk_double_click_time() 
{
  return Glib::PropertyProxy< int >(this, "gtk-double-click-time");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_double_click_time() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-double-click-time");
}

Glib::PropertyProxy< int > Settings::property_gtk_double_click_distance() 
{
  return Glib::PropertyProxy< int >(this, "gtk-double-click-distance");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_double_click_distance() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-double-click-distance");
}

Glib::PropertyProxy< bool > Settings::property_gtk_cursor_blink() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-cursor-blink");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_cursor_blink() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-cursor-blink");
}

Glib::PropertyProxy< int > Settings::property_gtk_cursor_blink_time() 
{
  return Glib::PropertyProxy< int >(this, "gtk-cursor-blink-time");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_cursor_blink_time() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-cursor-blink-time");
}

Glib::PropertyProxy< bool > Settings::property_gtk_split_cursor() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-split-cursor");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_split_cursor() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-split-cursor");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-theme-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-theme-name");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_key_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-key-theme-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_key_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-key-theme-name");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_menu_bar_accel() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-menu-bar-accel");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_menu_bar_accel() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-menu-bar-accel");
}

Glib::PropertyProxy< int > Settings::property_gtk_dnd_drag_threshold() 
{
  return Glib::PropertyProxy< int >(this, "gtk-dnd-drag-threshold");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_dnd_drag_threshold() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-dnd-drag-threshold");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_font_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-font-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_font_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-font-name");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_modules() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-modules");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_modules() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-modules");
}

Glib::PropertyProxy< int > Settings::property_gtk_xft_antialias() 
{
  return Glib::PropertyProxy< int >(this, "gtk-xft-antialias");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_xft_antialias() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-xft-antialias");
}

Glib::PropertyProxy< int > Settings::property_gtk_xft_hinting() 
{
  return Glib::PropertyProxy< int >(this, "gtk-xft-hinting");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_xft_hinting() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-xft-hinting");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_xft_hintstyle() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-xft-hintstyle");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_xft_hintstyle() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-xft-hintstyle");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_xft_rgba() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-xft-rgba");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_xft_rgba() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-xft-rgba");
}

Glib::PropertyProxy< int > Settings::property_gtk_xft_dpi() 
{
  return Glib::PropertyProxy< int >(this, "gtk-xft-dpi");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_xft_dpi() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-xft-dpi");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_cursor_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-cursor-theme-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_cursor_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-cursor-theme-name");
}

Glib::PropertyProxy< int > Settings::property_gtk_cursor_theme_size() 
{
  return Glib::PropertyProxy< int >(this, "gtk-cursor-theme-size");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_cursor_theme_size() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-cursor-theme-size");
}

Glib::PropertyProxy< bool > Settings::property_gtk_alternative_button_order() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-alternative-button-order");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_alternative_button_order() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-alternative-button-order");
}

Glib::PropertyProxy< bool > Settings::property_gtk_alternative_sort_arrows() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-alternative-sort-arrows");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_alternative_sort_arrows() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-alternative-sort-arrows");
}

Glib::PropertyProxy< bool > Settings::property_gtk_show_input_method_menu() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-show-input-method-menu");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_show_input_method_menu() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-show-input-method-menu");
}

Glib::PropertyProxy< bool > Settings::property_gtk_show_unicode_menu() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-show-unicode-menu");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_show_unicode_menu() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-show-unicode-menu");
}

Glib::PropertyProxy< int > Settings::property_gtk_timeout_initial() 
{
  return Glib::PropertyProxy< int >(this, "gtk-timeout-initial");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_timeout_initial() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-timeout-initial");
}

Glib::PropertyProxy< int > Settings::property_gtk_timeout_repeat() 
{
  return Glib::PropertyProxy< int >(this, "gtk-timeout-repeat");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_timeout_repeat() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-timeout-repeat");
}

Glib::PropertyProxy< int > Settings::property_gtk_timeout_expand() 
{
  return Glib::PropertyProxy< int >(this, "gtk-timeout-expand");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_timeout_expand() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-timeout-expand");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_color_scheme() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-color-scheme");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_color_scheme() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-color-scheme");
}

Glib::PropertyProxy< bool > Settings::property_gtk_enable_animations() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-animations");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_animations() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-animations");
}

Glib::PropertyProxy< bool > Settings::property_gtk_touchscreen_mode() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-touchscreen-mode");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_touchscreen_mode() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-touchscreen-mode");
}

Glib::PropertyProxy< int > Settings::property_gtk_tooltip_timeout() 
{
  return Glib::PropertyProxy< int >(this, "gtk-tooltip-timeout");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_tooltip_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-tooltip-timeout");
}

Glib::PropertyProxy< int > Settings::property_gtk_tooltip_browse_timeout() 
{
  return Glib::PropertyProxy< int >(this, "gtk-tooltip-browse-timeout");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_tooltip_browse_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-tooltip-browse-timeout");
}

Glib::PropertyProxy< int > Settings::property_gtk_tooltip_browse_mode_timeout() 
{
  return Glib::PropertyProxy< int >(this, "gtk-tooltip-browse-mode-timeout");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_tooltip_browse_mode_timeout() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-tooltip-browse-mode-timeout");
}

Glib::PropertyProxy< bool > Settings::property_gtk_keynav_cursor_only() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-keynav-cursor-only");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_keynav_cursor_only() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-keynav-cursor-only");
}

Glib::PropertyProxy< bool > Settings::property_gtk_keynav_wrap_around() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-keynav-wrap-around");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_keynav_wrap_around() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-keynav-wrap-around");
}

Glib::PropertyProxy< bool > Settings::property_gtk_error_bell() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-error-bell");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_error_bell() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-error-bell");
}

Glib::PropertyProxy_ReadOnly< Gdk::Color > Settings::property_color_hash() const
{
  return Glib::PropertyProxy_ReadOnly< Gdk::Color >(this, "color-hash");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_file_chooser_backend() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-file-chooser-backend");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_file_chooser_backend() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-file-chooser-backend");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_print_backends() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-print-backends");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_print_backends() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-print-backends");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_print_preview_command() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-print-preview-command");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_print_preview_command() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-print-preview-command");
}

Glib::PropertyProxy< bool > Settings::property_gtk_enable_mnemonics() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-mnemonics");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_mnemonics() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-mnemonics");
}

Glib::PropertyProxy< bool > Settings::property_gtk_enable_accels() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-accels");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_accels() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-accels");
}

Glib::PropertyProxy< int > Settings::property_gtk_recent_files_limit() 
{
  return Glib::PropertyProxy< int >(this, "gtk-recent-files-limit");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_recent_files_limit() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-recent-files-limit");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_im_module() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-im-module");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_im_module() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-im-module");
}

Glib::PropertyProxy< int > Settings::property_gtk_recent_files_max_age() 
{
  return Glib::PropertyProxy< int >(this, "gtk-recent-files-max-age");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_recent_files_max_age() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-recent-files-max-age");
}

Glib::PropertyProxy< int > Settings::property_gtk_fontconfig_timestamp() 
{
  return Glib::PropertyProxy< int >(this, "gtk-fontconfig-timestamp");
}

Glib::PropertyProxy_ReadOnly< int > Settings::property_gtk_fontconfig_timestamp() const
{
  return Glib::PropertyProxy_ReadOnly< int >(this, "gtk-fontconfig-timestamp");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_sound_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-sound-theme-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_sound_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-sound-theme-name");
}

Glib::PropertyProxy< bool > Settings::property_gtk_enable_input_feedback_sounds() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-input-feedback-sounds");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_input_feedback_sounds() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-input-feedback-sounds");
}

Glib::PropertyProxy< bool > Settings::property_gtk_enable_event_sounds() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-event-sounds");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_event_sounds() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-event-sounds");
}

Glib::PropertyProxy< bool > Settings::property_gtk_enable_tooltips() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-enable-tooltips");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_enable_tooltips() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-enable-tooltips");
}

Glib::PropertyProxy< ToolbarStyle > Settings::property_gtk_toolbar_style() 
{
  return Glib::PropertyProxy< ToolbarStyle >(this, "gtk-toolbar-style");
}

Glib::PropertyProxy_ReadOnly< ToolbarStyle > Settings::property_gtk_toolbar_style() const
{
  return Glib::PropertyProxy_ReadOnly< ToolbarStyle >(this, "gtk-toolbar-style");
}

Glib::PropertyProxy< IconSize > Settings::property_gtk_toolbar_icon_size() 
{
  return Glib::PropertyProxy< IconSize >(this, "gtk-toolbar-icon-size");
}

Glib::PropertyProxy_ReadOnly< IconSize > Settings::property_gtk_toolbar_icon_size() const
{
  return Glib::PropertyProxy_ReadOnly< IconSize >(this, "gtk-toolbar-icon-size");
}

Glib::PropertyProxy< bool > Settings::property_gtk_can_change_accels() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-can-change-accels");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_can_change_accels() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-can-change-accels");
}

Glib::PropertyProxy< bool > Settings::property_gtk_entry_select_on_focus() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-entry-select-on-focus");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_entry_select_on_focus() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-entry-select-on-focus");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_color_palette() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-color-palette");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_color_palette() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-color-palette");
}

Glib::PropertyProxy< bool > Settings::property_gtk_button_images() 
{
  return Glib::PropertyProxy< bool >(this, "gtk-button-images");
}

Glib::PropertyProxy_ReadOnly< bool > Settings::property_gtk_button_images() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "gtk-button-images");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_icon_theme_name() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-icon-theme-name");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_icon_theme_name() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-icon-theme-name");
}

Glib::PropertyProxy< Glib::ustring > Settings::property_gtk_icon_sizes() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "gtk-icon-sizes");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > Settings::property_gtk_icon_sizes() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "gtk-icon-sizes");
}


} // namespace Gtk


