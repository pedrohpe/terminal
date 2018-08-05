// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_lime_media_ALAudioContext
#include <lime/media/ALAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_ALCAudioContext
#include <lime/media/ALCAudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioContext
#include <lime/media/AudioContext.h>
#endif
#ifndef INCLUDED_lime_media_AudioManager
#include <lime/media/AudioManager.h>
#endif
#ifndef INCLUDED_lime_media_openal_ALC
#include <lime/media/openal/ALC.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_31_init,"lime.media.AudioManager","init",0x83630824,"lime.media.AudioManager.init","lime/media/AudioManager.hx",31,0x63af6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_90_resume,"lime.media.AudioManager","resume",0xd988a3c1,"lime.media.AudioManager.resume","lime/media/AudioManager.hx",90,0x63af6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_117_shutdown,"lime.media.AudioManager","shutdown",0xb121e3aa,"lime.media.AudioManager.shutdown","lime/media/AudioManager.hx",117,0x63af6ea2)
HX_LOCAL_STACK_FRAME(_hx_pos_b537b97081e2aab9_152_suspend,"lime.media.AudioManager","suspend",0x09fdc6e8,"lime.media.AudioManager.suspend","lime/media/AudioManager.hx",152,0x63af6ea2)
namespace lime{
namespace media{

void AudioManager_obj::__construct() { }

Dynamic AudioManager_obj::__CreateEmpty() { return new AudioManager_obj; }

void *AudioManager_obj::_hx_vtable = 0;

Dynamic AudioManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioManager_obj > _hx_result = new AudioManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AudioManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67878622;
}

