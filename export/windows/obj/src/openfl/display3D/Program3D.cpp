// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLProgram3D
#include <openfl/_internal/stage3D/opengl/GLProgram3D.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_OpenGLRenderer
#include <openfl/display/OpenGLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Uniform
#include <openfl/display3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D_UniformMap
#include <openfl/display3D/UniformMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_536f681b10c755a2_44_new,"openfl.display3D.Program3D","new",0xcbd1926e,"openfl.display3D.Program3D.new","openfl/display3D/Program3D.hx",44,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_63_dispose,"openfl.display3D.Program3D","dispose",0x556f61ad,"openfl.display3D.Program3D.dispose","openfl/display3D/Program3D.hx",63,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_70_upload,"openfl.display3D.Program3D","upload",0x91a244b3,"openfl.display3D.Program3D.upload","openfl/display3D/Program3D.hx",70,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_75___flush,"openfl.display3D.Program3D","__flush",0x071c9cb2,"openfl.display3D.Program3D.__flush","openfl/display3D/Program3D.hx",75,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_85___getSamplerState,"openfl.display3D.Program3D","__getSamplerState",0x4314690d,"openfl.display3D.Program3D.__getSamplerState","openfl/display3D/Program3D.hx",85,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_92___markDirty,"openfl.display3D.Program3D","__markDirty",0xf012f9b3,"openfl.display3D.Program3D.__markDirty","openfl/display3D/Program3D.hx",92,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_107___setPositionScale,"openfl.display3D.Program3D","__setPositionScale",0x1baf80f1,"openfl.display3D.Program3D.__setPositionScale","openfl/display3D/Program3D.hx",107,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_118___setSamplerState,"openfl.display3D.Program3D","__setSamplerState",0x3edfe619,"openfl.display3D.Program3D.__setSamplerState","openfl/display3D/Program3D.hx",118,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_536f681b10c755a2_125___use,"openfl.display3D.Program3D","__use",0xea326eb5,"openfl.display3D.Program3D.__use","openfl/display3D/Program3D.hx",125,0x0a985b04)
namespace openfl{
namespace display3D{

void Program3D_obj::__construct( ::openfl::display3D::Context3D context3D){
            	HX_GC_STACKFRAME(&_hx_pos_536f681b10c755a2_44_new)
HXLINE(  46)		this->_hx___context = context3D;
HXLINE(  48)		this->_hx___memUsage = (int)0;
HXLINE(  49)		this->_hx___samplerUsageMask = (int)0;
HXLINE(  51)		this->_hx___uniforms =  ::List_obj::__alloc( HX_CTX );
HXLINE(  52)		this->_hx___samplerUniforms =  ::List_obj::__alloc( HX_CTX );
HXLINE(  53)		this->_hx___alphaSamplerUniforms =  ::List_obj::__alloc( HX_CTX );
HXLINE(  54)		this->_hx___alphaSamplerEnabled = ::Array_obj< ::Dynamic>::__new();
HXLINE(  56)		bool fixed = null();
HXDLIN(  56)		this->_hx___samplerStates =  ::openfl::_Vector::ObjectVector_obj::__alloc( HX_CTX ,(int)8,fixed,null(),true);
            	}

Dynamic Program3D_obj::__CreateEmpty() { return new Program3D_obj; }

void *Program3D_obj::_hx_vtable = 0;

Dynamic Program3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Program3D_obj > _hx_result = new Program3D_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Program3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28394b12;
}

void Program3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_63_dispose)
HXDLIN(  63)		::openfl::_internal::stage3D::opengl::GLProgram3D_obj::dispose(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))

void Program3D_obj::upload( ::openfl::utils::ByteArrayData vertexProgram, ::openfl::utils::ByteArrayData fragmentProgram){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_70_upload)
HXDLIN(  70)		::openfl::_internal::stage3D::opengl::GLProgram3D_obj::upload(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ),vertexProgram,fragmentProgram);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))

void Program3D_obj::_hx___flush(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_75___flush)
HXLINE(  77)		this->_hx___vertexUniformMap->flush();
HXLINE(  78)		this->_hx___fragmentUniformMap->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,_hx___flush,(void))

 ::openfl::_internal::stage3D::SamplerState Program3D_obj::_hx___getSamplerState(int sampler){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_85___getSamplerState)
