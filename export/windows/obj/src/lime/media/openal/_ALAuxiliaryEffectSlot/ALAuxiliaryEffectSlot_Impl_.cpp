// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALAuxiliaryEffectSlot_ALAuxiliaryEffectSlot_Impl_
#include <lime/media/openal/_ALAuxiliaryEffectSlot/ALAuxiliaryEffectSlot_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a600d3672ade1e5e_12__new,"lime.media.openal._ALAuxiliaryEffectSlot.ALAuxiliaryEffectSlot_Impl_","_new",0x927f4572,"lime.media.openal._ALAuxiliaryEffectSlot.ALAuxiliaryEffectSlot_Impl_._new","lime/media/openal/ALAuxiliaryEffectSlot.hx",12,0xb5a0da89)
namespace lime{
namespace media{
namespace openal{
namespace _ALAuxiliaryEffectSlot{

void ALAuxiliaryEffectSlot_Impl__obj::__construct() { }

Dynamic ALAuxiliaryEffectSlot_Impl__obj::__CreateEmpty() { return new ALAuxiliaryEffectSlot_Impl__obj; }

void *ALAuxiliaryEffectSlot_Impl__obj::_hx_vtable = 0;

Dynamic ALAuxiliaryEffectSlot_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ALAuxiliaryEffectSlot_Impl__obj > _hx_result = new ALAuxiliaryEffectSlot_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALAuxiliaryEffectSlot_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x54171dbf;
}

 ::Dynamic ALAuxiliaryEffectSlot_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_a600d3672ade1e5e_12__new)
HXDLIN(  12)		 ::Dynamic this1 = handle;
HXDLIN(  12)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALAuxiliaryEffectSlot_Impl__obj,_new,return )


ALAuxiliaryEffectSlot_Impl__obj::ALAuxiliaryEffectSlot_Impl__obj()
{
}

bool ALAuxiliaryEffectSlot_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ALAuxiliaryEffectSlot_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ALAuxiliaryEffectSlot_Impl__obj_sStaticStorageInfo = 0;
#endif

static void ALAuxiliaryEffectSlot_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALAuxiliaryEffectSlot_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ALAuxiliaryEffectSlot_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALAuxiliaryEffectSlot_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ALAuxiliaryEffectSlot_Impl__obj::__mClass;

static ::String ALAuxiliaryEffectSlot_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void ALAuxiliaryEffectSlot_Impl__obj::__register()
{
	hx::Object *dummy = new ALAuxiliaryEffectSlot_Impl__obj;
	ALAuxiliaryEffectSlot_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.openal._ALAuxiliaryEffectSlot.ALAuxiliaryEffectSlot_Impl_","\xfd","\x29","\xa4","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALAuxiliaryEffectSlot_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ALAuxiliaryEffectSlot_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ALAuxiliaryEffectSlot_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALAuxiliaryEffectSlot_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ALAuxiliaryEffectSlot_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALAuxiliaryEffectSlot_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALAuxiliaryEffectSlot_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALAuxiliaryEffectSlot
