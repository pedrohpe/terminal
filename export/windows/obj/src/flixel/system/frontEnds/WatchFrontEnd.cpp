// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_ConsoleUtil
#include <flixel/system/debug/console/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_25766fbc3da200fe_11_new,"flixel.system.frontEnds.WatchFrontEnd","new",0xbd21d019,"flixel.system.frontEnds.WatchFrontEnd.new","flixel/system/frontEnds/WatchFrontEnd.hx",11,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_24_add,"flixel.system.frontEnds.WatchFrontEnd","add",0xbd17f1da,"flixel.system.frontEnds.WatchFrontEnd.add","flixel/system/frontEnds/WatchFrontEnd.hx",24,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_37_remove,"flixel.system.frontEnds.WatchFrontEnd","remove",0x8d8c762b,"flixel.system.frontEnds.WatchFrontEnd.remove","flixel/system/frontEnds/WatchFrontEnd.hx",37,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_52_addQuick,"flixel.system.frontEnds.WatchFrontEnd","addQuick",0x8c660eb3,"flixel.system.frontEnds.WatchFrontEnd.addQuick","flixel/system/frontEnds/WatchFrontEnd.hx",52,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_64_removeQuick,"flixel.system.frontEnds.WatchFrontEnd","removeQuick",0x15fb44c2,"flixel.system.frontEnds.WatchFrontEnd.removeQuick","flixel/system/frontEnds/WatchFrontEnd.hx",64,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_77_addExpression,"flixel.system.frontEnds.WatchFrontEnd","addExpression",0xe5869c12,"flixel.system.frontEnds.WatchFrontEnd.addExpression","flixel/system/frontEnds/WatchFrontEnd.hx",77,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_96_removeExpression,"flixel.system.frontEnds.WatchFrontEnd","removeExpression",0xc4a80fa3,"flixel.system.frontEnds.WatchFrontEnd.removeExpression","flixel/system/frontEnds/WatchFrontEnd.hx",96,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_107_addMouse,"flixel.system.frontEnds.WatchFrontEnd","addMouse",0x3add9deb,"flixel.system.frontEnds.WatchFrontEnd.addMouse","flixel/system/frontEnds/WatchFrontEnd.hx",107,0xd7ade198)
HX_LOCAL_STACK_FRAME(_hx_pos_25766fbc3da200fe_117_removeMouse,"flixel.system.frontEnds.WatchFrontEnd","removeMouse",0xc472d3fa,"flixel.system.frontEnds.WatchFrontEnd.removeMouse","flixel/system/frontEnds/WatchFrontEnd.hx",117,0xd7ade198)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void WatchFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_11_new)
            	}

Dynamic WatchFrontEnd_obj::__CreateEmpty() { return new WatchFrontEnd_obj; }

void *WatchFrontEnd_obj::_hx_vtable = 0;

Dynamic WatchFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WatchFrontEnd_obj > _hx_result = new WatchFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WatchFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x75f56d6b;
}

void WatchFrontEnd_obj::add( ::Dynamic object,::String field,::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_24_add)
HXDLIN(  24)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  24)		_hx_tmp->add(displayName,::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(object,field));
            	}


HX_DEFINE_DYNAMIC_FUNC3(WatchFrontEnd_obj,add,(void))

void WatchFrontEnd_obj::remove( ::Dynamic object,::String field){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_37_remove)
HXDLIN(  37)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  37)		_hx_tmp->remove(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(object,field));
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,remove,(void))

