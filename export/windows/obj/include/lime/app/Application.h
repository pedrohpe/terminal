// Generated by Haxe 3.4.4
#ifndef INCLUDED_lime_app_Application
#define INCLUDED_lime_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(lime,_backend,native,NativeApplication)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Void)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Application_obj : public  ::lime::app::Module_obj
{
	public:
		typedef  ::lime::app::Module_obj super;
		typedef Application_obj OBJ_;
		Application_obj();

	public:
		enum { _hx_ClassId = 0x31cfae44 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Application")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app.Application"); }
		static hx::ObjectPtr< Application_obj > __new();
		static hx::ObjectPtr< Application_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("Application","\x30","\x43","\x71","\x0e"); }

		static void __boot();
		static  ::lime::app::Application current;
		 ::Dynamic config;
		::Array< ::Dynamic> modules;
		 ::lime::app::Preloader preloader;
		 ::lime::app::_Event_Int_Void onUpdate;
		 ::lime::graphics::Renderer renderer;
		::Array< ::Dynamic> renderers;
		 ::lime::ui::Window window;
		::Array< ::Dynamic> windows;
		 ::lime::_backend::native::NativeApplication backend;
		 ::haxe::ds::IntMap windowByID;
		void addModule(::Dynamic module);
		::Dynamic addModule_dyn();

		void addRenderer( ::lime::graphics::Renderer renderer);

		virtual void create( ::Dynamic config);
		::Dynamic create_dyn();

		void createWindow( ::lime::ui::Window window);
		::Dynamic createWindow_dyn();

		int exec();
		::Dynamic exec_dyn();

		void onModuleExit(int code);

		void onWindowClose( ::lime::ui::Window window);

		void removeModule(::Dynamic module);
		::Dynamic removeModule_dyn();

		void removeWindow( ::lime::ui::Window window);

		void setPreloader( ::lime::app::Preloader preloader);

		Float get_frameRate();
		::Dynamic get_frameRate_dyn();

		Float set_frameRate(Float value);
		::Dynamic set_frameRate_dyn();

		 ::lime::app::Preloader get_preloader();
		::Dynamic get_preloader_dyn();

		 ::lime::graphics::Renderer get_renderer();
		::Dynamic get_renderer_dyn();

		::Array< ::Dynamic> get_renderers();
		::Dynamic get_renderers_dyn();

		 ::lime::ui::Window get_window();
		::Dynamic get_window_dyn();

		::Array< ::Dynamic> get_windows();
		::Dynamic get_windows_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Application */ 
