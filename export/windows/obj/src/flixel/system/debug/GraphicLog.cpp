// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ae997da324ec5f7_51_new,"flixel.system.debug.GraphicLog","new",0x6b03d456,"flixel.system.debug.GraphicLog.new","openfl/_internal/macros/AssetsMacro.hx",51,0xf7db08ab)
HX_LOCAL_STACK_FRAME(_hx_pos_15b85df1e23b5223_1_boot,"flixel.system.debug.GraphicLog","boot",0x306ef77c,"flixel.system.debug.GraphicLog.boot","?",1,0x0000003f)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicLog_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_5ae997da324ec5f7_51_new)
HXLINE(  83)		super::__construct((int)0,(int)0,transparent,fillRGBA);
HXLINE(  88)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::GraphicLog_obj::resourceName));
HXLINE(  89)		{
HXLINE(  89)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray));
HXDLIN(  89)			this->_hx___fromImage(image);
            		}
            	}

Dynamic GraphicLog_obj::__CreateEmpty() { return new GraphicLog_obj; }

void *GraphicLog_obj::_hx_vtable = 0;

Dynamic GraphicLog_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicLog_obj > _hx_result = new GraphicLog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicLog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01b7aba0) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01b7aba0;
	} else {
		return inClassId==(int)0x28c743a7;
	}
}

::String GraphicLog_obj::resourceName;


hx::ObjectPtr< GraphicLog_obj > GraphicLog_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicLog_obj > __this = new GraphicLog_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicLog_obj > GraphicLog_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicLog_obj *__this = (GraphicLog_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicLog_obj), true, "flixel.system.debug.GraphicLog"));
	*(void **)__this = GraphicLog_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicLog_obj::GraphicLog_obj()
{
}

bool GraphicLog_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicLog_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicLog_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicLog_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicLog_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicLog_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicLog_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicLog_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicLog_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicLog_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicLog_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicLog_obj::__mClass;

static ::String GraphicLog_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicLog_obj::__register()
{
	hx::Object *dummy = new GraphicLog_obj;
	GraphicLog_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.GraphicLog","\x64","\xb1","\x09","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicLog_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicLog_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicLog_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicLog_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicLog_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicLog_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicLog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicLog_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicLog_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_15b85df1e23b5223_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_GraphicLog",db,89,51,9b);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
