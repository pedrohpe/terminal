// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_CairoRenderer
#include <openfl/display/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_765a23aeaf3cad17_34_new,"openfl.display.CairoRenderer","new",0x224c60b3,"openfl.display.CairoRenderer.new","openfl/display/CairoRenderer.hx",34,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_50_applyMatrix,"openfl.display.CairoRenderer","applyMatrix",0x011091a2,"openfl.display.CairoRenderer.applyMatrix","openfl/display/CairoRenderer.hx",50,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_84___clear,"openfl.display.CairoRenderer","__clear",0xae7c8040,"openfl.display.CairoRenderer.__clear","openfl/display/CairoRenderer.hx",84,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_107___popMask,"openfl.display.CairoRenderer","__popMask",0x3e99c890,"openfl.display.CairoRenderer.__popMask","openfl/display/CairoRenderer.hx",107,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_112___popMaskObject,"openfl.display.CairoRenderer","__popMaskObject",0x2a06876f,"openfl.display.CairoRenderer.__popMaskObject","openfl/display/CairoRenderer.hx",112,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_131___popMaskRect,"openfl.display.CairoRenderer","__popMaskRect",0x4351c9d4,"openfl.display.CairoRenderer.__popMaskRect","openfl/display/CairoRenderer.hx",131,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_136___pushMask,"openfl.display.CairoRenderer","__pushMask",0x33145713,"openfl.display.CairoRenderer.__pushMask","openfl/display/CairoRenderer.hx",136,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_149___pushMaskObject,"openfl.display.CairoRenderer","__pushMaskObject",0xe55b5a32,"openfl.display.CairoRenderer.__pushMaskObject","openfl/display/CairoRenderer.hx",149,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_166___pushMaskRect,"openfl.display.CairoRenderer","__pushMaskRect",0x50a955d7,"openfl.display.CairoRenderer.__pushMaskRect","openfl/display/CairoRenderer.hx",166,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_179___render,"openfl.display.CairoRenderer","__render",0xfbf53943,"openfl.display.CairoRenderer.__render","openfl/display/CairoRenderer.hx",179,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_188___renderStage3D,"openfl.display.CairoRenderer","__renderStage3D",0xcb632fec,"openfl.display.CairoRenderer.__renderStage3D","openfl/display/CairoRenderer.hx",188,0x013a831f)
HX_LOCAL_STACK_FRAME(_hx_pos_765a23aeaf3cad17_201___setBlendMode,"openfl.display.CairoRenderer","__setBlendMode",0x010a21ff,"openfl.display.CairoRenderer.__setBlendMode","openfl/display/CairoRenderer.hx",201,0x013a831f)
namespace openfl{
namespace display{

void CairoRenderer_obj::__construct( ::lime::graphics::cairo::Cairo cairo){
            	HX_GC_STACKFRAME(&_hx_pos_765a23aeaf3cad17_34_new)
HXLINE(  36)		super::__construct();
HXLINE(  39)		this->cairo = cairo;
HXLINE(  41)		this->_hx___matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  42)		this->_hx___matrix3 =  ::lime::math::Matrix3_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  44)		this->_hx___type = ::lime::graphics::RendererType_obj::CAIRO_dyn();
            	}

Dynamic CairoRenderer_obj::__CreateEmpty() { return new CairoRenderer_obj; }

void *CairoRenderer_obj::_hx_vtable = 0;

Dynamic CairoRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoRenderer_obj > _hx_result = new CairoRenderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CairoRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7cdf41d6) {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x7cdf41d6;
		}
	} else {
		return inClassId==(int)0x7eb06559;
	}
}

void CairoRenderer_obj::applyMatrix( ::openfl::geom::Matrix transform, ::lime::graphics::cairo::Cairo cairo){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_50_applyMatrix)
HXLINE(  52)		if (hx::IsNull( cairo )) {
HXLINE(  52)			cairo = this->cairo;
            		}
HXLINE(  54)		this->_hx___matrix->copyFrom(transform);
HXLINE(  56)		bool _hx_tmp;
HXDLIN(  56)		if (hx::IsEq( this->cairo,cairo )) {
HXLINE(  56)			_hx_tmp = hx::IsNotNull( this->_hx___worldTransform );
            		}
            		else {
HXLINE(  56)			_hx_tmp = false;
            		}
