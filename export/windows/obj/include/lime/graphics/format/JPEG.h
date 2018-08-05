// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_graphics_format_JPEG
#define INCLUDED_lime_graphics_format_JPEG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS3(lime,graphics,format,JPEG)

namespace lime{
namespace graphics{
namespace format{


class HXCPP_CLASS_ATTRIBUTES JPEG_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef JPEG_obj OBJ_;
		JPEG_obj();

	public:
		enum { _hx_ClassId = 0x754ec97f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.format.JPEG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.format.JPEG"); }

		hx::ObjectPtr< JPEG_obj > __new() {
			hx::ObjectPtr< JPEG_obj > __this = new JPEG_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< JPEG_obj > __alloc(hx::Ctx *_hx_ctx) {
			JPEG_obj *__this = (JPEG_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JPEG_obj), false, "lime.graphics.format.JPEG"));
			*(void **)__this = JPEG_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JPEG_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("JPEG","\xa8","\xba","\x26","\x31"); }

		static  ::lime::graphics::Image decodeBytes( ::haxe::io::Bytes bytes,hx::Null< bool >  decodeData);
		static ::Dynamic decodeBytes_dyn();

		static  ::lime::graphics::Image decodeFile(::String path,hx::Null< bool >  decodeData);
		static ::Dynamic decodeFile_dyn();

		static  ::haxe::io::Bytes encode( ::lime::graphics::Image image,int quality);
		static ::Dynamic encode_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace format

#endif /* INCLUDED_lime_graphics_format_JPEG */ 
