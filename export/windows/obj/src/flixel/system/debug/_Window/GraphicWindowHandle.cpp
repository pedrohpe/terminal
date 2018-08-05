// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug__Window_GraphicWindowHandle
#include <flixel/system/debug/_Window/GraphicWindowHandle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b1cf9e2110693824_51_new,"flixel.system.debug._Window.GraphicWindowHandle","new",0x4f36000b,"flixel.system.debug._Window.GraphicWindowHandle.new","openfl/_internal/macros/AssetsMacro.hx",51,0xf7db08ab)
HX_LOCAL_STACK_FRAME(_hx_pos_2cfcd99d9199a9d5_1_boot,"flixel.system.debug._Window.GraphicWindowHandle","boot",0xf8230a27,"flixel.system.debug._Window.GraphicWindowHandle.boot","?",1,0x0000003f)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace _Window{

void GraphicWindowHandle_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
 ::Dynamic transparent = __o_transparent.Default(true);
 ::Dynamic fillRGBA = __o_fillRGBA.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b1cf9e2110693824_51_new)
HXLINE(  83)		super::__construct((int)0,(int)0,transparent,fillRGBA);
HXLINE(  88)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::_Window::GraphicWindowHandle_obj::resourceName));
HXLINE(  89)		{
HXLINE(  89)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray));
HXDLIN(  89)			this->_hx___fromImage(image);
            		}
            	}

Dynamic GraphicWindowHandle_obj::__CreateEmpty() { return new GraphicWindowHandle_obj; }

void *GraphicWindowHandle_obj::_hx_vtable = 0;

Dynamic GraphicWindowHandle_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicWindowHandle_obj > _hx_result = new GraphicWindowHandle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicWindowHandle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28c743a7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x28c743a7;
	} else {
		return inClassId==(int)0x6915d971;
	}
}

::String GraphicWindowHandle_obj::resourceName;


hx::ObjectPtr< GraphicWindowHandle_obj > GraphicWindowHandle_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	hx::ObjectPtr< GraphicWindowHandle_obj > __this = new GraphicWindowHandle_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

hx::ObjectPtr< GraphicWindowHandle_obj > GraphicWindowHandle_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicWindowHandle_obj *__this = (GraphicWindowHandle_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicWindowHandle_obj), true, "flixel.system.debug._Window.GraphicWindowHandle"));
	*(void **)__this = GraphicWindowHandle_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicWindowHandle_obj::GraphicWindowHandle_obj()
{
}

bool GraphicWindowHandle_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicWindowHandle_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GraphicWindowHandle_obj_sMemberStorageInfo = 0;
static hx::StaticInfo GraphicWindowHandle_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicWindowHandle_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GraphicWindowHandle_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicWindowHandle_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicWindowHandle_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicWindowHandle_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicWindowHandle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicWindowHandle_obj::resourceName,"resourceName");
};

#endif

hx::Class GraphicWindowHandle_obj::__mClass;

static ::String GraphicWindowHandle_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void GraphicWindowHandle_obj::__register()
{
	hx::Object *dummy = new GraphicWindowHandle_obj;
	GraphicWindowHandle_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug._Window.GraphicWindowHandle","\x99","\x9e","\x84","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicWindowHandle_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicWindowHandle_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicWindowHandle_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GraphicWindowHandle_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicWindowHandle_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicWindowHandle_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicWindowHandle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicWindowHandle_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicWindowHandle_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2cfcd99d9199a9d5_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug__Window_GraphicWindowHandle",b1,52,a1,65);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _Window
