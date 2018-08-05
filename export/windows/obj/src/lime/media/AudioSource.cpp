// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeAudioSource
#include <lime/_backend/native/NativeAudioSource.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_15_new,"lime.media.AudioSource","new",0xf0422400,"lime.media.AudioSource.new","lime/media/AudioSource.hx",15,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_57_dispose,"lime.media.AudioSource","dispose",0x9c7d243f,"lime.media.AudioSource.dispose","lime/media/AudioSource.hx",57,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_64_init,"lime.media.AudioSource","init",0x46561370,"lime.media.AudioSource.init","lime/media/AudioSource.hx",64,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_71_play,"lime.media.AudioSource","play",0x4af50654,"lime.media.AudioSource.play","lime/media/AudioSource.hx",71,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_78_pause,"lime.media.AudioSource","pause",0x443a5296,"lime.media.AudioSource.pause","lime/media/AudioSource.hx",78,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_85_stop,"lime.media.AudioSource","stop",0x4cf6c862,"lime.media.AudioSource.stop","lime/media/AudioSource.hx",85,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_99_get_currentTime,"lime.media.AudioSource","get_currentTime",0x645da01d,"lime.media.AudioSource.get_currentTime","lime/media/AudioSource.hx",99,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_106_set_currentTime,"lime.media.AudioSource","set_currentTime",0x60291d29,"lime.media.AudioSource.set_currentTime","lime/media/AudioSource.hx",106,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_113_get_gain,"lime.media.AudioSource","get_gain",0xed783468,"lime.media.AudioSource.get_gain","lime/media/AudioSource.hx",113,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_120_set_gain,"lime.media.AudioSource","set_gain",0x9bd58ddc,"lime.media.AudioSource.set_gain","lime/media/AudioSource.hx",120,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_127_get_length,"lime.media.AudioSource","get_length",0xb3e8650f,"lime.media.AudioSource.get_length","lime/media/AudioSource.hx",127,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_134_set_length,"lime.media.AudioSource","set_length",0xb7660383,"lime.media.AudioSource.set_length","lime/media/AudioSource.hx",134,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_141_get_loops,"lime.media.AudioSource","get_loops",0xc5fc1986,"lime.media.AudioSource.get_loops","lime/media/AudioSource.hx",141,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_148_set_loops,"lime.media.AudioSource","set_loops",0xa94d0592,"lime.media.AudioSource.set_loops","lime/media/AudioSource.hx",148,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_155_get_position,"lime.media.AudioSource","get_position",0x75ce8d12,"lime.media.AudioSource.get_position","lime/media/AudioSource.hx",155,0xae7961b2)
HX_LOCAL_STACK_FRAME(_hx_pos_4f77a643dd1d25a9_162_set_position,"lime.media.AudioSource","set_position",0x8ac7b086,"lime.media.AudioSource.set_position","lime/media/AudioSource.hx",162,0xae7961b2)
namespace lime{
namespace media{

void AudioSource_obj::__construct( ::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset, ::Dynamic length,hx::Null< int >  __o_loops){
int offset = __o_offset.Default(0);
int loops = __o_loops.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_15_new)
HXLINE(  18)		this->onComplete =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  33)		this->buffer = buffer;
HXLINE(  34)		this->offset = offset;
HXLINE(  36)		this->backend =  ::lime::_backend::native::NativeAudioSource_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if (hx::IsNotNull( length )) {
HXLINE(  38)			_hx_tmp = hx::IsNotEq( length,(int)0 );
            		}
            		else {
HXLINE(  38)			_hx_tmp = false;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  40)			this->set_length(length);
            		}
HXLINE(  44)		this->set_loops(loops);
HXLINE(  46)		if (hx::IsNotNull( buffer )) {
HXLINE(  48)			this->init();
            		}
            	}

Dynamic AudioSource_obj::__CreateEmpty() { return new AudioSource_obj; }

void *AudioSource_obj::_hx_vtable = 0;

Dynamic AudioSource_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioSource_obj > _hx_result = new AudioSource_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool AudioSource_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08bb5e62;
}

void AudioSource_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_57_dispose)
HXDLIN(  57)		this->backend->dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,dispose,(void))

void AudioSource_obj::init(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_64_init)
HXDLIN(  64)		this->backend->init();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,init,(void))

void AudioSource_obj::play(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_71_play)
HXDLIN(  71)		this->backend->play();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,play,(void))

void AudioSource_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_78_pause)
HXDLIN(  78)		this->backend->pause();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,pause,(void))

void AudioSource_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_85_stop)
HXDLIN(  85)		this->backend->stop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,stop,(void))

