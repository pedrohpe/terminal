// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_console_Primitive
#include <lime/graphics/console/Primitive.h>
#endif
namespace lime{
namespace graphics{
namespace console{

::lime::graphics::console::Primitive Primitive_obj::Line;

::lime::graphics::console::Primitive Primitive_obj::LineStrip;

::lime::graphics::console::Primitive Primitive_obj::Point;

::lime::graphics::console::Primitive Primitive_obj::Triangle;

::lime::graphics::console::Primitive Primitive_obj::TriangleStrip;

bool Primitive_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Line",14,44,8c,32)) { outValue = Primitive_obj::Line; return true; }
	if (inName==HX_("LineStrip",24,36,e6,6c)) { outValue = Primitive_obj::LineStrip; return true; }
	if (inName==HX_("Point",30,24,bd,59)) { outValue = Primitive_obj::Point; return true; }
	if (inName==HX_("Triangle",e8,7a,77,67)) { outValue = Primitive_obj::Triangle; return true; }
	if (inName==HX_("TriangleStrip",d0,be,3f,8d)) { outValue = Primitive_obj::TriangleStrip; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Primitive_obj)

int Primitive_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Line",14,44,8c,32)) return 1;
	if (inName==HX_("LineStrip",24,36,e6,6c)) return 2;
	if (inName==HX_("Point",30,24,bd,59)) return 0;
	if (inName==HX_("Triangle",e8,7a,77,67)) return 3;
	if (inName==HX_("TriangleStrip",d0,be,3f,8d)) return 4;
	return super::__FindIndex(inName);
}

int Primitive_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Line",14,44,8c,32)) return 0;
	if (inName==HX_("LineStrip",24,36,e6,6c)) return 0;
	if (inName==HX_("Point",30,24,bd,59)) return 0;
	if (inName==HX_("Triangle",e8,7a,77,67)) return 0;
	if (inName==HX_("TriangleStrip",d0,be,3f,8d)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Primitive_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Line",14,44,8c,32)) return Line;
	if (inName==HX_("LineStrip",24,36,e6,6c)) return LineStrip;
	if (inName==HX_("Point",30,24,bd,59)) return Point;
	if (inName==HX_("Triangle",e8,7a,77,67)) return Triangle;
	if (inName==HX_("TriangleStrip",d0,be,3f,8d)) return TriangleStrip;
	return super::__Field(inName,inCallProp);
}

static ::String Primitive_obj_sStaticFields[] = {
	HX_("Point",30,24,bd,59),
	HX_("Line",14,44,8c,32),
	HX_("LineStrip",24,36,e6,6c),
	HX_("Triangle",e8,7a,77,67),
	HX_("TriangleStrip",d0,be,3f,8d),
	::String(null())
};

static void Primitive_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Primitive_obj::Line,"Line");
	HX_MARK_MEMBER_NAME(Primitive_obj::LineStrip,"LineStrip");
	HX_MARK_MEMBER_NAME(Primitive_obj::Point,"Point");
	HX_MARK_MEMBER_NAME(Primitive_obj::Triangle,"Triangle");
	HX_MARK_MEMBER_NAME(Primitive_obj::TriangleStrip,"TriangleStrip");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Primitive_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Primitive_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Primitive_obj::Line,"Line");
	HX_VISIT_MEMBER_NAME(Primitive_obj::LineStrip,"LineStrip");
	HX_VISIT_MEMBER_NAME(Primitive_obj::Point,"Point");
	HX_VISIT_MEMBER_NAME(Primitive_obj::Triangle,"Triangle");
	HX_VISIT_MEMBER_NAME(Primitive_obj::TriangleStrip,"TriangleStrip");
};
#endif

hx::Class Primitive_obj::__mClass;

Dynamic __Create_Primitive_obj() { return new Primitive_obj; }

void Primitive_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.graphics.console.Primitive","\x06","\x53","\x83","\x00"), hx::TCanCast< Primitive_obj >,Primitive_obj_sStaticFields,0,
	&__Create_Primitive_obj, &__Create,
	&super::__SGetClass(), &CreatePrimitive_obj, Primitive_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Primitive_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Primitive_obj::__GetStatic;
}

void Primitive_obj::__boot()
{
Line = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("Line","\x14","\x44","\x8c","\x32"),1,0);
LineStrip = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("LineStrip","\x24","\x36","\xe6","\x6c"),2,0);
Point = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"),0,0);
Triangle = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("Triangle","\xe8","\x7a","\x77","\x67"),3,0);
TriangleStrip = hx::CreateEnum< Primitive_obj >(HX_HCSTRING("TriangleStrip","\xd0","\xbe","\x3f","\x8d"),4,0);
}


} // end namespace lime
} // end namespace graphics
} // end namespace console
