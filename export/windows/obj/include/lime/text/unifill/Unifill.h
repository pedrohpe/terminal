// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_text_unifill_Unifill
#define INCLUDED_lime_text_unifill_Unifill

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS3(lime,text,unifill,CodePointIter)
HX_DECLARE_CLASS3(lime,text,unifill,Unifill)

namespace lime{
namespace text{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES Unifill_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Unifill_obj OBJ_;
		Unifill_obj();

	public:
		enum { _hx_ClassId = 0x11784642 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.unifill.Unifill")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.text.unifill.Unifill"); }

		hx::ObjectPtr< Unifill_obj > __new() {
			hx::ObjectPtr< Unifill_obj > __this = new Unifill_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Unifill_obj > __alloc(hx::Ctx *_hx_ctx) {
			Unifill_obj *__this = (Unifill_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Unifill_obj), false, "lime.text.unifill.Unifill"));
			*(void **)__this = Unifill_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Unifill_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Unifill","\x53","\xd6","\xb0","\x82"); }

		static int uLength(::String s);
		static ::Dynamic uLength_dyn();

		static ::String uCharAt(::String s,int index);
		static ::Dynamic uCharAt_dyn();

		static int uCharCodeAt(::String s,int index);
		static ::Dynamic uCharCodeAt_dyn();

		static int uCodePointAt(::String s,int index);
		static ::Dynamic uCodePointAt_dyn();

		static int uIndexOf(::String s,::String value,hx::Null< int >  startIndex);
		static ::Dynamic uIndexOf_dyn();

		static int uLastIndexOf(::String s,::String value, ::Dynamic startIndex);
		static ::Dynamic uLastIndexOf_dyn();

		static ::Array< ::String > uSplit(::String s,::String delimiter);
		static ::Dynamic uSplit_dyn();

		static ::String uSubstr(::String s,int startIndex, ::Dynamic length);
		static ::Dynamic uSubstr_dyn();

		static ::String uSubstring(::String s,int startIndex, ::Dynamic endIndex);
		static ::Dynamic uSubstring_dyn();

		static  ::lime::text::unifill::CodePointIter uIterator(::String s);
		static ::Dynamic uIterator_dyn();

		static int uCompare(::String a,::String b);
		static ::Dynamic uCompare_dyn();

		static ::String uToString( ::Dynamic codePoints);
		static ::Dynamic uToString_dyn();

		static void uAddChar( ::StringBuf sb,int c);
		static ::Dynamic uAddChar_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace unifill

#endif /* INCLUDED_lime_text_unifill_Unifill */ 