HXDLIN(  85)		return this->_hx___samplerStates->get(sampler).StaticCast<  ::openfl::_internal::stage3D::SamplerState >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,_hx___getSamplerState,return )

void Program3D_obj::_hx___markDirty(bool isVertex,int index,int count){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_92___markDirty)
HXDLIN(  92)		if (isVertex) {
HXLINE(  94)			this->_hx___vertexUniformMap->markDirty(index,count);
            		}
            		else {
HXLINE(  98)			this->_hx___fragmentUniformMap->markDirty(index,count);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Program3D_obj,_hx___markDirty,(void))

void Program3D_obj::_hx___setPositionScale( ::lime::utils::ArrayBufferView positionScale){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_107___setPositionScale)
HXDLIN( 107)		if (hx::IsNotNull( this->_hx___positionScale )) {
HXLINE( 109)			::openfl::_internal::stage3D::opengl::GLProgram3D_obj::setPositionScale(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ),positionScale);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Program3D_obj,_hx___setPositionScale,(void))

void Program3D_obj::_hx___setSamplerState(int sampler, ::openfl::_internal::stage3D::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_118___setSamplerState)
HXDLIN( 118)		this->_hx___samplerStates->set(sampler,state).StaticCast<  ::openfl::_internal::stage3D::SamplerState >();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,_hx___setSamplerState,(void))

void Program3D_obj::_hx___use(){
            	HX_STACKFRAME(&_hx_pos_536f681b10c755a2_125___use)
HXDLIN( 125)		::openfl::_internal::stage3D::opengl::GLProgram3D_obj::use(hx::ObjectPtr<OBJ_>(this),( ( ::openfl::display::OpenGLRenderer)(this->_hx___context->_hx___renderer) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,_hx___use,(void))


hx::ObjectPtr< Program3D_obj > Program3D_obj::__new( ::openfl::display3D::Context3D context3D) {
	hx::ObjectPtr< Program3D_obj > __this = new Program3D_obj();
	__this->__construct(context3D);
	return __this;
}

hx::ObjectPtr< Program3D_obj > Program3D_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D) {
	Program3D_obj *__this = (Program3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Program3D_obj), true, "openfl.display3D.Program3D"));
	*(void **)__this = Program3D_obj::_hx_vtable;
	__this->__construct(context3D);
	return __this;
}

Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(_hx___alphaSamplerEnabled,"__alphaSamplerEnabled");
	HX_MARK_MEMBER_NAME(_hx___alphaSamplerUniforms,"__alphaSamplerUniforms");
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___fragmentShaderID,"__fragmentShaderID");
	HX_MARK_MEMBER_NAME(_hx___fragmentSource,"__fragmentSource");
	HX_MARK_MEMBER_NAME(_hx___fragmentUniformMap,"__fragmentUniformMap");
	HX_MARK_MEMBER_NAME(_hx___memUsage,"__memUsage");
	HX_MARK_MEMBER_NAME(_hx___positionScale,"__positionScale");
	HX_MARK_MEMBER_NAME(_hx___programID,"__programID");
	HX_MARK_MEMBER_NAME(_hx___samplerStates,"__samplerStates");
	HX_MARK_MEMBER_NAME(_hx___samplerUniforms,"__samplerUniforms");
	HX_MARK_MEMBER_NAME(_hx___samplerUsageMask,"__samplerUsageMask");
	HX_MARK_MEMBER_NAME(_hx___uniforms,"__uniforms");
	HX_MARK_MEMBER_NAME(_hx___vertexShaderID,"__vertexShaderID");
	HX_MARK_MEMBER_NAME(_hx___vertexSource,"__vertexSource");
	HX_MARK_MEMBER_NAME(_hx___vertexUniformMap,"__vertexUniformMap");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___alphaSamplerEnabled,"__alphaSamplerEnabled");
	HX_VISIT_MEMBER_NAME(_hx___alphaSamplerUniforms,"__alphaSamplerUniforms");
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___fragmentShaderID,"__fragmentShaderID");
	HX_VISIT_MEMBER_NAME(_hx___fragmentSource,"__fragmentSource");
	HX_VISIT_MEMBER_NAME(_hx___fragmentUniformMap,"__fragmentUniformMap");
	HX_VISIT_MEMBER_NAME(_hx___memUsage,"__memUsage");
	HX_VISIT_MEMBER_NAME(_hx___positionScale,"__positionScale");
	HX_VISIT_MEMBER_NAME(_hx___programID,"__programID");
	HX_VISIT_MEMBER_NAME(_hx___samplerStates,"__samplerStates");
	HX_VISIT_MEMBER_NAME(_hx___samplerUniforms,"__samplerUniforms");
	HX_VISIT_MEMBER_NAME(_hx___samplerUsageMask,"__samplerUsageMask");
	HX_VISIT_MEMBER_NAME(_hx___uniforms,"__uniforms");
	HX_VISIT_MEMBER_NAME(_hx___vertexShaderID,"__vertexShaderID");
	HX_VISIT_MEMBER_NAME(_hx___vertexSource,"__vertexSource");
	HX_VISIT_MEMBER_NAME(_hx___vertexUniformMap,"__vertexUniformMap");
}

