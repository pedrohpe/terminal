// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLRectangleTexture
#include <openfl/_internal/stage3D/opengl/GLRectangleTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLTextureBase
#include <openfl/_internal/stage3D/opengl/GLTextureBase.h>
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
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_990ee74877b68687_27_create,"openfl._internal.stage3D.opengl.GLRectangleTexture","create",0xfdcd52e9,"openfl._internal.stage3D.opengl.GLRectangleTexture.create","openfl/_internal/stage3D/opengl/GLRectangleTexture.hx",27,0x240ca29f)
HX_LOCAL_STACK_FRAME(_hx_pos_990ee74877b68687_37_uploadFromBitmapData,"openfl._internal.stage3D.opengl.GLRectangleTexture","uploadFromBitmapData",0x287b9651,"openfl._internal.stage3D.opengl.GLRectangleTexture.uploadFromBitmapData","openfl/_internal/stage3D/opengl/GLRectangleTexture.hx",37,0x240ca29f)
HX_LOCAL_STACK_FRAME(_hx_pos_990ee74877b68687_61_uploadFromByteArray,"openfl._internal.stage3D.opengl.GLRectangleTexture","uploadFromByteArray",0xb03c7bd9,"openfl._internal.stage3D.opengl.GLRectangleTexture.uploadFromByteArray","openfl/_internal/stage3D/opengl/GLRectangleTexture.hx",61,0x240ca29f)
HX_LOCAL_STACK_FRAME(_hx_pos_990ee74877b68687_66_uploadFromTypedArray,"openfl._internal.stage3D.opengl.GLRectangleTexture","uploadFromTypedArray",0xed0a8d67,"openfl._internal.stage3D.opengl.GLRectangleTexture.uploadFromTypedArray","openfl/_internal/stage3D/opengl/GLRectangleTexture.hx",66,0x240ca29f)
HX_LOCAL_STACK_FRAME(_hx_pos_990ee74877b68687_91_setSamplerState,"openfl._internal.stage3D.opengl.GLRectangleTexture","setSamplerState",0x1a13651e,"openfl._internal.stage3D.opengl.GLRectangleTexture.setSamplerState","openfl/_internal/stage3D/opengl/GLRectangleTexture.hx",91,0x240ca29f)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{

void GLRectangleTexture_obj::__construct() { }

Dynamic GLRectangleTexture_obj::__CreateEmpty() { return new GLRectangleTexture_obj; }

void *GLRectangleTexture_obj::_hx_vtable = 0;

Dynamic GLRectangleTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLRectangleTexture_obj > _hx_result = new GLRectangleTexture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLRectangleTexture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x192fde67;
}

void GLRectangleTexture_obj::create( ::openfl::display3D::textures::RectangleTexture rectangleTexture, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_990ee74877b68687_27_create)
HXLINE(  29)		 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  31)		rectangleTexture->_hx___textureTarget = gl->TEXTURE_2D;
HXLINE(  32)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::uploadFromTypedArray(rectangleTexture,renderer,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLRectangleTexture_obj,create,(void))

void GLRectangleTexture_obj::uploadFromBitmapData( ::openfl::display3D::textures::RectangleTexture rectangleTexture, ::openfl::display::OpenGLRenderer renderer, ::openfl::display::BitmapData source){
            	HX_STACKFRAME(&_hx_pos_990ee74877b68687_37_uploadFromBitmapData)
HXLINE(  39)		if (hx::IsNull( source )) {
HXLINE(  39)			return;
            		}
HXLINE(  41)		 ::lime::graphics::Image image = rectangleTexture->_hx___getImage(source);
HXLINE(  43)		if (hx::IsNull( image )) {
HXLINE(  43)			return;
            		}
HXLINE(  45)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::uploadFromTypedArray(rectangleTexture,renderer,image->get_data());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLRectangleTexture_obj,uploadFromBitmapData,(void))

