// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList
#include <flixel/input/gamepad/lists/FlxGamepadMotionValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_15a79f644f467ff8_31_new,"flixel.input.gamepad.lists.FlxGamepadMotionValueList","new",0xb094ae80,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.new","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",31,0x4127dbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_15a79f644f467ff8_23_get_TILT_PITCH,"flixel.input.gamepad.lists.FlxGamepadMotionValueList","get_TILT_PITCH",0x82747807,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.get_TILT_PITCH","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",23,0x4127dbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_15a79f644f467ff8_27_get_TILT_ROLL,"flixel.input.gamepad.lists.FlxGamepadMotionValueList","get_TILT_ROLL",0x9ce6f8f6,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.get_TILT_ROLL","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",27,0x4127dbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_15a79f644f467ff8_35_getAxis,"flixel.input.gamepad.lists.FlxGamepadMotionValueList","getAxis",0x44d63a77,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.getAxis","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",35,0x4127dbf4)
HX_LOCAL_STACK_FRAME(_hx_pos_15a79f644f467ff8_43_get_isSupported,"flixel.input.gamepad.lists.FlxGamepadMotionValueList","get_isSupported",0x6991c29b,"flixel.input.gamepad.lists.FlxGamepadMotionValueList.get_isSupported","flixel/input/gamepad/lists/FlxGamepadMotionValueList.hx",43,0x4127dbf4)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadMotionValueList_obj::__construct( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_15a79f644f467ff8_31_new)
HXDLIN(  31)		this->gamepad = gamepad;
            	}

Dynamic FlxGamepadMotionValueList_obj::__CreateEmpty() { return new FlxGamepadMotionValueList_obj; }

void *FlxGamepadMotionValueList_obj::_hx_vtable = 0;

Dynamic FlxGamepadMotionValueList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxGamepadMotionValueList_obj > _hx_result = new FlxGamepadMotionValueList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadMotionValueList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x465d604c;
}

Float FlxGamepadMotionValueList_obj::get_TILT_PITCH(){
            	HX_STACKFRAME(&_hx_pos_15a79f644f467ff8_23_get_TILT_PITCH)
HXDLIN(  23)		if (!(this->gamepad->mapping->supportsMotion)) {
HXDLIN(  23)			return (int)0;
            		}
            		else {
HXDLIN(  23)			return this->gamepad->getAxis((int)26);
            		}
HXDLIN(  23)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMotionValueList_obj,get_TILT_PITCH,return )

Float FlxGamepadMotionValueList_obj::get_TILT_ROLL(){
            	HX_STACKFRAME(&_hx_pos_15a79f644f467ff8_27_get_TILT_ROLL)
HXDLIN(  27)		if (!(this->gamepad->mapping->supportsMotion)) {
HXDLIN(  27)			return (int)0;
            		}
            		else {
HXDLIN(  27)			return this->gamepad->getAxis((int)27);
            		}
HXDLIN(  27)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMotionValueList_obj,get_TILT_ROLL,return )

Float FlxGamepadMotionValueList_obj::getAxis(int id){
            	HX_STACKFRAME(&_hx_pos_15a79f644f467ff8_35_getAxis)
HXLINE(  36)		if (!(this->gamepad->mapping->supportsMotion)) {
HXLINE(  37)			return (int)0;
            		}
HXLINE(  38)		return this->gamepad->getAxis(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadMotionValueList_obj,getAxis,return )

bool FlxGamepadMotionValueList_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_15a79f644f467ff8_43_get_isSupported)
HXDLIN(  43)		return this->gamepad->mapping->supportsMotion;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadMotionValueList_obj,get_isSupported,return )


hx::ObjectPtr< FlxGamepadMotionValueList_obj > FlxGamepadMotionValueList_obj::__new( ::flixel::input::gamepad::FlxGamepad gamepad) {
	hx::ObjectPtr< FlxGamepadMotionValueList_obj > __this = new FlxGamepadMotionValueList_obj();
	__this->__construct(gamepad);
	return __this;
}

hx::ObjectPtr< FlxGamepadMotionValueList_obj > FlxGamepadMotionValueList_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadMotionValueList_obj *__this = (FlxGamepadMotionValueList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadMotionValueList_obj), true, "flixel.input.gamepad.lists.FlxGamepadMotionValueList"));
	*(void **)__this = FlxGamepadMotionValueList_obj::_hx_vtable;
	__this->__construct(gamepad);
	return __this;
}

FlxGamepadMotionValueList_obj::FlxGamepadMotionValueList_obj()
{
}

void FlxGamepadMotionValueList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadMotionValueList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxGamepadMotionValueList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

hx::Val FlxGamepadMotionValueList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return hx::Val( getAxis_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TILT_ROLL") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_TILT_ROLL() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TILT_PITCH") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_TILT_PITCH() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_isSupported() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_TILT_ROLL") ) { return hx::Val( get_TILT_ROLL_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_TILT_PITCH") ) { return hx::Val( get_TILT_PITCH_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return hx::Val( get_isSupported_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxGamepadMotionValueList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadMotionValueList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("isSupported","\xe4","\x7c","\x8a","\xf3"));
	outFields->push(HX_HCSTRING("TILT_PITCH","\xde","\x59","\xc1","\x1b"));
	outFields->push(HX_HCSTRING("TILT_ROLL","\xff","\x5e","\x73","\x5e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxGamepadMotionValueList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::input::gamepad::FlxGamepad*/ ,(int)offsetof(FlxGamepadMotionValueList_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxGamepadMotionValueList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadMotionValueList_obj_sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("get_TILT_PITCH","\x27","\xe2","\xb6","\x91"),
	HX_HCSTRING("get_TILT_ROLL","\xd6","\x32","\xd7","\x1f"),
	HX_HCSTRING("getAxis","\x57","\xcc","\xfb","\x12"),
	HX_HCSTRING("get_isSupported","\x7b","\x34","\x6c","\xb4"),
	::String(null()) };

static void FlxGamepadMotionValueList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadMotionValueList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadMotionValueList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadMotionValueList_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxGamepadMotionValueList_obj::__mClass;

void FlxGamepadMotionValueList_obj::__register()
{
	hx::Object *dummy = new FlxGamepadMotionValueList_obj;
	FlxGamepadMotionValueList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.lists.FlxGamepadMotionValueList","\x8e","\xae","\x83","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxGamepadMotionValueList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxGamepadMotionValueList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxGamepadMotionValueList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadMotionValueList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadMotionValueList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadMotionValueList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