void WatchFrontEnd_obj::addQuick(::String displayName, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_52_addQuick)
HXDLIN(  52)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  52)		_hx_tmp->add(displayName,::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(::Std_obj::string(value)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addQuick,(void))

void WatchFrontEnd_obj::removeQuick(::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_64_removeQuick)
HXDLIN(  64)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  64)		_hx_tmp->remove(displayName,::flixel::_hx_system::debug::watch::WatchEntryData_obj::QUICK(null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeQuick,(void))

void WatchFrontEnd_obj::addExpression(::String expression,::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_77_addExpression)
HXLINE(  79)		 ::hscript::Expr parsedExpr = null();
HXLINE(  81)		parsedExpr = ::flixel::_hx_system::debug::console::ConsoleUtil_obj::parseCommand(expression);
HXLINE(  83)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  83)		::String _hx_tmp1;
HXDLIN(  83)		if (hx::IsNull( displayName )) {
HXLINE(  83)			_hx_tmp1 = expression;
            		}
            		else {
HXLINE(  83)			_hx_tmp1 = displayName;
            		}
HXDLIN(  83)		_hx_tmp->add(_hx_tmp1,::flixel::_hx_system::debug::watch::WatchEntryData_obj::EXPRESSION(expression,parsedExpr));
            	}


HX_DEFINE_DYNAMIC_FUNC2(WatchFrontEnd_obj,addExpression,(void))

void WatchFrontEnd_obj::removeExpression(::String displayName){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_96_removeExpression)
HXDLIN(  96)		::flixel::FlxG_obj::game->debugger->watch->remove(displayName,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(WatchFrontEnd_obj,removeExpression,(void))

void WatchFrontEnd_obj::addMouse(){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_107_addMouse)
HXDLIN( 107)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 107)		_hx_tmp->add(HX_("Mouse Position",44,8e,3a,9d),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_("mouse",25,16,65,0c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,addMouse,(void))

void WatchFrontEnd_obj::removeMouse(){
            	HX_STACKFRAME(&_hx_pos_25766fbc3da200fe_117_removeMouse)
HXDLIN( 117)		 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN( 117)		_hx_tmp->remove(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(hx::ClassOf< ::flixel::FlxG >(),HX_("mouse",25,16,65,0c)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(WatchFrontEnd_obj,removeMouse,(void))


hx::ObjectPtr< WatchFrontEnd_obj > WatchFrontEnd_obj::__new() {
	hx::ObjectPtr< WatchFrontEnd_obj > __this = new WatchFrontEnd_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< WatchFrontEnd_obj > WatchFrontEnd_obj::__alloc(hx::Ctx *_hx_ctx) {
	WatchFrontEnd_obj *__this = (WatchFrontEnd_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WatchFrontEnd_obj), false, "flixel.system.frontEnds.WatchFrontEnd"));
	*(void **)__this = WatchFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

WatchFrontEnd_obj::WatchFrontEnd_obj()
{
}

hx::Val WatchFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addQuick") ) { return hx::Val( addQuick_dyn() ); }
		if (HX_FIELD_EQ(inName,"addMouse") ) { return hx::Val( addMouse_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeQuick") ) { return hx::Val( removeQuick_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeMouse") ) { return hx::Val( removeMouse_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addExpression") ) { return hx::Val( addExpression_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeExpression") ) { return hx::Val( removeExpression_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WatchFrontEnd_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *WatchFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String WatchFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("addQuick","\x0c","\xad","\x4a","\xd7"),
	HX_HCSTRING("removeQuick","\x09","\x64","\x21","\x5c"),
	HX_HCSTRING("addExpression","\x19","\x5b","\xe8","\x98"),
	HX_HCSTRING("removeExpression","\xfc","\x2e","\x48","\xe8"),
	HX_HCSTRING("addMouse","\x44","\x3c","\xc2","\x85"),
	HX_HCSTRING("removeMouse","\x41","\xf3","\x98","\x0a"),
	::String(null()) };

static void WatchFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WatchFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WatchFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class WatchFrontEnd_obj::__mClass;

void WatchFrontEnd_obj::__register()
{
	hx::Object *dummy = new WatchFrontEnd_obj;
	WatchFrontEnd_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.WatchFrontEnd","\xa7","\xcf","\xe7","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WatchFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WatchFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WatchFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WatchFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WatchFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WatchFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