HXDLIN(  56)		if (_hx_tmp) {
HXLINE(  58)			this->_hx___matrix->concat(this->_hx___worldTransform);
            		}
HXLINE(  62)		this->_hx___matrix3->a = this->_hx___matrix->a;
HXLINE(  63)		this->_hx___matrix3->b = this->_hx___matrix->b;
HXLINE(  64)		this->_hx___matrix3->c = this->_hx___matrix->c;
HXLINE(  65)		this->_hx___matrix3->d = this->_hx___matrix->d;
HXLINE(  67)		if (this->_hx___roundPixels) {
HXLINE(  69)			this->_hx___matrix3->tx = ::Math_obj::round(this->_hx___matrix->tx);
HXLINE(  70)			this->_hx___matrix3->ty = ::Math_obj::round(this->_hx___matrix->ty);
            		}
            		else {
HXLINE(  74)			this->_hx___matrix3->tx = this->_hx___matrix->tx;
HXLINE(  75)			this->_hx___matrix3->ty = this->_hx___matrix->ty;
            		}
HXLINE(  79)		cairo->set_matrix(this->_hx___matrix3);
            	}


HX_DEFINE_DYNAMIC_FUNC2(CairoRenderer_obj,applyMatrix,(void))

void CairoRenderer_obj::_hx___clear(){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_84___clear)
HXLINE(  86)		if (hx::IsNull( this->cairo )) {
HXLINE(  86)			return;
            		}
HXLINE(  88)		this->cairo->identityMatrix();
HXLINE(  90)		bool _hx_tmp;
HXDLIN(  90)		if (hx::IsNotNull( this->_hx___stage )) {
HXLINE(  90)			_hx_tmp = this->_hx___stage->_hx___clearBeforeRender;
            		}
            		else {
HXLINE(  90)			_hx_tmp = false;
            		}
HXDLIN(  90)		if (_hx_tmp) {
HXLINE(  92)			 ::Dynamic cacheBlendMode = this->_hx___blendMode;
HXLINE(  93)			this->_hx___setBlendMode((int)10);
HXLINE(  95)			 ::lime::graphics::cairo::Cairo _hx_tmp1 = this->cairo;
HXDLIN(  95)			Float _hx_tmp2 = this->_hx___stage->_hx___colorSplit->__get((int)0);
HXDLIN(  95)			Float _hx_tmp3 = this->_hx___stage->_hx___colorSplit->__get((int)1);
HXDLIN(  95)			_hx_tmp1->setSourceRGB(_hx_tmp2,_hx_tmp3,this->_hx___stage->_hx___colorSplit->__get((int)2));
HXLINE(  96)			this->cairo->paint();
HXLINE(  98)			this->_hx___setBlendMode(cacheBlendMode);
            		}
            	}


void CairoRenderer_obj::_hx___popMask(){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_107___popMask)
HXDLIN( 107)		this->cairo->restore();
            	}


void CairoRenderer_obj::_hx___popMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_112___popMaskObject)
HXLINE( 114)		bool _hx_tmp;
HXDLIN( 114)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 114)			_hx_tmp = hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 114)			_hx_tmp = false;
            		}
HXDLIN( 114)		if (_hx_tmp) {
HXLINE( 116)			this->_hx___popMask();
            		}
HXLINE( 120)		bool _hx_tmp1;
HXDLIN( 120)		if (handleScrollRect) {
HXLINE( 120)			_hx_tmp1 = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 120)			_hx_tmp1 = false;
            		}
HXDLIN( 120)		if (_hx_tmp1) {
HXLINE( 122)			this->_hx___popMaskRect();
            		}
            	}


void CairoRenderer_obj::_hx___popMaskRect(){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_131___popMaskRect)
HXDLIN( 131)		this->cairo->restore();
            	}


void CairoRenderer_obj::_hx___pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_136___pushMask)
HXLINE( 138)		this->cairo->save();
HXLINE( 140)		this->applyMatrix(mask->_hx___renderTransform,this->cairo);
HXLINE( 142)		this->cairo->newPath();
HXLINE( 143)		mask->_hx___renderCairoMask(hx::ObjectPtr<OBJ_>(this));
HXLINE( 144)		this->cairo->clip();
            	}


