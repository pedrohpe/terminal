// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLiteLibrary
#include <openfl/_internal/swf/SWFLiteLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_BitmapSymbol
#include <openfl/_internal/symbols/BitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SpriteSymbol
#include <openfl/_internal/symbols/SpriteSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
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
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ea65a35277eaab5_37_new,"openfl._internal.swf.SWFLite","new",0x080ebb06,"openfl._internal.swf.SWFLite.new","openfl/_internal/swf/SWFLite.hx",37,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_46_createButton,"openfl._internal.swf.SWFLite","createButton",0xef1732a8,"openfl._internal.swf.SWFLite.createButton","openfl/_internal/swf/SWFLite.hx",46,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_51_createMovieClip,"openfl._internal.swf.SWFLite","createMovieClip",0x9d5307aa,"openfl._internal.swf.SWFLite.createMovieClip","openfl/_internal/swf/SWFLite.hx",51,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_80_getBitmapData,"openfl._internal.swf.SWFLite","getBitmapData",0x22b00815,"openfl._internal.swf.SWFLite.getBitmapData","openfl/_internal/swf/SWFLite.hx",80,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_102_hasSymbol,"openfl._internal.swf.SWFLite","hasSymbol",0x5477cd78,"openfl._internal.swf.SWFLite.hasSymbol","openfl/_internal/swf/SWFLite.hx",102,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_175_serialize,"openfl._internal.swf.SWFLite","serialize",0x19a3c906,"openfl._internal.swf.SWFLite.serialize","openfl/_internal/swf/SWFLite.hx",175,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_119_resolveClass,"openfl._internal.swf.SWFLite","resolveClass",0x73bf4e46,"openfl._internal.swf.SWFLite.resolveClass","openfl/_internal/swf/SWFLite.hx",119,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_145_resolveEnum,"openfl._internal.swf.SWFLite","resolveEnum",0xa29090b3,"openfl._internal.swf.SWFLite.resolveEnum","openfl/_internal/swf/SWFLite.hx",145,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_184_unserialize,"openfl._internal.swf.SWFLite","unserialize",0x3ed7e50d,"openfl._internal.swf.SWFLite.unserialize","openfl/_internal/swf/SWFLite.hx",184,0x035d4d2d)
HX_LOCAL_STACK_FRAME(_hx_pos_1ea65a35277eaab5_27_boot,"openfl._internal.swf.SWFLite","boot",0xfcedeacc,"openfl._internal.swf.SWFLite.boot","openfl/_internal/swf/SWFLite.hx",27,0x035d4d2d)
namespace openfl{
namespace _internal{
namespace swf{

void SWFLite_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_1ea65a35277eaab5_37_new)
HXDLIN(  37)		this->symbols =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}

Dynamic SWFLite_obj::__CreateEmpty() { return new SWFLite_obj; }

void *SWFLite_obj::_hx_vtable = 0;

Dynamic SWFLite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SWFLite_obj > _hx_result = new SWFLite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SWFLite_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52ec853a;
}

 ::openfl::display::SimpleButton SWFLite_obj::createButton(::String className){
            	HX_STACKFRAME(&_hx_pos_1ea65a35277eaab5_46_createButton)
HXDLIN(  46)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,createButton,return )

 ::openfl::display::MovieClip SWFLite_obj::createMovieClip(::String __o_className){
::String className = __o_className.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_1ea65a35277eaab5_51_createMovieClip)
HXLINE(  53)		if ((className == HX_("",00,00,00,00))) {
HXLINE(  55)			return Dynamic( this->root->_hx___createObject(hx::ObjectPtr<OBJ_>(this))).StaticCast<  ::openfl::display::MovieClip >();
            		}
            		else {
HXLINE(  59)			 ::Dynamic symbol = this->symbols->iterator();
HXDLIN(  59)			while(( (bool)(symbol->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  59)				 ::openfl::_internal::symbols::SWFSymbol symbol1 = ( ( ::openfl::_internal::symbols::SWFSymbol)(symbol->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  61)				if ((symbol1->className == className)) {
HXLINE(  63)					if (::Std_obj::is(symbol1,hx::ClassOf< ::openfl::_internal::symbols::SpriteSymbol >())) {
HXLINE(  65)						return Dynamic( hx::TCast<  ::openfl::_internal::symbols::SpriteSymbol >::cast(symbol1)->_hx___createObject(hx::ObjectPtr<OBJ_>(this))).StaticCast<  ::openfl::display::MovieClip >();
            					}
            				}
            			}
            		}
HXLINE(  75)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,createMovieClip,return )

 ::openfl::display::BitmapData SWFLite_obj::getBitmapData(::String className){
            	HX_STACKFRAME(&_hx_pos_1ea65a35277eaab5_80_getBitmapData)
HXLINE(  82)		{
HXLINE(  82)			 ::Dynamic symbol = this->symbols->iterator();
HXDLIN(  82)			while(( (bool)(symbol->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  82)				 ::openfl::_internal::symbols::SWFSymbol symbol1 = ( ( ::openfl::_internal::symbols::SWFSymbol)(symbol->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  84)				if ((symbol1->className == className)) {
HXLINE(  86)					if (::Std_obj::is(symbol1,hx::ClassOf< ::openfl::_internal::symbols::BitmapSymbol >())) {
HXLINE(  88)						 ::openfl::_internal::symbols::BitmapSymbol bitmap = ( ( ::openfl::_internal::symbols::BitmapSymbol)(symbol1) );
HXLINE(  89)						return ::openfl::utils::Assets_obj::getBitmapData(bitmap->path,null());
            					}
            				}
            			}
            		}
HXLINE(  97)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,getBitmapData,return )

bool SWFLite_obj::hasSymbol(::String className){
            	HX_STACKFRAME(&_hx_pos_1ea65a35277eaab5_102_hasSymbol)
HXLINE( 104)		{
HXLINE( 104)			 ::Dynamic symbol = this->symbols->iterator();
HXDLIN( 104)			while(( (bool)(symbol->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 104)				 ::openfl::_internal::symbols::SWFSymbol symbol1 = ( ( ::openfl::_internal::symbols::SWFSymbol)(symbol->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 106)				if ((symbol1->className == className)) {
HXLINE( 108)					return true;
            				}
            			}
            		}
HXLINE( 114)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,hasSymbol,return )

::String SWFLite_obj::serialize(){
            	HX_GC_STACKFRAME(&_hx_pos_1ea65a35277eaab5_175_serialize)
HXLINE( 177)		 ::haxe::Serializer serializer =  ::haxe::Serializer_obj::__alloc( HX_CTX );
HXLINE( 178)		serializer->serialize(hx::ObjectPtr<OBJ_>(this));
HXLINE( 179)		return serializer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SWFLite_obj,serialize,return )

 ::haxe::ds::StringMap SWFLite_obj::instances;

hx::Class SWFLite_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_1ea65a35277eaab5_119_resolveClass)
HXLINE( 121)		hx::Class value = ::Type_obj::resolveClass(name);
HXLINE( 135)		if (hx::IsNull( value )) {
HXLINE( 135)			value = ::Type_obj::resolveClass(::StringTools_obj::replace(name,HX_("openfl._legacy",0a,81,e4,28),HX_("openfl",90,63,94,21)));
            		}
HXLINE( 136)		if (hx::IsNull( value )) {
HXLINE( 136)			value = ::Type_obj::resolveClass(::StringTools_obj::replace(name,HX_("openfl._v2",3d,b9,65,2f),HX_("openfl",90,63,94,21)));
            		}
HXLINE( 140)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,resolveClass,return )

hx::Class SWFLite_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_1ea65a35277eaab5_145_resolveEnum)
HXLINE( 147)		hx::Class value = ::Type_obj::resolveEnum(name);
HXLINE( 165)		if (hx::IsNull( value )) {
HXLINE( 165)			value = ::Type_obj::resolveEnum(::StringTools_obj::replace(name,HX_("openfl._legacy",0a,81,e4,28),HX_("openfl",90,63,94,21)));
            		}
HXLINE( 166)		if (hx::IsNull( value )) {
HXLINE( 166)			value = ::Type_obj::resolveEnum(::StringTools_obj::replace(name,HX_("openfl._v2",3d,b9,65,2f),HX_("openfl",90,63,94,21)));
            		}
HXLINE( 170)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,resolveEnum,return )

 ::openfl::_internal::swf::SWFLite SWFLite_obj::unserialize(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_1ea65a35277eaab5_184_unserialize)
HXLINE( 186)		if (hx::IsNull( data )) {
HXLINE( 188)			return null();
            		}
HXLINE( 192)		 ::haxe::Unserializer unserializer =  ::haxe::Unserializer_obj::__alloc( HX_CTX ,data);
HXLINE( 193)		unserializer->setResolver( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("resolveClass",ac,bd,dd,80),::openfl::_internal::swf::SWFLite_obj::resolveClass_dyn())
            			->setFixed(1,HX_("resolveEnum",0d,90,51,de),::openfl::_internal::swf::SWFLite_obj::resolveEnum_dyn())));
