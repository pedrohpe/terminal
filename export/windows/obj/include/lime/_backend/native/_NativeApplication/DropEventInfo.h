// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime__backend_native__NativeApplication_DropEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_DropEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_cc1242aa9b04079d_810_new)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,DropEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES DropEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DropEventInfo_obj OBJ_;
		DropEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x38f85c1e };

		void __construct( ::Dynamic type,::String file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._backend.native._NativeApplication.DropEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._backend.native._NativeApplication.DropEventInfo"); }

		hx::ObjectPtr< DropEventInfo_obj > __new( ::Dynamic type,::String file) {
			hx::ObjectPtr< DropEventInfo_obj > __this = new DropEventInfo_obj();
			__this->__construct(type,file);
			return __this;
		}

		static hx::ObjectPtr< DropEventInfo_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic type,::String file) {
			DropEventInfo_obj *__this = (DropEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DropEventInfo_obj), true, "lime._backend.native._NativeApplication.DropEventInfo"));
			*(void **)__this = DropEventInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_cc1242aa9b04079d_810_new)
HXLINE( 812)		( ( ::lime::_backend::native::_NativeApplication::DropEventInfo)(__this) )->type = type;
HXLINE( 813)		( ( ::lime::_backend::native::_NativeApplication::DropEventInfo)(__this) )->file = file;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DropEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DropEventInfo","\x59","\x3b","\x00","\x66"); }

		::String file;
		int type;
		 ::lime::_backend::native::_NativeApplication::DropEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_DropEventInfo */ 
