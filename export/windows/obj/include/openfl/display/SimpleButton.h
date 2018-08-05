// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_display_SimpleButton
#define INCLUDED_openfl_display_SimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,ui,MouseCursor)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLite)
HX_DECLARE_CLASS3(openfl,_internal,symbols,ButtonSymbol)
HX_DECLARE_CLASS3(openfl,_internal,symbols,SWFSymbol)
HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,CanvasRenderer)
HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES SimpleButton_obj : public  ::openfl::display::InteractiveObject_obj
{
	public:
		typedef  ::openfl::display::InteractiveObject_obj super;
		typedef SimpleButton_obj OBJ_;
		SimpleButton_obj();

	public:
		enum { _hx_ClassId = 0x3326e816 };

		void __construct( ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.SimpleButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.SimpleButton"); }
		static hx::ObjectPtr< SimpleButton_obj > __new( ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState);
		static hx::ObjectPtr< SimpleButton_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject upState, ::openfl::display::DisplayObject overState, ::openfl::display::DisplayObject downState, ::openfl::display::DisplayObject hitTestState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleButton_obj();

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
		::String __ToString() const { return HX_HCSTRING("SimpleButton","\xe4","\x57","\x52","\xed"); }

		static  ::openfl::_internal::swf::SWFLite _hx___initSWF;
		static  ::openfl::_internal::symbols::ButtonSymbol _hx___initSymbol;
		bool enabled;
		bool trackAsMenu;
		bool useHandCursor;
		 ::openfl::display::DisplayObject _hx___currentState;
		 ::openfl::display::DisplayObject _hx___downState;
		 ::openfl::display::DisplayObject _hx___hitTestState;
		bool _hx___ignoreEvent;
		 ::openfl::display::DisplayObject _hx___overState;
		 ::openfl::_Vector::ObjectVector _hx___previousStates;
		 ::openfl::media::SoundTransform _hx___soundTransform;
		 ::openfl::_internal::symbols::ButtonSymbol _hx___symbol;
		 ::openfl::display::DisplayObject _hx___upState;
		void _hx___fromSymbol( ::openfl::_internal::swf::SWFLite swf, ::openfl::_internal::symbols::ButtonSymbol symbol);
		::Dynamic _hx___fromSymbol_dyn();

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		void _hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		 ::lime::ui::MouseCursor _hx___getCursor();

		bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		bool _hx___hitTestMask(Float x,Float y);

		void _hx___renderCairo( ::openfl::display::CairoRenderer renderer);

		void _hx___renderCairoMask( ::openfl::display::CairoRenderer renderer);

		void _hx___renderCanvas( ::openfl::display::CanvasRenderer renderer);

		void _hx___renderCanvasMask( ::openfl::display::CanvasRenderer renderer);

		void _hx___renderDOM( ::openfl::display::DOMRenderer renderer);

		void _hx___renderGL( ::openfl::display::OpenGLRenderer renderer);

		void _hx___renderGLMask( ::openfl::display::OpenGLRenderer renderer);

		void _hx___setStageReference( ::openfl::display::Stage stage);

		void _hx___setTransformDirty();

		void _hx___update(bool transformOnly,bool updateChildren);

		void _hx___updateChildren(bool transformOnly);

		void _hx___updateTransforms( ::openfl::geom::Matrix overrideTransform);

		 ::openfl::display::DisplayObject get_downState();
		::Dynamic get_downState_dyn();

		 ::openfl::display::DisplayObject set_downState( ::openfl::display::DisplayObject downState);
		::Dynamic set_downState_dyn();

		 ::openfl::display::DisplayObject get_hitTestState();
		::Dynamic get_hitTestState_dyn();

		 ::openfl::display::DisplayObject set_hitTestState( ::openfl::display::DisplayObject hitTestState);
		::Dynamic set_hitTestState_dyn();

		 ::openfl::display::DisplayObject get_overState();
		::Dynamic get_overState_dyn();

		 ::openfl::display::DisplayObject set_overState( ::openfl::display::DisplayObject overState);
		::Dynamic set_overState_dyn();

		 ::openfl::media::SoundTransform get_soundTransform();
		::Dynamic get_soundTransform_dyn();

		 ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		::Dynamic set_soundTransform_dyn();

		 ::openfl::display::DisplayObject get_upState();
		::Dynamic get_upState_dyn();

		 ::openfl::display::DisplayObject set_upState( ::openfl::display::DisplayObject upState);
		::Dynamic set_upState_dyn();

		 ::openfl::display::DisplayObject set___currentState( ::openfl::display::DisplayObject value);
		::Dynamic set___currentState_dyn();

		void _hx___this_onMouseDown( ::openfl::events::MouseEvent event);
		::Dynamic _hx___this_onMouseDown_dyn();

		void _hx___this_onMouseOut( ::openfl::events::MouseEvent event);
		::Dynamic _hx___this_onMouseOut_dyn();

		void _hx___this_onMouseOver( ::openfl::events::MouseEvent event);
		::Dynamic _hx___this_onMouseOver_dyn();

		void _hx___this_onMouseUp( ::openfl::events::MouseEvent event);
		::Dynamic _hx___this_onMouseUp_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_SimpleButton */ 
