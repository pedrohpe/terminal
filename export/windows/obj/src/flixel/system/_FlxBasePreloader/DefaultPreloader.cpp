// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system__FlxBasePreloader_DefaultPreloader
#include <flixel/system/_FlxBasePreloader/DefaultPreloader.h>
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
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b5ad01cadf9f6950_419_new,"flixel.system._FlxBasePreloader.DefaultPreloader","new",0xd190e230,"flixel.system._FlxBasePreloader.DefaultPreloader.new","flixel/system/FlxBasePreloader.hx",419,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b5ad01cadf9f6950_425_onAddedToStage,"flixel.system._FlxBasePreloader.DefaultPreloader","onAddedToStage",0x45f82252,"flixel.system._FlxBasePreloader.DefaultPreloader.onAddedToStage","flixel/system/FlxBasePreloader.hx",425,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b5ad01cadf9f6950_436_onComplete,"flixel.system._FlxBasePreloader.DefaultPreloader","onComplete",0xb0729d28,"flixel.system._FlxBasePreloader.DefaultPreloader.onComplete","flixel/system/FlxBasePreloader.hx",436,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b5ad01cadf9f6950_447_onProgress,"flixel.system._FlxBasePreloader.DefaultPreloader","onProgress",0xb6d5941c,"flixel.system._FlxBasePreloader.DefaultPreloader.onProgress","flixel/system/FlxBasePreloader.hx",447,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b5ad01cadf9f6950_450_onInit,"flixel.system._FlxBasePreloader.DefaultPreloader","onInit",0x814533ff,"flixel.system._FlxBasePreloader.DefaultPreloader.onInit","flixel/system/FlxBasePreloader.hx",450,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b5ad01cadf9f6950_454_onLoaded,"flixel.system._FlxBasePreloader.DefaultPreloader","onLoaded",0x051c9ab4,"flixel.system._FlxBasePreloader.DefaultPreloader.onLoaded","flixel/system/FlxBasePreloader.hx",454,0x863b5dde)
HX_LOCAL_STACK_FRAME(_hx_pos_b5ad01cadf9f6950_458_onUpdate,"flixel.system._FlxBasePreloader.DefaultPreloader","onUpdate",0x33b2d8b8,"flixel.system._FlxBasePreloader.DefaultPreloader.onUpdate","flixel/system/FlxBasePreloader.hx",458,0x863b5dde)
namespace flixel{
namespace _hx_system{
namespace _FlxBasePreloader{

void DefaultPreloader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b5ad01cadf9f6950_419_new)
HXLINE( 420)		super::__construct();
HXLINE( 421)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null(),null(),null());
            	}

Dynamic DefaultPreloader_obj::__CreateEmpty() { return new DefaultPreloader_obj; }

void *DefaultPreloader_obj::_hx_vtable = 0;

Dynamic DefaultPreloader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DefaultPreloader_obj > _hx_result = new DefaultPreloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultPreloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x6eebd534;
		}
	}
}

void DefaultPreloader_obj::onAddedToStage( ::Dynamic _){
            	HX_STACKFRAME(&_hx_pos_b5ad01cadf9f6950_425_onAddedToStage)
HXLINE( 426)		this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->onAddedToStage_dyn(),null());
HXLINE( 428)		this->onInit();
HXLINE( 429)		int _hx_tmp = this->get_loaderInfo()->bytesLoaded;
HXDLIN( 429)		this->onUpdate(_hx_tmp,this->get_loaderInfo()->bytesTotal);
HXLINE( 431)		this->addEventListener(HX_("progress",ad,f7,2a,86),this->onProgress_dyn(),null(),null(),null());
HXLINE( 432)		this->addEventListener(HX_("complete",b9,00,c8,7f),this->onComplete_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,onAddedToStage,(void))

void DefaultPreloader_obj::onComplete( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_b5ad01cadf9f6950_436_onComplete)
HXLINE( 437)		event->preventDefault();
HXLINE( 439)		this->removeEventListener(HX_("progress",ad,f7,2a,86),this->onProgress_dyn(),null());
HXLINE( 440)		this->removeEventListener(HX_("complete",b9,00,c8,7f),this->onComplete_dyn(),null());
HXLINE( 442)		this->onLoaded();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,onComplete,(void))

void DefaultPreloader_obj::onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_b5ad01cadf9f6950_447_onProgress)
HXDLIN( 447)		int _hx_tmp = ::Std_obj::_hx_int(event->bytesLoaded);
HXDLIN( 447)		this->onUpdate(_hx_tmp,::Std_obj::_hx_int(event->bytesTotal));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,onProgress,(void))

void DefaultPreloader_obj::onInit(){
            	HX_STACKFRAME(&_hx_pos_b5ad01cadf9f6950_450_onInit)
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onInit,(void))

void DefaultPreloader_obj::onLoaded(){
            	HX_GC_STACKFRAME(&_hx_pos_b5ad01cadf9f6950_454_onLoaded)
HXDLIN( 454)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onLoaded,(void))

void DefaultPreloader_obj::onUpdate(int bytesLoaded,int bytesTotal){
            	HX_STACKFRAME(&_hx_pos_b5ad01cadf9f6950_458_onUpdate)
HXLINE( 459)		Float percentLoaded = ((Float)0.0);
HXLINE( 460)		if ((bytesTotal > (int)0)) {
HXLINE( 462)			percentLoaded = ((Float)bytesLoaded / (Float)bytesTotal);
HXLINE( 463)			if ((percentLoaded > (int)1)) {
HXLINE( 464)				percentLoaded = (int)1;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DefaultPreloader_obj,onUpdate,(void))


hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__new() {
	hx::ObjectPtr< DefaultPreloader_obj > __this = new DefaultPreloader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__alloc(hx::Ctx *_hx_ctx) {
	DefaultPreloader_obj *__this = (DefaultPreloader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DefaultPreloader_obj), true, "flixel.system._FlxBasePreloader.DefaultPreloader"));
	*(void **)__this = DefaultPreloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultPreloader_obj::DefaultPreloader_obj()
{
}

hx::Val DefaultPreloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return hx::Val( onInit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return hx::Val( onLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return hx::Val( onUpdate_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return hx::Val( onProgress_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return hx::Val( onAddedToStage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DefaultPreloader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DefaultPreloader_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultPreloader_obj_sMemberFields[] = {
	HX_HCSTRING("onAddedToStage","\x22","\x82","\x44","\x36"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("onInit","\xcf","\x43","\x45","\xe8"),
	HX_HCSTRING("onLoaded","\x84","\x3e","\x1c","\x38"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	::String(null()) };

static void DefaultPreloader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultPreloader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultPreloader_obj::__mClass;

void DefaultPreloader_obj::__register()
{
	hx::Object *dummy = new DefaultPreloader_obj;
	DefaultPreloader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system._FlxBasePreloader.DefaultPreloader","\x3e","\x4a","\x10","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DefaultPreloader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DefaultPreloader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultPreloader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultPreloader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultPreloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultPreloader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace _FlxBasePreloader
