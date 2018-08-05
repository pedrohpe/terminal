// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLRectangleTexture
#include <openfl/_internal/stage3D/opengl/GLRectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_574e9a3948a11606_21_new,"openfl.display3D.textures.RectangleTexture","new",0xcccbdd5b,"openfl.display3D.textures.RectangleTexture.new","openfl/display3D/textures/RectangleTexture.hx",21,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_37_uploadFromBitmapData,"openfl.display3D.textures.RectangleTexture","uploadFromBitmapData",0x711b2e49,"openfl.display3D.textures.RectangleTexture.uploadFromBitmapData","openfl/display3D/textures/RectangleTexture.hx",37,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_44_uploadFromByteArray,"openfl.display3D.textures.RectangleTexture","uploadFromByteArray",0xfd7a0ae1,"openfl.display3D.textures.RectangleTexture.uploadFromByteArray","openfl/display3D/textures/RectangleTexture.hx",44,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_51_uploadFromTypedArray,"openfl.display3D.textures.RectangleTexture","uploadFromTypedArray",0x35aa255f,"openfl.display3D.textures.RectangleTexture.uploadFromTypedArray","openfl/display3D/textures/RectangleTexture.hx",51,0x83565556)
HX_LOCAL_STACK_FRAME(_hx_pos_574e9a3948a11606_58___setSamplerState,"openfl.display3D.textures.RectangleTexture","__setSamplerState",0xea7a95c6,"openfl.display3D.textures.RectangleTexture.__setSamplerState","openfl/display3D/textures/RectangleTexture.hx",58,0x83565556)
namespace openfl{
namespace display3D{
namespace textures{

void RectangleTexture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_21_new)
HXLINE(  23)		super::__construct(context);
HXLINE(  25)		this->_hx___width = width;
HXLINE(  26)		this->_hx___height = height;
HXLINE(  28)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  30)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::create(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ));
            	}

Dynamic RectangleTexture_obj::__CreateEmpty() { return new RectangleTexture_obj; }

void *RectangleTexture_obj::_hx_vtable = 0;

Dynamic RectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RectangleTexture_obj > _hx_result = new RectangleTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool RectangleTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19affbf1) {
		if (inClassId<=(int)0x0b79cce7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b79cce7;
		} else {
			return inClassId==(int)0x19affbf1;
		}
	} else {
		return inClassId==(int)0x1b123bf8;
	}
}

void RectangleTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_37_uploadFromBitmapData)
HXDLIN(  37)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::uploadFromBitmapData(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ),source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromBitmapData,(void))

void RectangleTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_44_uploadFromByteArray)
HXDLIN(  44)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::uploadFromByteArray(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ),data,byteArrayOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RectangleTexture_obj,uploadFromByteArray,(void))

void RectangleTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_51_uploadFromTypedArray)
HXDLIN(  51)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::uploadFromTypedArray(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ),data);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RectangleTexture_obj,uploadFromTypedArray,(void))

void RectangleTexture_obj::_hx___setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_574e9a3948a11606_58___setSamplerState)
HXDLIN(  58)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::setSamplerState(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ),state);
            	}



hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__new( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture) {
	hx::ObjectPtr< RectangleTexture_obj > __this = new RectangleTexture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture);
	return __this;
}

hx::ObjectPtr< RectangleTexture_obj > RectangleTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture) {
	RectangleTexture_obj *__this = (RectangleTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RectangleTexture_obj), true, "openfl.display3D.textures.RectangleTexture"));
	*(void **)__this = RectangleTexture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture);
	return __this;
}

RectangleTexture_obj::RectangleTexture_obj()
{
}

hx::Val RectangleTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RectangleTexture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RectangleTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String RectangleTexture_obj_sMemberFields[] = {
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	::String(null()) };

static void RectangleTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RectangleTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class RectangleTexture_obj::__mClass;

void RectangleTexture_obj::__register()
{
	hx::Object *dummy = new RectangleTexture_obj;
	RectangleTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.RectangleTexture","\xe9","\x93","\xed","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RectangleTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RectangleTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RectangleTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RectangleTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RectangleTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RectangleTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