void GLRectangleTexture_obj::uploadFromByteArray( ::openfl::display3D::textures::RectangleTexture rectangleTexture, ::openfl::display::OpenGLRenderer renderer, ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_990ee74877b68687_61_uploadFromByteArray)
HXDLIN(  61)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN(  61)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  61)		if (hx::IsNotNull( buffer )) {
HXDLIN(  61)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN(  61)			int in_byteOffset = byteArrayOffset;
HXDLIN(  61)			if ((in_byteOffset < (int)0)) {
HXDLIN(  61)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  61)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN(  61)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  61)			int bufferByteLength = buffer->length;
HXDLIN(  61)			int elementSize = _this->bytesPerElement;
HXDLIN(  61)			int newByteLength = bufferByteLength;
HXDLIN(  61)			{
HXDLIN(  61)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  61)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN(  61)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  61)				if ((newByteLength < (int)0)) {
HXDLIN(  61)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  61)			_this->buffer = buffer;
HXDLIN(  61)			_this->byteOffset = in_byteOffset;
HXDLIN(  61)			_this->byteLength = newByteLength;
HXDLIN(  61)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  61)			this1 = _this;
            		}
            		else {
HXDLIN(  61)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN(  61)		::openfl::_internal::stage3D::opengl::GLRectangleTexture_obj::uploadFromTypedArray(rectangleTexture,renderer,this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(GLRectangleTexture_obj,uploadFromByteArray,(void))

void GLRectangleTexture_obj::uploadFromTypedArray( ::openfl::display3D::textures::RectangleTexture rectangleTexture, ::openfl::display::OpenGLRenderer renderer, ::lime::utils::ArrayBufferView data){
            	HX_STACKFRAME(&_hx_pos_990ee74877b68687_66_uploadFromTypedArray)
HXLINE(  74)		 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  76)		gl->bindTexture(rectangleTexture->_hx___textureTarget,rectangleTexture->_hx___textureID);
HXLINE(  77)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  79)		int rectangleTexture1 = rectangleTexture->_hx___textureTarget;
HXDLIN(  79)		int rectangleTexture2 = rectangleTexture->_hx___internalFormat;
HXDLIN(  79)		int rectangleTexture3 = rectangleTexture->_hx___width;
HXDLIN(  79)		int rectangleTexture4 = rectangleTexture->_hx___height;
HXDLIN(  79)		int rectangleTexture5 = rectangleTexture->_hx___format;
HXDLIN(  79)		int gl1 = gl->UNSIGNED_BYTE;
HXDLIN(  79)		gl->texImage2D(rectangleTexture1,(int)0,rectangleTexture2,rectangleTexture3,rectangleTexture4,(int)0,rectangleTexture5,gl1,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(data));
HXLINE(  80)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  82)		gl->bindTexture(rectangleTexture->_hx___textureTarget,null());
HXLINE(  83)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLRectangleTexture_obj,uploadFromTypedArray,(void))

void GLRectangleTexture_obj::setSamplerState( ::openfl::display3D::textures::RectangleTexture rectangleTexture, ::openfl::display::OpenGLRenderer renderer, ::openfl::_internal::stage3D::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_990ee74877b68687_91_setSamplerState)
HXLINE(  93)		if (!(state->equals(rectangleTexture->_hx___samplerState))) {
HXLINE(  95)			 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  97)			if ((state->maxAniso != ((Float)0.0))) {
HXLINE(  99)				gl->texParameterf(gl->TEXTURE_2D,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,state->maxAniso);
HXLINE( 100)				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            			}
            		}
HXLINE( 106)		::openfl::_internal::stage3D::opengl::GLTextureBase_obj::setSamplerState(rectangleTexture,renderer,state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(GLRectangleTexture_obj,setSamplerState,(void))


GLRectangleTexture_obj::GLRectangleTexture_obj()
{
}

bool GLRectangleTexture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setSamplerState") ) { outValue = setSamplerState_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { outValue = uploadFromByteArray_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { outValue = uploadFromBitmapData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { outValue = uploadFromTypedArray_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLRectangleTexture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLRectangleTexture_obj_sStaticStorageInfo = 0;
#endif

static void GLRectangleTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRectangleTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLRectangleTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRectangleTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRectangleTexture_obj::__mClass;

static ::String GLRectangleTexture_obj_sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("setSamplerState","\xab","\xb6","\x75","\xda"),
	::String(null())
};

void GLRectangleTexture_obj::__register()
{
	hx::Object *dummy = new GLRectangleTexture_obj;
	GLRectangleTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.opengl.GLRectangleTexture","\xe1","\xb8","\xba","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLRectangleTexture_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLRectangleTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLRectangleTexture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLRectangleTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLRectangleTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLRectangleTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLRectangleTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl
