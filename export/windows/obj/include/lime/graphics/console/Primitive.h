// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_graphics_console_Primitive
#define INCLUDED_lime_graphics_console_Primitive

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,console,Primitive)
namespace lime{
namespace graphics{
namespace console{


class Primitive_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Primitive_obj OBJ_;

	public:
		Primitive_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("lime.graphics.console.Primitive","\x06","\x53","\x83","\x00"); }
		::String __ToString() const { return HX_HCSTRING("Primitive.","\xc7","\x0d","\xd0","\x3c") + _hx_tag; }

		static ::lime::graphics::console::Primitive Line;
		static inline ::lime::graphics::console::Primitive Line_dyn() { return Line; }
		static ::lime::graphics::console::Primitive LineStrip;
		static inline ::lime::graphics::console::Primitive LineStrip_dyn() { return LineStrip; }
		static ::lime::graphics::console::Primitive Point;
		static inline ::lime::graphics::console::Primitive Point_dyn() { return Point; }
		static ::lime::graphics::console::Primitive Triangle;
		static inline ::lime::graphics::console::Primitive Triangle_dyn() { return Triangle; }
		static ::lime::graphics::console::Primitive TriangleStrip;
		static inline ::lime::graphics::console::Primitive TriangleStrip_dyn() { return TriangleStrip; }
};

} // end namespace lime
} // end namespace graphics
} // end namespace console

#endif /* INCLUDED_lime_graphics_console_Primitive */ 
