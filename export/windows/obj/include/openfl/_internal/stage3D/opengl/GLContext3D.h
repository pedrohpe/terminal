// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_stage3D_opengl_GLContext3D
#define INCLUDED_openfl__internal_stage3D_opengl_GLContext3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,opengl,GLContext3D)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace _internal{
namespace stage3D{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLContext3D_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLContext3D_obj OBJ_;
		GLContext3D_obj();

	public:
		enum { _hx_ClassId = 0x41bc9ce9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.opengl.GLContext3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.stage3D.opengl.GLContext3D"); }

		hx::ObjectPtr< GLContext3D_obj > __new() {
			hx::ObjectPtr< GLContext3D_obj > __this = new GLContext3D_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLContext3D_obj > __alloc(hx::Ctx *_hx_ctx) {
			GLContext3D_obj *__this = (GLContext3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLContext3D_obj), false, "openfl._internal.stage3D.opengl.GLContext3D"));
			*(void **)__this = GLContext3D_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLContext3D_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLContext3D","\x7b","\x91","\x9a","\x8c"); }

		static  ::openfl::display3D::Context3D context;
		static  ::lime::_backend::native::NativeGLRenderContext gl;
		static void create( ::openfl::display3D::Context3D context);
		static ::Dynamic create_dyn();

		static void clear( ::openfl::display3D::Context3D context,hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,hx::Null< Float >  depth,hx::Null< int >  stencil,hx::Null< int >  mask);
		static ::Dynamic clear_dyn();

		static void configureBackBuffer( ::openfl::display3D::Context3D context,int width,int height,int antiAlias,hx::Null< bool >  enableDepthAndStencil,hx::Null< bool >  wantsBestResolution,hx::Null< bool >  wantsBestResolutionOnBrowserZoom);
		static ::Dynamic configureBackBuffer_dyn();

		static void dispose( ::openfl::display3D::Context3D context,hx::Null< bool >  recreate);
		static ::Dynamic dispose_dyn();

		static void drawToBitmapData( ::openfl::display3D::Context3D context, ::openfl::display::BitmapData destination);
		static ::Dynamic drawToBitmapData_dyn();

		static void drawTriangles( ::openfl::display3D::Context3D context, ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  firstIndex,hx::Null< int >  numTriangles);
		static ::Dynamic drawTriangles_dyn();

		static void present( ::openfl::display3D::Context3D context);
		static ::Dynamic present_dyn();

		static void setBlendFactors( ::openfl::display3D::Context3D context, ::Dynamic sourceFactor, ::Dynamic destinationFactor);
		static ::Dynamic setBlendFactors_dyn();

		static void setColorMask( ::openfl::display3D::Context3D context,bool red,bool green,bool blue,bool alpha);
		static ::Dynamic setColorMask_dyn();

		static  ::openfl::errors::Error setCulling( ::openfl::display3D::Context3D context, ::Dynamic triangleFaceToCull);
		static ::Dynamic setCulling_dyn();

		static void setDepthTest( ::openfl::display3D::Context3D context,bool depthMask, ::Dynamic passCompareMode);
		static ::Dynamic setDepthTest_dyn();

		static void setEnableErrorChecking(bool value);
		static ::Dynamic setEnableErrorChecking_dyn();

		static void setProgram( ::openfl::display3D::Context3D context, ::openfl::display3D::Program3D program);
		static ::Dynamic setProgram_dyn();

		static void setProgramConstantsFromByteArray( ::openfl::display3D::Context3D context, ::Dynamic programType,int firstRegister,int numRegisters, ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		static ::Dynamic setProgramConstantsFromByteArray_dyn();

		static void setProgramConstantsFromMatrix( ::openfl::display3D::Context3D context, ::Dynamic programType,int firstRegister, ::openfl::geom::Matrix3D matrix,hx::Null< bool >  transposedMatrix);
		static ::Dynamic setProgramConstantsFromMatrix_dyn();

		static void setProgramConstantsFromVector( ::openfl::display3D::Context3D context, ::Dynamic programType,int firstRegister, ::openfl::_Vector::FloatVector data,hx::Null< int >  numRegisters);
		static ::Dynamic setProgramConstantsFromVector_dyn();

		static void setRenderToBackBuffer( ::openfl::display3D::Context3D context);
		static ::Dynamic setRenderToBackBuffer_dyn();

		static void setRenderToTexture( ::openfl::display3D::Context3D context, ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  enableDepthAndStencil,hx::Null< int >  antiAlias,hx::Null< int >  surfaceSelector);
		static ::Dynamic setRenderToTexture_dyn();

		static void setSamplerStateAt( ::openfl::display3D::Context3D context,int sampler, ::Dynamic wrap, ::Dynamic filter, ::Dynamic mipfilter);
		static ::Dynamic setSamplerStateAt_dyn();

		static void setScissorRectangle( ::openfl::display3D::Context3D context, ::openfl::geom::Rectangle rectangle);
		static ::Dynamic setScissorRectangle_dyn();

		static void setStencilActions( ::openfl::display3D::Context3D context, ::Dynamic triangleFace, ::Dynamic compareMode, ::Dynamic actionOnBothPass, ::Dynamic actionOnDepthFail, ::Dynamic actionOnDepthPassStencilFail);
		static ::Dynamic setStencilActions_dyn();

		static void setStencilReferenceValue( ::openfl::display3D::Context3D context,int referenceValue,hx::Null< int >  readMask,hx::Null< int >  writeMask);
		static ::Dynamic setStencilReferenceValue_dyn();

		static void setTextureAt( ::openfl::display3D::Context3D context,int sampler, ::openfl::display3D::textures::TextureBase texture);
		static ::Dynamic setTextureAt_dyn();

		static void setVertexBufferAt( ::openfl::display3D::Context3D context,int index, ::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  bufferOffset, ::Dynamic format);
		static ::Dynamic setVertexBufferAt_dyn();

		static void _hx___flushSamplerState();
		static ::Dynamic _hx___flushSamplerState_dyn();

		static int _hx___getGLCompareMode( ::Dynamic compareMode);
		static ::Dynamic _hx___getGLCompareMode_dyn();

		static int _hx___getGLTriangleFace( ::Dynamic triangleFace);
		static ::Dynamic _hx___getGLTriangleFace_dyn();

		static int _hx___getGLStencilAction( ::Dynamic stencilAction);
		static ::Dynamic _hx___getGLStencilAction_dyn();

		static bool _hx___hasGLExtension(::String name);
		static ::Dynamic _hx___hasGLExtension_dyn();

		static void _hx___setViewport(int originX,int originY,int width,int height);
		static ::Dynamic _hx___setViewport_dyn();

		static void _hx___updateBackbufferViewportTEMP( ::openfl::display3D::Context3D context);
		static ::Dynamic _hx___updateBackbufferViewportTEMP_dyn();

		static void _hx___updateBackbufferViewport();
		static ::Dynamic _hx___updateBackbufferViewport_dyn();

		static void _hx___updateBlendFactorsTEMP( ::openfl::display3D::Context3D context);
		static ::Dynamic _hx___updateBlendFactorsTEMP_dyn();

		static void _hx___updateBlendFactors();
		static ::Dynamic _hx___updateBlendFactors_dyn();

		static void _hx___updateDepthAndStencilState();
		static ::Dynamic _hx___updateDepthAndStencilState_dyn();

		static void _hx___updateScissorRectangle();
		static ::Dynamic _hx___updateScissorRectangle_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_stage3D_opengl_GLContext3D */ 
