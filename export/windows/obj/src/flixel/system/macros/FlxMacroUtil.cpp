// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_macros_FlxMacroUtil
#include <flixel/system/macros/FlxMacroUtil.h>
#endif

namespace flixel{
namespace _hx_system{
namespace macros{

void FlxMacroUtil_obj::__construct() { }

Dynamic FlxMacroUtil_obj::__CreateEmpty() { return new FlxMacroUtil_obj; }

void *FlxMacroUtil_obj::_hx_vtable = 0;

Dynamic FlxMacroUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxMacroUtil_obj > _hx_result = new FlxMacroUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMacroUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2514d26e;
}


FlxMacroUtil_obj::FlxMacroUtil_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlxMacroUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlxMacroUtil_obj_sStaticStorageInfo = 0;
#endif

static void FlxMacroUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxMacroUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxMacroUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxMacroUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxMacroUtil_obj::__mClass;

void FlxMacroUtil_obj::__register()
{
	hx::Object *dummy = new FlxMacroUtil_obj;
	FlxMacroUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.macros.FlxMacroUtil","\x36","\xeb","\x79","\xb7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxMacroUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FlxMacroUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxMacroUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMacroUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMacroUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace macros
