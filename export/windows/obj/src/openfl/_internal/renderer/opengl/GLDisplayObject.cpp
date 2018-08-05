// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLDisplayObject
#include <openfl/_internal/renderer/opengl/GLDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShape
#include <openfl/_internal/renderer/opengl/GLShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2687fe8a484538ac_22_render,"openfl._internal.renderer.opengl.GLDisplayObject","render",0xfc18482c,"openfl._internal.renderer.opengl.GLDisplayObject.render","openfl/_internal/renderer/opengl/GLDisplayObject.hx",22,0xe7a796c8)
HX_LOCAL_STACK_FRAME(_hx_pos_2687fe8a484538ac_58_renderMask,"openfl._internal.renderer.opengl.GLDisplayObject","renderMask",0x4aad3b38,"openfl._internal.renderer.opengl.GLDisplayObject.renderMask","openfl/_internal/renderer/opengl/GLDisplayObject.hx",58,0xe7a796c8)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLDisplayObject_obj::__construct() { }

Dynamic GLDisplayObject_obj::__CreateEmpty() { return new GLDisplayObject_obj; }

void *GLDisplayObject_obj::_hx_vtable = 0;

Dynamic GLDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLDisplayObject_obj > _hx_result = new GLDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x537e993e;
}

void GLDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_2687fe8a484538ac_22_render)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if (hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  24)			_hx_tmp = hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  24)			_hx_tmp = false;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  24)			return;
            		}
HXLINE(  25)		bool _hx_tmp1;
HXDLIN(  25)		if (!(!(displayObject->_hx___renderable))) {
HXLINE(  25)			_hx_tmp1 = (displayObject->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  25)			_hx_tmp1 = true;
            		}
HXDLIN(  25)		if (_hx_tmp1) {
HXLINE(  25)			return;
            		}
HXLINE(  27)		bool _hx_tmp2;
HXDLIN(  27)		bool _hx_tmp3;
HXDLIN(  27)		bool _hx_tmp4;
HXDLIN(  27)		if (hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  27)			_hx_tmp4 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  27)			_hx_tmp4 = false;
            		}
HXDLIN(  27)		if (_hx_tmp4) {
HXLINE(  27)			_hx_tmp3 = (displayObject->get_width() > (int)0);
            		}
            		else {
HXLINE(  27)			_hx_tmp3 = false;
            		}
HXDLIN(  27)		if (_hx_tmp3) {
HXLINE(  27)			_hx_tmp2 = (displayObject->get_height() > (int)0);
            		}
            		else {
HXLINE(  27)			_hx_tmp2 = false;
            		}
HXDLIN(  27)		if (_hx_tmp2) {
HXLINE(  29)			renderer->_hx___setBlendMode(displayObject->_hx___worldBlendMode);
HXLINE(  30)			renderer->_hx___pushMaskObject(displayObject,null());
HXLINE(  32)			 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
HXLINE(  34)			 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get();
HXLINE(  35)			Float _hx_tmp5 = displayObject->get_width();
HXDLIN(  35)			rect->setTo((int)0,(int)0,_hx_tmp5,displayObject->get_height());
HXLINE(  36)			renderer->_hx___pushMaskRect(rect,displayObject->_hx___renderTransform);
HXLINE(  38)			int color = displayObject->opaqueBackground;
HXLINE(  39)			gl->clearColor(((Float)((int)hx::UShr(color,(int)16) & (int)(int)255) / (Float)(int)255),((Float)((int)hx::UShr(color,(int)8) & (int)(int)255) / (Float)(int)255),((Float)((int)color & (int)(int)255) / (Float)(int)255),(int)1);
HXLINE(  40)			gl->clear(gl->COLOR_BUFFER_BIT);
HXLINE(  42)			renderer->_hx___popMaskRect();
HXLINE(  43)			renderer->_hx___popMaskObject(displayObject,null());
HXLINE(  45)			::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            		}
HXLINE(  49)		if (hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  51)			::openfl::_internal::renderer::opengl::GLShape_obj::render(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLDisplayObject_obj,render,(void))

void GLDisplayObject_obj::renderMask( ::openfl::display::DisplayObject displayObject, ::openfl::display::OpenGLRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_2687fe8a484538ac_58_renderMask)
HXLINE(  60)		bool _hx_tmp;
HXDLIN(  60)		if (hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  60)			_hx_tmp = hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  60)			_hx_tmp = false;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  60)			return;
            		}
HXLINE(  62)		bool _hx_tmp1;
HXDLIN(  62)		bool _hx_tmp2;
HXDLIN(  62)		bool _hx_tmp3;
HXDLIN(  62)		if (hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  62)			_hx_tmp3 = !(displayObject->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  62)			_hx_tmp3 = false;
            		}
HXDLIN(  62)		if (_hx_tmp3) {
HXLINE(  62)			_hx_tmp2 = (displayObject->get_width() > (int)0);
            		}
            		else {
HXLINE(  62)			_hx_tmp2 = false;
            		}
HXDLIN(  62)		if (_hx_tmp2) {
HXLINE(  62)			_hx_tmp1 = (displayObject->get_height() > (int)0);
            		}
            		else {
HXLINE(  62)			_hx_tmp1 = false;
            		}
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  64)			 ::lime::_backend::native::NativeGLRenderContext gl = renderer->_hx___gl;
            		}
HXLINE(  83)		if (hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  85)			::openfl::_internal::renderer::opengl::GLShape_obj::renderMask(displayObject,renderer);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLDisplayObject_obj,renderMask,(void))


GLDisplayObject_obj::GLDisplayObject_obj()
{
}

bool GLDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderMask") ) { outValue = renderMask_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLDisplayObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLDisplayObject_obj_sStaticStorageInfo = 0;
#endif

static void GLDisplayObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLDisplayObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLDisplayObject_obj::__mClass;

static ::String GLDisplayObject_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderMask","\x62","\x3b","\x60","\xe5"),
	::String(null())
};

void GLDisplayObject_obj::__register()
{
	hx::Object *dummy = new GLDisplayObject_obj;
	GLDisplayObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLDisplayObject","\xd8","\x44","\x6d","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLDisplayObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLDisplayObject_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLDisplayObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLDisplayObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLDisplayObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
