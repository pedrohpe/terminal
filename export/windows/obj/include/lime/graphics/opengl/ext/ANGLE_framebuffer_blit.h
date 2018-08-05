// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7378ebc94440c0ad_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_framebuffer_blit)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_framebuffer_blit_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ANGLE_framebuffer_blit_obj OBJ_;
		ANGLE_framebuffer_blit_obj();

	public:
		enum { _hx_ClassId = 0x5e0d49a1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_framebuffer_blit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_framebuffer_blit"); }

		hx::ObjectPtr< ANGLE_framebuffer_blit_obj > __new() {
			hx::ObjectPtr< ANGLE_framebuffer_blit_obj > __this = new ANGLE_framebuffer_blit_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ANGLE_framebuffer_blit_obj > __alloc(hx::Ctx *_hx_ctx) {
			ANGLE_framebuffer_blit_obj *__this = (ANGLE_framebuffer_blit_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_framebuffer_blit_obj), false, "lime.graphics.opengl.ext.ANGLE_framebuffer_blit"));
			*(void **)__this = ANGLE_framebuffer_blit_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7378ebc94440c0ad_6_new)
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->READ_FRAMEBUFFER_BINDING_ANGLE = (int)36010;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->DRAW_FRAMEBUFFER_BINDING_ANGLE = (int)36006;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->DRAW_FRAMEBUFFER_ANGLE = (int)36009;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::ANGLE_framebuffer_blit)(__this) )->READ_FRAMEBUFFER_ANGLE = (int)36008;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ANGLE_framebuffer_blit_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ANGLE_framebuffer_blit","\x53","\x5d","\xfe","\x07"); }

		int READ_FRAMEBUFFER_ANGLE;
		int DRAW_FRAMEBUFFER_ANGLE;
		int DRAW_FRAMEBUFFER_BINDING_ANGLE;
		int READ_FRAMEBUFFER_BINDING_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_framebuffer_blit */ 