 ::lime::media::AudioContext AudioManager_obj::context;

void AudioManager_obj::init( ::lime::media::AudioContext context){
            	HX_GC_STACKFRAME(&_hx_pos_b537b97081e2aab9_31_init)
HXDLIN(  31)		if (hx::IsNull( ::lime::media::AudioManager_obj::context )) {
HXLINE(  33)			if (hx::IsNull( context )) {
HXLINE(  59)				 ::lime::media::ALCAudioContext _hx_tmp =  ::lime::media::ALCAudioContext_obj::__alloc( HX_CTX );
HXDLIN(  59)				::lime::media::AudioManager_obj::context = ::lime::media::AudioContext_obj::OPENAL(_hx_tmp, ::lime::media::ALAudioContext_obj::__alloc( HX_CTX ));
HXLINE(  61)				 ::Dynamic device = ::lime::media::openal::ALC_obj::openDevice(null());
HXLINE(  62)				 ::Dynamic ctx = ::lime::media::openal::ALC_obj::createContext(device,null());
HXLINE(  63)				::lime::media::openal::ALC_obj::makeContextCurrent(ctx);
HXLINE(  64)				::lime::media::openal::ALC_obj::processContext(ctx);
            			}
            			else {
HXLINE(  70)				::lime::media::AudioManager_obj::context = context;
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AudioManager_obj,init,(void))

void AudioManager_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_b537b97081e2aab9_90_resume)
HXDLIN(  90)		if (hx::IsNotNull( ::lime::media::AudioManager_obj::context )) {
HXLINE(  92)			 ::lime::media::AudioContext _g = ::lime::media::AudioManager_obj::context;
HXDLIN(  92)			if ((_hx_getEnumValueIndex(_g) == (int)0)) {
HXLINE(  94)				 ::lime::media::ALAudioContext al = _g->_hx_getObject(1).StaticCast<  ::lime::media::ALAudioContext >();
HXDLIN(  94)				 ::lime::media::ALCAudioContext alc = _g->_hx_getObject(0).StaticCast<  ::lime::media::ALCAudioContext >();
HXDLIN(  94)				{
HXLINE(  96)					 ::Dynamic currentContext = alc->getCurrentContext();
HXLINE(  98)					if (hx::IsNotNull( currentContext )) {
HXLINE( 100)						 ::Dynamic device = alc->getContextsDevice(currentContext);
HXLINE( 101)						alc->resumeDevice(device);
HXLINE( 102)						alc->processContext(currentContext);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,resume,(void))

void AudioManager_obj::shutdown(){
            	HX_STACKFRAME(&_hx_pos_b537b97081e2aab9_117_shutdown)
HXDLIN( 117)		if (hx::IsNotNull( ::lime::media::AudioManager_obj::context )) {
HXLINE( 119)			{
HXLINE( 119)				 ::lime::media::AudioContext _g = ::lime::media::AudioManager_obj::context;
HXDLIN( 119)				if ((_hx_getEnumValueIndex(_g) == (int)0)) {
HXLINE( 121)					 ::lime::media::ALAudioContext al = _g->_hx_getObject(1).StaticCast<  ::lime::media::ALAudioContext >();
HXDLIN( 121)					 ::lime::media::ALCAudioContext alc = _g->_hx_getObject(0).StaticCast<  ::lime::media::ALCAudioContext >();
HXDLIN( 121)					{
HXLINE( 123)						 ::Dynamic currentContext = alc->getCurrentContext();
HXLINE( 125)						if (hx::IsNotNull( currentContext )) {
HXLINE( 127)							 ::Dynamic device = alc->getContextsDevice(currentContext);
HXLINE( 128)							alc->makeContextCurrent(null());
HXLINE( 129)							alc->destroyContext(currentContext);
HXLINE( 131)							if (hx::IsNotNull( device )) {
HXLINE( 133)								alc->closeDevice(device);
            							}
            						}
            					}
            				}
            			}
HXLINE( 143)			::lime::media::AudioManager_obj::context = null();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,shutdown,(void))

void AudioManager_obj::suspend(){
            	HX_STACKFRAME(&_hx_pos_b537b97081e2aab9_152_suspend)
HXDLIN( 152)		if (hx::IsNotNull( ::lime::media::AudioManager_obj::context )) {
HXLINE( 154)			 ::lime::media::AudioContext _g = ::lime::media::AudioManager_obj::context;
HXDLIN( 154)			if ((_hx_getEnumValueIndex(_g) == (int)0)) {
HXLINE( 156)				 ::lime::media::ALAudioContext al = _g->_hx_getObject(1).StaticCast<  ::lime::media::ALAudioContext >();
HXDLIN( 156)				 ::lime::media::ALCAudioContext alc = _g->_hx_getObject(0).StaticCast<  ::lime::media::ALCAudioContext >();
HXDLIN( 156)				{
HXLINE( 158)					 ::Dynamic currentContext = alc->getCurrentContext();
HXLINE( 160)					if (hx::IsNotNull( currentContext )) {
HXLINE( 162)						alc->suspendContext(currentContext);
HXLINE( 163)						 ::Dynamic device = alc->getContextsDevice(currentContext);
HXLINE( 164)						alc->pauseDevice(device);
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AudioManager_obj,suspend,(void))


AudioManager_obj::AudioManager_obj()
{
}

bool AudioManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { outValue = ( context ); return true; }
		if (HX_FIELD_EQ(inName,"suspend") ) { outValue = suspend_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { outValue = shutdown_dyn(); return true; }
	}
	return false;
}

bool AudioManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=ioValue.Cast<  ::lime::media::AudioContext >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AudioManager_obj_sMemberStorageInfo = 0;
static hx::StaticInfo AudioManager_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::media::AudioContext*/ ,(void *) &AudioManager_obj::context,HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void AudioManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AudioManager_obj::context,"context");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioManager_obj::context,"context");
};

#endif

hx::Class AudioManager_obj::__mClass;

static ::String AudioManager_obj_sStaticFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("shutdown","\x96","\xfc","\x0b","\x6b"),
	HX_HCSTRING("suspend","\x7c","\x2f","\x4f","\xf7"),
	::String(null())
};

void AudioManager_obj::__register()
{
	hx::Object *dummy = new AudioManager_obj;
	AudioManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioManager","\xda","\xab","\xe7","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AudioManager_obj::__GetStatic;
	__mClass->mSetStaticField = &AudioManager_obj::__SetStatic;
	__mClass->mMarkFunc = AudioManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(AudioManager_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AudioManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