HXLINE( 195)		return ( ( ::openfl::_internal::swf::SWFLite)(unserializer->unserialize()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SWFLite_obj,unserialize,return )


hx::ObjectPtr< SWFLite_obj > SWFLite_obj::__new() {
	hx::ObjectPtr< SWFLite_obj > __this = new SWFLite_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SWFLite_obj > SWFLite_obj::__alloc(hx::Ctx *_hx_ctx) {
	SWFLite_obj *__this = (SWFLite_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SWFLite_obj), true, "openfl._internal.swf.SWFLite"));
	*(void **)__this = SWFLite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SWFLite_obj::SWFLite_obj()
{
}

void SWFLite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SWFLite);
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(library,"library");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(symbols,"symbols");
	HX_MARK_END_CLASS();
}

void SWFLite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(library,"library");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(symbols,"symbols");
}

hx::Val SWFLite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return hx::Val( root ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return hx::Val( library ); }
		if (HX_FIELD_EQ(inName,"symbols") ) { return hx::Val( symbols ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return hx::Val( frameRate ); }
		if (HX_FIELD_EQ(inName,"hasSymbol") ) { return hx::Val( hasSymbol_dyn() ); }
		if (HX_FIELD_EQ(inName,"serialize") ) { return hx::Val( serialize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createButton") ) { return hx::Val( createButton_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return hx::Val( getBitmapData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createMovieClip") ) { return hx::Val( createMovieClip_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SWFLite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { outValue = ( instances ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unserialize") ) { outValue = unserialize_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
	}
	return false;
}

hx::Val SWFLite_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::openfl::_internal::symbols::SpriteSymbol >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast<  ::openfl::_internal::swf::SWFLiteLibrary >(); return inValue; }
		if (HX_FIELD_EQ(inName,"symbols") ) { symbols=inValue.Cast<  ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SWFLite_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void SWFLite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("library","\xfb","\x26","\x70","\x3f"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("symbols","\x1b","\xbe","\x1b","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SWFLite_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SWFLite_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsObject /*::openfl::_internal::swf::SWFLiteLibrary*/ ,(int)offsetof(SWFLite_obj,library),HX_HCSTRING("library","\xfb","\x26","\x70","\x3f")},
	{hx::fsObject /*::openfl::_internal::symbols::SpriteSymbol*/ ,(int)offsetof(SWFLite_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(SWFLite_obj,symbols),HX_HCSTRING("symbols","\x1b","\xbe","\x1b","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo SWFLite_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &SWFLite_obj::instances,HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String SWFLite_obj_sMemberFields[] = {
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("library","\xfb","\x26","\x70","\x3f"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("symbols","\x1b","\xbe","\x1b","\x13"),
	HX_HCSTRING("createButton","\x0e","\xa2","\x35","\xfc"),
	HX_HCSTRING("createMovieClip","\x04","\xbc","\x0f","\xb9"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("hasSymbol","\x52","\x62","\xc6","\x2f"),
	HX_HCSTRING("serialize","\xe0","\x5d","\xf2","\xf4"),
	::String(null()) };

static void SWFLite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SWFLite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SWFLite_obj::instances,"instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SWFLite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SWFLite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SWFLite_obj::instances,"instances");
};

#endif

hx::Class SWFLite_obj::__mClass;

static ::String SWFLite_obj_sStaticFields[] = {
	HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("unserialize","\x67","\xe4","\x98","\x7a"),
	::String(null())
};

void SWFLite_obj::__register()
{
	hx::Object *dummy = new SWFLite_obj;
	SWFLite_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.swf.SWFLite","\x14","\x80","\x8f","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SWFLite_obj::__GetStatic;
	__mClass->mSetStaticField = &SWFLite_obj::__SetStatic;
	__mClass->mMarkFunc = SWFLite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SWFLite_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SWFLite_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SWFLite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SWFLite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SWFLite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SWFLite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SWFLite_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_1ea65a35277eaab5_27_boot)
HXDLIN(  27)		instances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
} // end namespace _internal
} // end namespace swf
