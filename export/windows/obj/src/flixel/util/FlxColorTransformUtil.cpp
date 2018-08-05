// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxColorTransformUtil
#include <flixel/util/FlxColorTransformUtil.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_9_setMultipliers,"flixel.util.FlxColorTransformUtil","setMultipliers",0x2ef980db,"flixel.util.FlxColorTransformUtil.setMultipliers","flixel/util/FlxColorTransformUtil.hx",9,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_20_setOffsets,"flixel.util.FlxColorTransformUtil","setOffsets",0xbbc06809,"flixel.util.FlxColorTransformUtil.setOffsets","flixel/util/FlxColorTransformUtil.hx",20,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_34_hasRGBMultipliers,"flixel.util.FlxColorTransformUtil","hasRGBMultipliers",0xd2859e14,"flixel.util.FlxColorTransformUtil.hasRGBMultipliers","flixel/util/FlxColorTransformUtil.hx",34,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_42_hasRGBAMultipliers,"flixel.util.FlxColorTransformUtil","hasRGBAMultipliers",0xfe0e906f,"flixel.util.FlxColorTransformUtil.hasRGBAMultipliers","flixel/util/FlxColorTransformUtil.hx",42,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_50_hasRGBOffsets,"flixel.util.FlxColorTransformUtil","hasRGBOffsets",0x81d534c2,"flixel.util.FlxColorTransformUtil.hasRGBOffsets","flixel/util/FlxColorTransformUtil.hx",50,0xf5538e7b)
HX_LOCAL_STACK_FRAME(_hx_pos_01a1e505d1c84d1c_58_hasRGBAOffsets,"flixel.util.FlxColorTransformUtil","hasRGBAOffsets",0xc8891d9d,"flixel.util.FlxColorTransformUtil.hasRGBAOffsets","flixel/util/FlxColorTransformUtil.hx",58,0xf5538e7b)
namespace flixel{
namespace util{

void FlxColorTransformUtil_obj::__construct() { }

Dynamic FlxColorTransformUtil_obj::__CreateEmpty() { return new FlxColorTransformUtil_obj; }

void *FlxColorTransformUtil_obj::_hx_vtable = 0;

Dynamic FlxColorTransformUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxColorTransformUtil_obj > _hx_result = new FlxColorTransformUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxColorTransformUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b03efff;
}

 ::openfl::geom::ColorTransform FlxColorTransformUtil_obj::setMultipliers( ::openfl::geom::ColorTransform transform,Float red,Float green,Float blue,Float alpha){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_9_setMultipliers)
HXLINE(  10)		transform->redMultiplier = red;
HXLINE(  11)		transform->greenMultiplier = green;
HXLINE(  12)		transform->blueMultiplier = blue;
HXLINE(  13)		transform->alphaMultiplier = alpha;
HXLINE(  15)		return transform;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorTransformUtil_obj,setMultipliers,return )

 ::openfl::geom::ColorTransform FlxColorTransformUtil_obj::setOffsets( ::openfl::geom::ColorTransform transform,int red,int green,int blue,int alpha){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_20_setOffsets)
HXLINE(  21)		transform->redOffset = red;
HXLINE(  22)		transform->greenOffset = green;
HXLINE(  23)		transform->blueOffset = blue;
HXLINE(  24)		transform->alphaOffset = alpha;
HXLINE(  26)		return transform;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColorTransformUtil_obj,setOffsets,return )

bool FlxColorTransformUtil_obj::hasRGBMultipliers( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_34_hasRGBMultipliers)
HXDLIN(  34)		bool _hx_tmp;
HXDLIN(  34)		if ((transform->redMultiplier == (int)1)) {
HXDLIN(  34)			_hx_tmp = (transform->greenMultiplier != (int)1);
            		}
            		else {
HXDLIN(  34)			_hx_tmp = true;
            		}
HXDLIN(  34)		if (!(_hx_tmp)) {
HXDLIN(  34)			return (transform->blueMultiplier != (int)1);
            		}
            		else {
HXDLIN(  34)			return true;
            		}
HXDLIN(  34)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBMultipliers,return )

bool FlxColorTransformUtil_obj::hasRGBAMultipliers( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_42_hasRGBAMultipliers)
HXDLIN(  42)		if (!(::flixel::util::FlxColorTransformUtil_obj::hasRGBMultipliers(transform))) {
HXDLIN(  42)			return (transform->alphaMultiplier != (int)1);
            		}
            		else {
HXDLIN(  42)			return true;
            		}
HXDLIN(  42)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBAMultipliers,return )

bool FlxColorTransformUtil_obj::hasRGBOffsets( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_50_hasRGBOffsets)
HXDLIN(  50)		bool _hx_tmp;
HXDLIN(  50)		if ((transform->redOffset == (int)0)) {
HXDLIN(  50)			_hx_tmp = (transform->greenOffset != (int)0);
            		}
            		else {
HXDLIN(  50)			_hx_tmp = true;
            		}
HXDLIN(  50)		if (!(_hx_tmp)) {
HXDLIN(  50)			return (transform->blueOffset != (int)0);
            		}
            		else {
HXDLIN(  50)			return true;
            		}
HXDLIN(  50)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBOffsets,return )

bool FlxColorTransformUtil_obj::hasRGBAOffsets( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_01a1e505d1c84d1c_58_hasRGBAOffsets)
HXDLIN(  58)		if (!(::flixel::util::FlxColorTransformUtil_obj::hasRGBOffsets(transform))) {
HXDLIN(  58)			return (transform->alphaOffset != (int)0);
            		}
            		else {
HXDLIN(  58)			return true;
            		}
HXDLIN(  58)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColorTransformUtil_obj,hasRGBAOffsets,return )


FlxColorTransformUtil_obj::FlxColorTransformUtil_obj()
{
}

bool FlxColorTransformUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"setOffsets") ) { outValue = setOffsets_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasRGBOffsets") ) { outValue = hasRGBOffsets_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setMultipliers") ) { outValue = setMultipliers_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"hasRGBAOffsets") ) { outValue = hasRGBAOffsets_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"hasRGBMultipliers") ) { outValue = hasRGBMultipliers_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"hasRGBAMultipliers") ) { outValue = hasRGBAMultipliers_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxColorTransformUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxColorTransformUtil_obj_sStaticStorageInfo = 0;
#endif

static void FlxColorTransformUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColorTransformUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxColorTransformUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColorTransformUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxColorTransformUtil_obj::__mClass;

static ::String FlxColorTransformUtil_obj_sStaticFields[] = {
	HX_HCSTRING("setMultipliers","\x50","\xe5","\x6f","\x9c"),
	HX_HCSTRING("setOffsets","\xfe","\x2d","\x44","\x2a"),
	HX_HCSTRING("hasRGBMultipliers","\xbf","\xb0","\x7b","\x19"),
	HX_HCSTRING("hasRGBAMultipliers","\x64","\xd3","\x68","\xce"),
	HX_HCSTRING("hasRGBOffsets","\xed","\xd5","\x2b","\xa0"),
	HX_HCSTRING("hasRGBAOffsets","\x12","\x82","\xff","\x35"),
	::String(null())
};

void FlxColorTransformUtil_obj::__register()
{
	hx::Object *dummy = new FlxColorTransformUtil_obj;
	FlxColorTransformUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxColorTransformUtil","\x83","\xa4","\xea","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxColorTransformUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxColorTransformUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxColorTransformUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxColorTransformUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxColorTransformUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxColorTransformUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxColorTransformUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
