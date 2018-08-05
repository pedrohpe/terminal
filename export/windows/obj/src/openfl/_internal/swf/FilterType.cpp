// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_FilterType
#include <openfl/_internal/swf/FilterType.h>
#endif
namespace openfl{
namespace _internal{
namespace swf{

::openfl::_internal::swf::FilterType FilterType_obj::BlurFilter(Float blurX,Float blurY,int quality)
{
	return hx::CreateEnum< FilterType_obj >(HX_("BlurFilter",df,d1,71,f3),0,3)->_hx_init(0,blurX)->_hx_init(1,blurY)->_hx_init(2,quality);
}

::openfl::_internal::swf::FilterType FilterType_obj::ColorMatrixFilter(::Array< Float > matrix)
{
	return hx::CreateEnum< FilterType_obj >(HX_("ColorMatrixFilter",bc,f6,5b,50),1,1)->_hx_init(0,matrix);
}

::openfl::_internal::swf::FilterType FilterType_obj::DropShadowFilter(Float distance,Float angle,int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout,bool hideObject)
{
	return hx::CreateEnum< FilterType_obj >(HX_("DropShadowFilter",a7,ee,49,f7),2,11)->_hx_init(0,distance)->_hx_init(1,angle)->_hx_init(2,color)->_hx_init(3,alpha)->_hx_init(4,blurX)->_hx_init(5,blurY)->_hx_init(6,strength)->_hx_init(7,quality)->_hx_init(8,inner)->_hx_init(9,knockout)->_hx_init(10,hideObject);
}

::openfl::_internal::swf::FilterType FilterType_obj::GlowFilter(int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout)
{
	return hx::CreateEnum< FilterType_obj >(HX_("GlowFilter",45,ce,a2,2d),3,8)->_hx_init(0,color)->_hx_init(1,alpha)->_hx_init(2,blurX)->_hx_init(3,blurY)->_hx_init(4,strength)->_hx_init(5,quality)->_hx_init(6,inner)->_hx_init(7,knockout);
}

bool FilterType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BlurFilter",df,d1,71,f3)) { outValue = FilterType_obj::BlurFilter_dyn(); return true; }
	if (inName==HX_("ColorMatrixFilter",bc,f6,5b,50)) { outValue = FilterType_obj::ColorMatrixFilter_dyn(); return true; }
	if (inName==HX_("DropShadowFilter",a7,ee,49,f7)) { outValue = FilterType_obj::DropShadowFilter_dyn(); return true; }
	if (inName==HX_("GlowFilter",45,ce,a2,2d)) { outValue = FilterType_obj::GlowFilter_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FilterType_obj)

int FilterType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BlurFilter",df,d1,71,f3)) return 0;
	if (inName==HX_("ColorMatrixFilter",bc,f6,5b,50)) return 1;
	if (inName==HX_("DropShadowFilter",a7,ee,49,f7)) return 2;
	if (inName==HX_("GlowFilter",45,ce,a2,2d)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(FilterType_obj,BlurFilter,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterType_obj,ColorMatrixFilter,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC11(FilterType_obj,DropShadowFilter,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(FilterType_obj,GlowFilter,return)

int FilterType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BlurFilter",df,d1,71,f3)) return 3;
	if (inName==HX_("ColorMatrixFilter",bc,f6,5b,50)) return 1;
	if (inName==HX_("DropShadowFilter",a7,ee,49,f7)) return 11;
	if (inName==HX_("GlowFilter",45,ce,a2,2d)) return 8;
	return super::__FindArgCount(inName);
}

hx::Val FilterType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BlurFilter",df,d1,71,f3)) return BlurFilter_dyn();
	if (inName==HX_("ColorMatrixFilter",bc,f6,5b,50)) return ColorMatrixFilter_dyn();
	if (inName==HX_("DropShadowFilter",a7,ee,49,f7)) return DropShadowFilter_dyn();
	if (inName==HX_("GlowFilter",45,ce,a2,2d)) return GlowFilter_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FilterType_obj_sStaticFields[] = {
	HX_("BlurFilter",df,d1,71,f3),
	HX_("ColorMatrixFilter",bc,f6,5b,50),
	HX_("DropShadowFilter",a7,ee,49,f7),
	HX_("GlowFilter",45,ce,a2,2d),
	::String(null())
};

static void FilterType_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void FilterType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterType_obj::__mClass,"__mClass");
};
#endif

hx::Class FilterType_obj::__mClass;

Dynamic __Create_FilterType_obj() { return new FilterType_obj; }

void FilterType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._internal.swf.FilterType","\x8e","\x86","\x46","\x27"), hx::TCanCast< FilterType_obj >,FilterType_obj_sStaticFields,0,
	&__Create_FilterType_obj, &__Create,
	&super::__SGetClass(), &CreateFilterType_obj, FilterType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FilterType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FilterType_obj::__GetStatic;
}

void FilterType_obj::__boot()
{
}


} // end namespace openfl
} // end namespace _internal
} // end namespace swf