int AudioSource_obj::get_currentTime(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_99_get_currentTime)
HXDLIN(  99)		return this->backend->getCurrentTime();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_currentTime,return )

int AudioSource_obj::set_currentTime(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_106_set_currentTime)
HXDLIN( 106)		return this->backend->setCurrentTime(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_currentTime,return )

Float AudioSource_obj::get_gain(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_113_get_gain)
HXDLIN( 113)		return this->backend->getGain();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_gain,return )

Float AudioSource_obj::set_gain(Float value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_120_set_gain)
HXDLIN( 120)		return this->backend->setGain(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_gain,return )

int AudioSource_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_127_get_length)
HXDLIN( 127)		return this->backend->getLength();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_length,return )

int AudioSource_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_134_set_length)
HXDLIN( 134)		return this->backend->setLength(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_length,return )

int AudioSource_obj::get_loops(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_141_get_loops)
HXDLIN( 141)		return this->backend->getLoops();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_loops,return )

int AudioSource_obj::set_loops(int value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_148_set_loops)
HXDLIN( 148)		return this->backend->setLoops(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_loops,return )

 ::lime::math::Vector4 AudioSource_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_155_get_position)
HXDLIN( 155)		return this->backend->getPosition();
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioSource_obj,get_position,return )

 ::lime::math::Vector4 AudioSource_obj::set_position( ::lime::math::Vector4 value){
            	HX_STACKFRAME(&_hx_pos_4f77a643dd1d25a9_162_set_position)
HXDLIN( 162)		return this->backend->setPosition(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioSource_obj,set_position,return )


hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__new( ::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset, ::Dynamic length,hx::Null< int >  __o_loops) {
	hx::ObjectPtr< AudioSource_obj > __this = new AudioSource_obj();
	__this->__construct(buffer,__o_offset,length,__o_loops);
	return __this;
}

hx::ObjectPtr< AudioSource_obj > AudioSource_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::media::AudioBuffer buffer,hx::Null< int >  __o_offset, ::Dynamic length,hx::Null< int >  __o_loops) {
	AudioSource_obj *__this = (AudioSource_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioSource_obj), true, "lime.media.AudioSource"));
	*(void **)__this = AudioSource_obj::_hx_vtable;
	__this->__construct(buffer,__o_offset,length,__o_loops);
	return __this;
}

AudioSource_obj::AudioSource_obj()
{
}

void AudioSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioSource);
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_END_CLASS();
}

void AudioSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(backend,"backend");
}

hx::Val AudioSource_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_gain() ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_loops() ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { return hx::Val( backend ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"get_gain") ) { return hx::Val( get_gain_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gain") ) { return hx::Val( set_gain_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_loops") ) { return hx::Val( get_loops_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_loops") ) { return hx::Val( set_loops_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_currentTime() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return hx::Val( set_position_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return hx::Val( get_currentTime_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentTime") ) { return hx::Val( set_currentTime_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AudioSource_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gain") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_gain(inValue.Cast< Float >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_loops(inValue.Cast< int >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::lime::media::AudioBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast<  ::lime::_backend::native::NativeAudioSource >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_position(inValue.Cast<  ::lime::math::Vector4 >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_currentTime(inValue.Cast< int >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("currentTime","\xe6","\xa4","\x8e","\x85"));
	outFields->push(HX_HCSTRING("gain","\x7f","\xf0","\x5e","\x44"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AudioSource_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(AudioSource_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::media::AudioBuffer*/ ,(int)offsetof(AudioSource_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(AudioSource_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsObject /*::lime::_backend::native::NativeAudioSource*/ ,(int)offsetof(AudioSource_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AudioSource_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioSource_obj_sMemberFields[] = {
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_currentTime","\x7d","\x5c","\x70","\x46"),
	HX_HCSTRING("set_currentTime","\x89","\xd9","\x3b","\x42"),
	HX_HCSTRING("get_gain","\x08","\xac","\x19","\xc4"),
	HX_HCSTRING("set_gain","\x7c","\x05","\x77","\x72"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_loops","\xe6","\x4d","\xa3","\xbc"),
	HX_HCSTRING("set_loops","\xf2","\x39","\xf4","\x9f"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	::String(null()) };

static void AudioSource_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AudioSource_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSource_obj::__mClass,"__mClass");
};

#endif

hx::Class AudioSource_obj::__mClass;

void AudioSource_obj::__register()
{
	hx::Object *dummy = new AudioSource_obj;
	AudioSource_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.AudioSource","\x0e","\x64","\xe8","\x9b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AudioSource_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioSource_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioSource_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AudioSource_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioSource_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioSource_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
