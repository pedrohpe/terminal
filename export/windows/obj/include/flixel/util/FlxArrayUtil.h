// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#define INCLUDED_flixel_util_FlxArrayUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntry)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,FlxArrayUtil)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxArrayUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxArrayUtil_obj OBJ_;
		FlxArrayUtil_obj();

	public:
		enum { _hx_ClassId = 0x0a2d4e4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxArrayUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util.FlxArrayUtil"); }

		hx::ObjectPtr< FlxArrayUtil_obj > __new() {
			hx::ObjectPtr< FlxArrayUtil_obj > __this = new FlxArrayUtil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< FlxArrayUtil_obj > __alloc(hx::Ctx *_hx_ctx) {
			FlxArrayUtil_obj *__this = (FlxArrayUtil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxArrayUtil_obj), false, "flixel.util.FlxArrayUtil"));
			*(void **)__this = FlxArrayUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxArrayUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxArrayUtil","\x89","\x7b","\x08","\xb4"); }

		static ::Array< int > setLength_Int(::Array< int > array,int newLength);
		static ::Dynamic setLength_Int_dyn();

		static ::Array< int > flatten2DArray_Int(::Array< ::Dynamic> array);
		static ::Dynamic flatten2DArray_Int_dyn();

		static ::cpp::VirtualArray setLength_flixel_group_FlxTypedGroup_T(::cpp::VirtualArray array,int newLength);
		static ::Dynamic setLength_flixel_group_FlxTypedGroup_T_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_tweens_FlxTween(::Array< ::Dynamic> array, ::flixel::tweens::FlxTween element);
		static ::Dynamic fastSplice_flixel_tweens_FlxTween_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_util_FlxTimer(::Array< ::Dynamic> array, ::flixel::util::FlxTimer element);
		static ::Dynamic fastSplice_flixel_util_FlxTimer_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_system_debug_watch_WatchEntry(::Array< ::Dynamic> array, ::flixel::_hx_system::debug::watch::WatchEntry element);
		static ::Dynamic fastSplice_flixel_system_debug_watch_WatchEntry_dyn();

		static ::Array< ::Dynamic> fastSplice_flixel_system_debug_Window(::Array< ::Dynamic> array, ::flixel::_hx_system::debug::Window element);
		static ::Dynamic fastSplice_flixel_system_debug_Window_dyn();

		static ::cpp::VirtualArray swapAndPop_fastSplice_T(::cpp::VirtualArray array,int index);
		static ::Dynamic swapAndPop_fastSplice_T_dyn();

		static ::cpp::VirtualArray clearArray(::cpp::VirtualArray array,hx::Null< bool >  recursive);
		static ::Dynamic clearArray_dyn();

		static bool equals(::cpp::VirtualArray array1,::cpp::VirtualArray array2);
		static ::Dynamic equals_dyn();

		static  ::Dynamic last(::cpp::VirtualArray array);
		static ::Dynamic last_dyn();

		static bool contains(::cpp::VirtualArray array, ::Dynamic element);
		static ::Dynamic contains_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxArrayUtil */ 
