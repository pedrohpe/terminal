// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntry
#define INCLUDED_flixel_system_debug_watch_WatchEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,EditableTextField)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntry)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,WatchEntryData)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES WatchEntry_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef WatchEntry_obj OBJ_;
		WatchEntry_obj();

	public:
		enum { _hx_ClassId = 0x0bcf7aaa };

		void __construct(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.WatchEntry")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.watch.WatchEntry"); }
		static hx::ObjectPtr< WatchEntry_obj > __new(::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry);
		static hx::ObjectPtr< WatchEntry_obj > __alloc(hx::Ctx *_hx_ctx,::String displayName, ::flixel::_hx_system::debug::watch::WatchEntryData data, ::Dynamic removeEntry);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WatchEntry_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("WatchEntry","\xc3","\x97","\x41","\xdf"); }

		static void __boot();
		static int GUTTER;
		static int TEXT_HEIGHT;
		static int MAX_NAME_WIDTH;
		 ::flixel::_hx_system::debug::watch::WatchEntryData data;
		::String displayName;
		 ::openfl::text::TextField nameText;
		 ::flixel::_hx_system::debug::watch::EditableTextField valueText;
		 ::flixel::_hx_system::ui::FlxSystemButton removeButton;
		 ::openfl::text::TextFormat defaultFormat;
		int getTextColor();
		::Dynamic getTextColor_dyn();

		 ::Dynamic initTextField( ::Dynamic textField);
		::Dynamic initTextField_dyn();

		void updateSize(Float nameWidth,Float windowWidth);
		::Dynamic updateSize_dyn();

		void updateName();
		::Dynamic updateName_dyn();

		void setNameText(::String name);
		::Dynamic setNameText_dyn();

		 ::Dynamic getValue();
		::Dynamic getValue_dyn();

		::String getFormattedValue();
		::Dynamic getFormattedValue_dyn();

		void submitValue( ::Dynamic value);
		::Dynamic submitValue_dyn();

		void updateValue();
		::Dynamic updateValue_dyn();

		Float getNameWidth();
		::Dynamic getNameWidth_dyn();

		Float getMinWidth();
		::Dynamic getMinWidth_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_WatchEntry */ 