void CairoRenderer_obj::_hx___pushMaskObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_149___pushMaskObject)
HXLINE( 151)		bool _hx_tmp;
HXDLIN( 151)		if (handleScrollRect) {
HXLINE( 151)			_hx_tmp = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 151)			_hx_tmp = false;
            		}
HXDLIN( 151)		if (_hx_tmp) {
HXLINE( 153)			this->_hx___pushMaskRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE( 157)		bool _hx_tmp1;
HXDLIN( 157)		if (!(object->_hx___isCacheBitmapRender)) {
HXLINE( 157)			_hx_tmp1 = hx::IsNotNull( object->_hx___mask );
            		}
            		else {
HXLINE( 157)			_hx_tmp1 = false;
            		}
HXDLIN( 157)		if (_hx_tmp1) {
HXLINE( 159)			this->_hx___pushMask(object->_hx___mask);
            		}
            	}


void CairoRenderer_obj::_hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_166___pushMaskRect)
HXLINE( 168)		this->cairo->save();
HXLINE( 170)		this->applyMatrix(transform,this->cairo);
HXLINE( 172)		this->cairo->newPath();
HXLINE( 173)		this->cairo->rectangle(rect->x,rect->y,rect->width,rect->height);
HXLINE( 174)		this->cairo->clip();
            	}


void CairoRenderer_obj::_hx___render(::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_179___render)
HXLINE( 181)		if (hx::IsNull( this->cairo )) {
HXLINE( 181)			return;
            		}
HXLINE( 183)		::openfl::display::IBitmapDrawable_obj::_hx___renderCairo(object,hx::ObjectPtr<OBJ_>(this));
            	}


void CairoRenderer_obj::_hx___renderStage3D( ::openfl::display::Stage stage){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_188___renderStage3D)
HXLINE( 190)		if (hx::IsNull( this->cairo )) {
HXLINE( 190)			return;
            		}
HXLINE( 192)		{
HXLINE( 192)			int _g = (int)0;
HXDLIN( 192)			 ::openfl::_Vector::ObjectVector _g1 = stage->stage3Ds;
HXDLIN( 192)			while((_g < _g1->get_length())){
HXLINE( 192)				 ::openfl::display::Stage3D stage3D = _g1->get(_g).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN( 192)				_g = (_g + (int)1);
HXLINE( 194)				stage3D->_hx___renderCairo(stage,hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}


void CairoRenderer_obj::_hx___setBlendMode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_765a23aeaf3cad17_201___setBlendMode)
HXLINE( 203)		if (hx::IsEq( this->_hx___blendMode,value )) {
HXLINE( 203)			return;
            		}
HXLINE( 205)		this->_hx___blendMode = value;
HXLINE( 207)		 ::Dynamic _hx_switch_0 = value;
            		if (  (_hx_switch_0==(int)0) ){
HXLINE( 211)			this->cairo->set_operator((int)12);
HXDLIN( 211)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)2) ){
HXLINE( 219)			this->cairo->set_operator((int)17);
HXDLIN( 219)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)3) ){
HXLINE( 223)			this->cairo->set_operator((int)23);
HXDLIN( 223)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)5) ){
HXLINE( 231)			this->cairo->set_operator((int)21);
HXDLIN( 231)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)7) ){
HXLINE( 239)			this->cairo->set_operator((int)2);
HXDLIN( 239)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)8) ){
HXLINE( 243)			this->cairo->set_operator((int)18);
HXDLIN( 243)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)9) ){
HXLINE( 247)			this->cairo->set_operator((int)14);
HXDLIN( 247)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)11) ){
HXLINE( 251)			this->cairo->set_operator((int)16);
HXDLIN( 251)			goto _hx_goto_12;
            		}
            		if (  (_hx_switch_0==(int)12) ){
HXLINE( 255)			this->cairo->set_operator((int)15);
HXDLIN( 255)			goto _hx_goto_12;
            		}
            		/* default */{
HXLINE( 267)			this->cairo->set_operator((int)2);
            		}
            		_hx_goto_12:;
            	}



hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__new( ::lime::graphics::cairo::Cairo cairo) {
	hx::ObjectPtr< CairoRenderer_obj > __this = new CairoRenderer_obj();
	__this->__construct(cairo);
	return __this;
}

hx::ObjectPtr< CairoRenderer_obj > CairoRenderer_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::graphics::cairo::Cairo cairo) {
	CairoRenderer_obj *__this = (CairoRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoRenderer_obj), true, "openfl.display.CairoRenderer"));
	*(void **)__this = CairoRenderer_obj::_hx_vtable;
	__this->__construct(cairo);
	return __this;
}

CairoRenderer_obj::CairoRenderer_obj()
{
}

void CairoRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CairoRenderer);
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_MARK_MEMBER_NAME(_hx___matrix3,"__matrix3");
	 ::openfl::display::DisplayObjectRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CairoRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(_hx___matrix,"__matrix");
	HX_VISIT_MEMBER_NAME(_hx___matrix3,"__matrix3");
	 ::openfl::display::DisplayObjectRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CairoRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return hx::Val( cairo ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clear") ) { return hx::Val( _hx___clear_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { return hx::Val( _hx___matrix ); }
		if (HX_FIELD_EQ(inName,"__render") ) { return hx::Val( _hx___render_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { return hx::Val( _hx___matrix3 ); }
		if (HX_FIELD_EQ(inName,"__popMask") ) { return hx::Val( _hx___popMask_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__pushMask") ) { return hx::Val( _hx___pushMask_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyMatrix") ) { return hx::Val( applyMatrix_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__popMaskRect") ) { return hx::Val( _hx___popMaskRect_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__pushMaskRect") ) { return hx::Val( _hx___pushMaskRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setBlendMode") ) { return hx::Val( _hx___setBlendMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__popMaskObject") ) { return hx::Val( _hx___popMaskObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderStage3D") ) { return hx::Val( _hx___renderStage3D_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__pushMaskObject") ) { return hx::Val( _hx___pushMaskObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CairoRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__matrix") ) { _hx___matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__matrix3") ) { _hx___matrix3=inValue.Cast<  ::lime::math::Matrix3 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CairoRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("__matrix","\x61","\xa1","\xf7","\x63"));
	outFields->push(HX_HCSTRING("__matrix3","\xb2","\x93","\xb5","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CairoRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(CairoRenderer_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(CairoRenderer_obj,_hx___matrix),HX_HCSTRING("__matrix","\x61","\xa1","\xf7","\x63")},
	{hx::fsObject /*::lime::math::Matrix3*/ ,(int)offsetof(CairoRenderer_obj,_hx___matrix3),HX_HCSTRING("__matrix3","\xb2","\x93","\xb5","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CairoRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String CairoRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("__matrix","\x61","\xa1","\xf7","\x63"),
	HX_HCSTRING("__matrix3","\xb2","\x93","\xb5","\x14"),
	HX_HCSTRING("applyMatrix","\x4f","\xf6","\xc2","\xf7"),
	HX_HCSTRING("__clear","\x6d","\xca","\xb9","\xb2"),
	HX_HCSTRING("__popMask","\xfd","\xb7","\x5f","\xc4"),
	HX_HCSTRING("__popMaskObject","\x9c","\x46","\x0d","\x10"),
	HX_HCSTRING("__popMaskRect","\xc1","\x73","\xe8","\x16"),
	HX_HCSTRING("__pushMask","\x06","\xe7","\x7f","\xba"),
	HX_HCSTRING("__pushMaskObject","\x65","\xe2","\x3b","\x45"),
	HX_HCSTRING("__pushMaskRect","\x4a","\x5b","\xe7","\xa0"),
	HX_HCSTRING("__render","\x76","\xd6","\x58","\xad"),
	HX_HCSTRING("__renderStage3D","\x19","\xef","\x69","\xb1"),
	HX_HCSTRING("__setBlendMode","\x72","\x27","\x48","\x51"),
	::String(null()) };

static void CairoRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoRenderer_obj::__mClass;

void CairoRenderer_obj::__register()
{
	hx::Object *dummy = new CairoRenderer_obj;
	CairoRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.CairoRenderer","\x41","\x8b","\x63","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CairoRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
