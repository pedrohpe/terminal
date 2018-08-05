// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#define INCLUDED_lime_graphics_opengl_GLObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_def54b8cacb52d8e_3140_new)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)

namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLObject_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLObject_obj OBJ_;
		GLObject_obj();

	public:
		enum { _hx_ClassId = 0x6ce04d1b };

		void __construct(int id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.opengl.GLObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.graphics.opengl.GLObject"); }

		hx::ObjectPtr< GLObject_obj > __new(int id) {
			hx::ObjectPtr< GLObject_obj > __this = new GLObject_obj();
			__this->__construct(id);
			return __this;
		}

		static hx::ObjectPtr< GLObject_obj > __alloc(hx::Ctx *_hx_ctx,int id) {
			GLObject_obj *__this = (GLObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLObject_obj), true, "lime.graphics.opengl.GLObject"));
			*(void **)__this = GLObject_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_def54b8cacb52d8e_3140_new)
HXDLIN(3140)		( ( ::lime::graphics::opengl::GLObject)(__this) )->id = id;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLObject","\xc4","\xda","\x30","\x7f"); }

		static  ::lime::graphics::opengl::GLObject fromInt(int type,int id);
		static ::Dynamic fromInt_dyn();

		int id;
		::Array< ::Dynamic> refs;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GLObject */ 
