// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeMouse
#include <lime/_backend/native/NativeMouse.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5ecfdde1244e600a_19_hide,"lime.ui.Mouse","hide",0x4d58708c,"lime.ui.Mouse.hide","lime/ui/Mouse.hx",19,0x9aa406fa)
HX_LOCAL_STACK_FRAME(_hx_pos_5ecfdde1244e600a_26_show,"lime.ui.Mouse","show",0x549d10c7,"lime.ui.Mouse.show","lime/ui/Mouse.hx",26,0x9aa406fa)
HX_LOCAL_STACK_FRAME(_hx_pos_5ecfdde1244e600a_33_warp,"lime.ui.Mouse","warp",0x573c9e12,"lime.ui.Mouse.warp","lime/ui/Mouse.hx",33,0x9aa406fa)
HX_LOCAL_STACK_FRAME(_hx_pos_5ecfdde1244e600a_47_get_cursor,"lime.ui.Mouse","get_cursor",0xcd882de9,"lime.ui.Mouse.get_cursor","lime/ui/Mouse.hx",47,0x9aa406fa)
HX_LOCAL_STACK_FRAME(_hx_pos_5ecfdde1244e600a_54_set_cursor,"lime.ui.Mouse","set_cursor",0xd105cc5d,"lime.ui.Mouse.set_cursor","lime/ui/Mouse.hx",54,0x9aa406fa)
HX_LOCAL_STACK_FRAME(_hx_pos_5ecfdde1244e600a_61_get_lock,"lime.ui.Mouse","get_lock",0xafe7403e,"lime.ui.Mouse.get_lock","lime/ui/Mouse.hx",61,0x9aa406fa)
HX_LOCAL_STACK_FRAME(_hx_pos_5ecfdde1244e600a_68_set_lock,"lime.ui.Mouse","set_lock",0x5e4499b2,"lime.ui.Mouse.set_lock","lime/ui/Mouse.hx",68,0x9aa406fa)
namespace lime{
namespace ui{

void Mouse_obj::__construct() { }

Dynamic Mouse_obj::__CreateEmpty() { return new Mouse_obj; }

void *Mouse_obj::_hx_vtable = 0;

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mouse_obj > _hx_result = new Mouse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mouse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3425e3bc;
}

void Mouse_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_5ecfdde1244e600a_19_hide)
HXDLIN(  19)		::lime::_backend::native::NativeMouse_obj::hide();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

void Mouse_obj::show(){
            	HX_STACKFRAME(&_hx_pos_5ecfdde1244e600a_26_show)
HXDLIN(  26)		::lime::_backend::native::NativeMouse_obj::show();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

void Mouse_obj::warp(int x,int y, ::lime::ui::Window window){
            	HX_STACKFRAME(&_hx_pos_5ecfdde1244e600a_33_warp)
HXDLIN(  33)		::lime::_backend::native::NativeMouse_obj::warp(x,y,window);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Mouse_obj,warp,(void))

 ::lime::ui::MouseCursor Mouse_obj::get_cursor(){
            	HX_STACKFRAME(&_hx_pos_5ecfdde1244e600a_47_get_cursor)
HXDLIN(  47)		return ::lime::_backend::native::NativeMouse_obj::get_cursor();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_cursor,return )

 ::lime::ui::MouseCursor Mouse_obj::set_cursor( ::lime::ui::MouseCursor value){
            	HX_STACKFRAME(&_hx_pos_5ecfdde1244e600a_54_set_cursor)
HXDLIN(  54)		return ::lime::_backend::native::NativeMouse_obj::set_cursor(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_cursor,return )

bool Mouse_obj::get_lock(){
            	HX_STACKFRAME(&_hx_pos_5ecfdde1244e600a_61_get_lock)
HXDLIN(  61)		return ::lime::_backend::native::NativeMouse_obj::get_lock();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_lock,return )

bool Mouse_obj::set_lock(bool value){
            	HX_STACKFRAME(&_hx_pos_5ecfdde1244e600a_68_set_lock)
HXDLIN(  68)		return ::lime::_backend::native::NativeMouse_obj::set_lock(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_lock,return )


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_lock() ); return true; } }
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"warp") ) { outValue = warp_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_cursor() ); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_lock") ) { outValue = get_lock_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_lock") ) { outValue = set_lock_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true; }
	}
	return false;
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lock") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_lock(ioValue.Cast< bool >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_cursor(ioValue.Cast<  ::lime::ui::MouseCursor >()) ); }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Mouse_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Mouse_obj_sStaticStorageInfo = 0;
#endif

static void Mouse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mouse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String Mouse_obj_sStaticFields[] = {
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("warp","\x48","\x62","\xf2","\x4e"),
	HX_HCSTRING("get_cursor","\x9f","\xfe","\x6f","\x2f"),
	HX_HCSTRING("set_cursor","\x13","\x9d","\xed","\x32"),
	HX_HCSTRING("get_lock","\x74","\x57","\x72","\xc7"),
	HX_HCSTRING("set_lock","\xe8","\xb0","\xcf","\x75"),
	::String(null())
};

void Mouse_obj::__register()
{
	hx::Object *dummy = new Mouse_obj;
	Mouse_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Mouse","\xe4","\xb8","\x87","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = Mouse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Mouse_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mouse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mouse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mouse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace ui