hx::Val Program3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__use") ) { return hx::Val( _hx___use_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return hx::Val( upload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"__flush") ) { return hx::Val( _hx___flush_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return hx::Val( _hx___context ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__memUsage") ) { return hx::Val( _hx___memUsage ); }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { return hx::Val( _hx___uniforms ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__programID") ) { return hx::Val( _hx___programID ); }
		if (HX_FIELD_EQ(inName,"__markDirty") ) { return hx::Val( _hx___markDirty_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexSource") ) { return hx::Val( _hx___vertexSource ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__positionScale") ) { return hx::Val( _hx___positionScale ); }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { return hx::Val( _hx___samplerStates ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fragmentSource") ) { return hx::Val( _hx___fragmentSource ); }
		if (HX_FIELD_EQ(inName,"__vertexShaderID") ) { return hx::Val( _hx___vertexShaderID ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__samplerUniforms") ) { return hx::Val( _hx___samplerUniforms ); }
		if (HX_FIELD_EQ(inName,"__getSamplerState") ) { return hx::Val( _hx___getSamplerState_dyn() ); }
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__fragmentShaderID") ) { return hx::Val( _hx___fragmentShaderID ); }
		if (HX_FIELD_EQ(inName,"__samplerUsageMask") ) { return hx::Val( _hx___samplerUsageMask ); }
		if (HX_FIELD_EQ(inName,"__vertexUniformMap") ) { return hx::Val( _hx___vertexUniformMap ); }
		if (HX_FIELD_EQ(inName,"__setPositionScale") ) { return hx::Val( _hx___setPositionScale_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__fragmentUniformMap") ) { return hx::Val( _hx___fragmentUniformMap ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__alphaSamplerEnabled") ) { return hx::Val( _hx___alphaSamplerEnabled ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__alphaSamplerUniforms") ) { return hx::Val( _hx___alphaSamplerUniforms ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Program3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__memUsage") ) { _hx___memUsage=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { _hx___uniforms=inValue.Cast<  ::List >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__programID") ) { _hx___programID=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__vertexSource") ) { _hx___vertexSource=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__positionScale") ) { _hx___positionScale=inValue.Cast<  ::openfl::display3D::Uniform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerStates") ) { _hx___samplerStates=inValue.Cast<  ::openfl::_Vector::ObjectVector >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fragmentSource") ) { _hx___fragmentSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexShaderID") ) { _hx___vertexShaderID=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__samplerUniforms") ) { _hx___samplerUniforms=inValue.Cast<  ::List >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__fragmentShaderID") ) { _hx___fragmentShaderID=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__samplerUsageMask") ) { _hx___samplerUsageMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__vertexUniformMap") ) { _hx___vertexUniformMap=inValue.Cast<  ::openfl::display3D::UniformMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__fragmentUniformMap") ) { _hx___fragmentUniformMap=inValue.Cast<  ::openfl::display3D::UniformMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__alphaSamplerEnabled") ) { _hx___alphaSamplerEnabled=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__alphaSamplerUniforms") ) { _hx___alphaSamplerUniforms=inValue.Cast<  ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__alphaSamplerEnabled","\x37","\xdd","\x39","\xcc"));
	outFields->push(HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc"));
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10"));
	outFields->push(HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83"));
	outFields->push(HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd"));
	outFields->push(HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37"));
	outFields->push(HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"));
	outFields->push(HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a"));
	outFields->push(HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"));
	outFields->push(HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1"));
	outFields->push(HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe"));
	outFields->push(HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"));
	outFields->push(HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef"));
	outFields->push(HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3"));
	outFields->push(HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Program3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Program3D_obj,_hx___alphaSamplerEnabled),HX_HCSTRING("__alphaSamplerEnabled","\x37","\xdd","\x39","\xcc")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,_hx___alphaSamplerUniforms),HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc")},
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Program3D_obj,_hx___context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Program3D_obj,_hx___fragmentShaderID),HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10")},
	{hx::fsString,(int)offsetof(Program3D_obj,_hx___fragmentSource),HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83")},
	{hx::fsObject /*::openfl::display3D::UniformMap*/ ,(int)offsetof(Program3D_obj,_hx___fragmentUniformMap),HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd")},
	{hx::fsInt,(int)offsetof(Program3D_obj,_hx___memUsage),HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37")},
	{hx::fsObject /*::openfl::display3D::Uniform*/ ,(int)offsetof(Program3D_obj,_hx___positionScale),HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Program3D_obj,_hx___programID),HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(Program3D_obj,_hx___samplerStates),HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,_hx___samplerUniforms),HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1")},
	{hx::fsInt,(int)offsetof(Program3D_obj,_hx___samplerUsageMask),HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Program3D_obj,_hx___uniforms),HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(Program3D_obj,_hx___vertexShaderID),HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef")},
	{hx::fsString,(int)offsetof(Program3D_obj,_hx___vertexSource),HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3")},
	{hx::fsObject /*::openfl::display3D::UniformMap*/ ,(int)offsetof(Program3D_obj,_hx___vertexUniformMap),HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Program3D_obj_sStaticStorageInfo = 0;
#endif

static ::String Program3D_obj_sMemberFields[] = {
	HX_HCSTRING("__alphaSamplerEnabled","\x37","\xdd","\x39","\xcc"),
	HX_HCSTRING("__alphaSamplerUniforms","\x49","\x93","\x09","\xfc"),
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__fragmentShaderID","\x50","\xd1","\x6e","\x10"),
	HX_HCSTRING("__fragmentSource","\xeb","\xcb","\x2c","\x83"),
	HX_HCSTRING("__fragmentUniformMap","\xd8","\x1c","\x22","\xcd"),
	HX_HCSTRING("__memUsage","\xec","\x05","\xee","\x37"),
	HX_HCSTRING("__positionScale","\x01","\xd2","\x7f","\x6a"),
	HX_HCSTRING("__programID","\x3f","\x7c","\xf0","\x0a"),
	HX_HCSTRING("__samplerStates","\x4a","\xc1","\xd9","\x13"),
	HX_HCSTRING("__samplerUniforms","\xc7","\xc6","\x82","\xb1"),
	HX_HCSTRING("__samplerUsageMask","\xa5","\x3b","\x17","\xfe"),
	HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"),
	HX_HCSTRING("__vertexShaderID","\xe4","\xf8","\x83","\xef"),
	HX_HCSTRING("__vertexSource","\x7f","\x26","\x07","\xf3"),
	HX_HCSTRING("__vertexUniformMap","\x6c","\x51","\x7f","\x79"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("upload","\x01","\xca","\x59","\x8c"),
	HX_HCSTRING("__flush","\xa4","\xbb","\xf9","\x6c"),
	HX_HCSTRING("__getSamplerState","\x7f","\x6a","\x04","\x62"),
	HX_HCSTRING("__markDirty","\xa5","\x79","\xcf","\x64"),
	HX_HCSTRING("__setPositionScale","\x3f","\xc3","\xc0","\x0e"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__use","\x27","\x8d","\x35","\xf2"),
	::String(null()) };

static void Program3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Program3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Program3D_obj::__mClass;

void Program3D_obj::__register()
{
	hx::Object *dummy = new Program3D_obj;
	Program3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.Program3D","\x7c","\x83","\x68","\xf5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Program3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Program3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Program3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Program3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Program3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Program3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
