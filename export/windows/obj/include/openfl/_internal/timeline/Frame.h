// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_timeline_Frame
#define INCLUDED_openfl__internal_timeline_Frame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_fffaa4aaa0c483f8_20_new)
HX_DECLARE_CLASS3(openfl,_internal,timeline,Frame)
HX_DECLARE_CLASS3(openfl,_internal,timeline,FrameObject)

namespace openfl{
namespace _internal{
namespace timeline{


class HXCPP_CLASS_ATTRIBUTES Frame_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Frame_obj OBJ_;
		Frame_obj();

	public:
		enum { _hx_ClassId = 0x03fd0928 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.timeline.Frame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.timeline.Frame"); }

		hx::ObjectPtr< Frame_obj > __new() {
			hx::ObjectPtr< Frame_obj > __this = new Frame_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Frame_obj > __alloc(hx::Ctx *_hx_ctx) {
			Frame_obj *__this = (Frame_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Frame_obj), true, "openfl._internal.timeline.Frame"));
			*(void **)__this = Frame_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_fffaa4aaa0c483f8_20_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Frame_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Frame","\x0d","\xe8","\xb0","\x99"); }

		::String label;
		::Array< ::Dynamic> objects;
		 ::Dynamic script;
		Dynamic script_dyn() { return script;}
		::String scriptSource;
};

} // end namespace openfl
} // end namespace _internal
} // end namespace timeline

#endif /* INCLUDED_openfl__internal_timeline_Frame */ 
