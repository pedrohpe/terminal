// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#define INCLUDED_openfl__internal_stage3D_SamplerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_28_new)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)

namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES SamplerState_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SamplerState_obj OBJ_;
		SamplerState_obj();

	public:
		enum { _hx_ClassId = 0x6c998e6c };

		void __construct(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated,hx::Null< bool >  __o_textureAlpha);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.SamplerState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.stage3D.SamplerState"); }

		hx::ObjectPtr< SamplerState_obj > __new(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated,hx::Null< bool >  __o_textureAlpha) {
			hx::ObjectPtr< SamplerState_obj > __this = new SamplerState_obj();
			__this->__construct(minFilter,magFilter,wrapModeS,wrapModeT,__o_lodBias,__o_maxAniso,__o_ignoreSampler,__o_centroid,__o_mipmapGenerated,__o_textureAlpha);
			return __this;
		}

		static hx::ObjectPtr< SamplerState_obj > __alloc(hx::Ctx *_hx_ctx,int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid,hx::Null< bool >  __o_mipmapGenerated,hx::Null< bool >  __o_textureAlpha) {
			SamplerState_obj *__this = (SamplerState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SamplerState_obj), false, "openfl._internal.stage3D.SamplerState"));
			*(void **)__this = SamplerState_obj::_hx_vtable;
{
Float lodBias = __o_lodBias.Default(((Float)0.0));
Float maxAniso = __o_maxAniso.Default(((Float)0.0));
bool ignoreSampler = __o_ignoreSampler.Default(false);
bool centroid = __o_centroid.Default(false);
bool mipmapGenerated = __o_mipmapGenerated.Default(false);
bool textureAlpha = __o_textureAlpha.Default(false);
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_28_new)
HXLINE(  30)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->set_minFilter(minFilter);
HXLINE(  31)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->set_magFilter(magFilter);
HXLINE(  32)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->set_wrapModeS(wrapModeS);
HXLINE(  33)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->set_wrapModeT(wrapModeT);
HXLINE(  34)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->set_lodBias(lodBias);
HXLINE(  35)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->set_maxAniso(maxAniso);
HXLINE(  36)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->ignoreSampler = ignoreSampler;
HXLINE(  37)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->centroid = centroid;
HXLINE(  38)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->mipmapGenerated = mipmapGenerated;
HXLINE(  39)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->textureAlpha = textureAlpha;
HXLINE(  41)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->_hx___samplerDirty = true;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SamplerState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SamplerState","\x09","\x30","\xd2","\x83"); }

		Float lodBias;
		int magFilter;
		Float maxAniso;
		int minFilter;
		int wrapModeS;
		int wrapModeT;
		bool centroid;
		bool ignoreSampler;
		bool mipmapGenerated;
		bool textureAlpha;
		bool _hx___samplerDirty;
		void copyFrom( ::openfl::_internal::stage3D::SamplerState other);
		::Dynamic copyFrom_dyn();

		bool equals( ::openfl::_internal::stage3D::SamplerState other);
		::Dynamic equals_dyn();

		Float set_lodBias(Float value);
		::Dynamic set_lodBias_dyn();

		int set_magFilter(int value);
		::Dynamic set_magFilter_dyn();

		Float set_maxAniso(Float value);
		::Dynamic set_maxAniso_dyn();

		int set_minFilter(int value);
		::Dynamic set_minFilter_dyn();

		int set_wrapModeS(int value);
		::Dynamic set_wrapModeS_dyn();

		int set_wrapModeT(int value);
		::Dynamic set_wrapModeT_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_SamplerState */ 
