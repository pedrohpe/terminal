// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_system_FlxPreloader
#define INCLUDED_flixel_system_FlxPreloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_FlxBasePreloader
#include <flixel/system/FlxBasePreloader.h>
#endif
HX_DECLARE_CLASS2(flixel,_hx_system,FlxBasePreloader)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxPreloader)
HX_DECLARE_CLASS3(flixel,_hx_system,_FlxBasePreloader,DefaultPreloader)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxPreloader_obj : public  ::flixel::_hx_system::FlxBasePreloader_obj
{
	public:
		typedef  ::flixel::_hx_system::FlxBasePreloader_obj super;
		typedef FlxPreloader_obj OBJ_;
		FlxPreloader_obj();

	public:
		enum { _hx_ClassId = 0x3f30b5cf };

		void __construct(hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxPreloader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.FlxPreloader"); }
		static hx::ObjectPtr< FlxPreloader_obj > __new(hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static hx::ObjectPtr< FlxPreloader_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_MinDisplayTime,::Array< ::String > AllowedURLs);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPreloader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxPreloader","\xc4","\x2d","\x64","\x9f"); }

		 ::openfl::display::Sprite _buffer;
		 ::openfl::display::Bitmap _bmpBar;
		 ::openfl::text::TextField _text;
		 ::openfl::display::Sprite _logo;
		 ::openfl::display::Sprite _logoGlow;
		void create();

		void destroy();

		void update(Float Percent);

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxPreloader */ 
