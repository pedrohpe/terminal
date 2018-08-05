// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_display3D_Program3D
#define INCLUDED_openfl_display3D_Program3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,Uniform)
HX_DECLARE_CLASS2(openfl,display3D,UniformMap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Program3D_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Program3D_obj OBJ_;
		Program3D_obj();

	public:
		enum { _hx_ClassId = 0x28394b12 };

		void __construct( ::openfl::display3D::Context3D context3D);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Program3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.Program3D"); }
		static hx::ObjectPtr< Program3D_obj > __new( ::openfl::display3D::Context3D context3D);
		static hx::ObjectPtr< Program3D_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Program3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Program3D","\x15","\x00","\x97","\x7e"); }

		::Array< ::Dynamic> _hx___alphaSamplerEnabled;
		 ::List _hx___alphaSamplerUniforms;
		 ::openfl::display3D::Context3D _hx___context;
		 ::lime::graphics::opengl::GLObject _hx___fragmentShaderID;
		::String _hx___fragmentSource;
		 ::openfl::display3D::UniformMap _hx___fragmentUniformMap;
		int _hx___memUsage;
		 ::openfl::display3D::Uniform _hx___positionScale;
		 ::lime::graphics::opengl::GLObject _hx___programID;
		 ::openfl::_Vector::ObjectVector _hx___samplerStates;
		 ::List _hx___samplerUniforms;
		int _hx___samplerUsageMask;
		 ::List _hx___uniforms;
		 ::lime::graphics::opengl::GLObject _hx___vertexShaderID;
		::String _hx___vertexSource;
		 ::openfl::display3D::UniformMap _hx___vertexUniformMap;
		void dispose();
		::Dynamic dispose_dyn();

		void upload( ::openfl::utils::ByteArrayData vertexProgram, ::openfl::utils::ByteArrayData fragmentProgram);
		::Dynamic upload_dyn();

		void _hx___flush();
		::Dynamic _hx___flush_dyn();

		 ::openfl::_internal::stage3D::SamplerState _hx___getSamplerState(int sampler);
		::Dynamic _hx___getSamplerState_dyn();

		void _hx___markDirty(bool isVertex,int index,int count);
		::Dynamic _hx___markDirty_dyn();

		void _hx___setPositionScale( ::lime::utils::ArrayBufferView positionScale);
		::Dynamic _hx___setPositionScale_dyn();

		void _hx___setSamplerState(int sampler, ::openfl::_internal::stage3D::SamplerState state);
		::Dynamic _hx___setSamplerState_dyn();

		void _hx___use();
		::Dynamic _hx___use_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Program3D */ 
