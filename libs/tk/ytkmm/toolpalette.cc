// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/toolpalette.h>
#include <gtkmm/private/toolpalette_p.h>


// -*- c++ -*-
/* $Id: toolpalette.ccg,v 1.6 2004/03/03 18:48:04 murrayc Exp $ */

/* 
 *
 * Copyright 2009 The gtkmm Development Team
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
#include <ytk/ytk.h>

namespace Gtk
{


} // namespace Gtk


namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::ToolPaletteDragTargets>::value_type()
{
  return gtk_tool_palette_drag_targets_get_type();
}


namespace Glib
{

Gtk::ToolPalette* wrap(GtkToolPalette* object, bool take_copy)
{
  return dynamic_cast<Gtk::ToolPalette *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& ToolPalette_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ToolPalette_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_tool_palette_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Orientable::add_interface(get_type());

  }

  return *this;
}


void ToolPalette_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* ToolPalette_Class::wrap_new(GObject* o)
{
  return manage(new ToolPalette((GtkToolPalette*)(o)));

}


/* The implementation: */

ToolPalette::ToolPalette(const Glib::ConstructParams& construct_params)
:
  Gtk::Container(construct_params)
{
  }

ToolPalette::ToolPalette(GtkToolPalette* castitem)
:
  Gtk::Container((GtkContainer*)(castitem))
{
  }

ToolPalette::~ToolPalette()
{
  destroy_();
}

ToolPalette::CppClassType ToolPalette::toolpalette_class_; // initialize static member

GType ToolPalette::get_type()
{
  return toolpalette_class_.init().get_type();
}


GType ToolPalette::get_base_type()
{
  return gtk_tool_palette_get_type();
}


ToolPalette::ToolPalette()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Container(Glib::ConstructParams(toolpalette_class_.init()))
{
  

}

void ToolPalette::set_group_position(ToolItemGroup& group, int position)
{
  gtk_tool_palette_set_group_position(gobj(), (group).gobj(), position);
}

void ToolPalette::set_exclusive(ToolItemGroup& group, bool exclusive)
{
  gtk_tool_palette_set_exclusive(gobj(), (group).gobj(), static_cast<int>(exclusive));
}

void ToolPalette::set_expand(ToolItemGroup& group, bool expand)
{
  gtk_tool_palette_set_expand(gobj(), (group).gobj(), static_cast<int>(expand));
}

int ToolPalette::get_group_position(ToolItemGroup& group) const
{
  return gtk_tool_palette_get_group_position(const_cast<GtkToolPalette*>(gobj()), (group).gobj());
}

bool ToolPalette::get_exclusive(ToolItemGroup& group) const
{
  return gtk_tool_palette_get_exclusive(const_cast<GtkToolPalette*>(gobj()), (group).gobj());
}

bool ToolPalette::get_expand(ToolItemGroup& group) const
{
  return gtk_tool_palette_get_expand(const_cast<GtkToolPalette*>(gobj()), (group).gobj());
}

void ToolPalette::set_icon_size(IconSize icon_size)
{
  gtk_tool_palette_set_icon_size(gobj(), static_cast<GtkIconSize>(int(icon_size)));
}

void ToolPalette::unset_icon_size()
{
  gtk_tool_palette_unset_icon_size(gobj());
}

void ToolPalette::set_style(ToolbarStyle style)
{
  gtk_tool_palette_set_style(gobj(), ((GtkToolbarStyle)(style)));
}

void ToolPalette::unset_style()
{
  gtk_tool_palette_unset_style(gobj());
}

IconSize ToolPalette::get_icon_size() const
{
  return IconSize(static_cast<int>(gtk_tool_palette_get_icon_size(const_cast<GtkToolPalette*>(gobj()))));
}

ToolbarStyle ToolPalette::get_style() const
{
  return ((ToolbarStyle)(gtk_tool_palette_get_style(const_cast<GtkToolPalette*>(gobj()))));
}

ToolItem* ToolPalette::get_drop_item(int x, int y)
{
  return Glib::wrap(gtk_tool_palette_get_drop_item(gobj(), x, y));
}

const ToolItem* ToolPalette::get_drop_item(int x, int y) const
{
  return const_cast<ToolPalette*>(this)->get_drop_item(x, y);
}

ToolItemGroup* ToolPalette::get_drop_group(int x, int y)
{
  return Glib::wrap(gtk_tool_palette_get_drop_group(gobj(), x, y));
}

const ToolItemGroup* ToolPalette::get_drop_group(int x, int y) const
{
  return const_cast<ToolPalette*>(this)->get_drop_group(x, y);
}

ToolItem* ToolPalette::get_drag_item(const SelectionData& selection)
{
  return Glib::wrap((GtkToolItem*)(gtk_tool_palette_get_drag_item(gobj(), (selection).gobj())));
}

const ToolItem* ToolPalette::get_drag_item(const SelectionData& selection) const
{
  return const_cast<ToolPalette*>(this)->get_drag_item(selection);
}

void ToolPalette::set_drag_source(ToolPaletteDragTargets targets)
{
  gtk_tool_palette_set_drag_source(gobj(), ((GtkToolPaletteDragTargets)(targets)));
}

void ToolPalette::add_drag_dest(Gtk::Widget& widget, DestDefaults flags, ToolPaletteDragTargets targets, Gdk::DragAction actions)
{
  gtk_tool_palette_add_drag_dest(gobj(), (widget).gobj(), ((GtkDestDefaults)(flags)), ((GtkToolPaletteDragTargets)(targets)), ((GdkDragAction)(actions)));
}

Adjustment* ToolPalette::get_hadjustment()
{
  return Glib::wrap(gtk_tool_palette_get_hadjustment(gobj()));
}

const Adjustment* ToolPalette::get_hadjustment() const
{
  return const_cast<ToolPalette*>(this)->get_hadjustment();
}

Adjustment* ToolPalette::get_vadjustment()
{
  return Glib::wrap(gtk_tool_palette_get_vadjustment(gobj()));
}

const Adjustment* ToolPalette::get_vadjustment() const
{
  return const_cast<ToolPalette*>(this)->get_vadjustment();
}

TargetEntry ToolPalette::get_drag_target_item()
{
  return TargetEntry(*gtk_tool_palette_get_drag_target_item());
}

TargetEntry ToolPalette::get_drag_target_group()
{
  return TargetEntry(*gtk_tool_palette_get_drag_target_group());
}


Glib::PropertyProxy< IconSize > ToolPalette::property_icon_size() 
{
  return Glib::PropertyProxy< IconSize >(this, "icon-size");
}

Glib::PropertyProxy_ReadOnly< IconSize > ToolPalette::property_icon_size() const
{
  return Glib::PropertyProxy_ReadOnly< IconSize >(this, "icon-size");
}

Glib::PropertyProxy< bool > ToolPalette::property_icon_size_set() 
{
  return Glib::PropertyProxy< bool >(this, "icon-size-set");
}

Glib::PropertyProxy_ReadOnly< bool > ToolPalette::property_icon_size_set() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "icon-size-set");
}

Glib::PropertyProxy< ToolbarStyle > ToolPalette::property_toolbar_style() 
{
  return Glib::PropertyProxy< ToolbarStyle >(this, "toolbar-style");
}

Glib::PropertyProxy_ReadOnly< ToolbarStyle > ToolPalette::property_toolbar_style() const
{
  return Glib::PropertyProxy_ReadOnly< ToolbarStyle >(this, "toolbar-style");
}


} // namespace Gtk


