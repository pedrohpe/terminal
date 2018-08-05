// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_net_URLRequestDefaults
#include <openfl/net/URLRequestDefaults.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_21b30f6acc93c9d1_15_boot,"openfl.net.URLRequestDefaults","boot",0x717bc8bf,"openfl.net.URLRequestDefaults.boot","openfl/net/URLRequestDefaults.hx",15,0xcfcd229b)
HX_LOCAL_STACK_FRAME(_hx_pos_21b30f6acc93c9d1_16_boot,"openfl.net.URLRequestDefaults","boot",0x717bc8bf,"openfl.net.URLRequestDefaults.boot","openfl/net/URLRequestDefaults.hx",16,0xcfcd229b)
HX_LOCAL_STACK_FRAME(_hx_pos_21b30f6acc93c9d1_17_boot,"openfl.net.URLRequestDefaults","boot",0x717bc8bf,"openfl.net.URLRequestDefaults.boot","openfl/net/URLRequestDefaults.hx",17,0xcfcd229b)
namespace openfl{
namespace net{

void URLRequestDefaults_obj::__construct() { }

Dynamic URLRequestDefaults_obj::__CreateEmpty() { return new URLRequestDefaults_obj; }

void *URLRequestDefaults_obj::_hx_vtable = 0;

Dynamic URLRequestDefaults_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLRequestDefaults_obj > _hx_result = new URLRequestDefaults_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool URLRequestDefaults_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ff953f7;
}

bool URLRequestDefaults_obj::followRedirects;

Float URLRequestDefaults_obj::idleTimeout;

bool URLRequestDefaults_obj::manageCookies;

::String URLRequestDefaults_obj::userAgent;


URLRequestDefaults_obj::URLRequestDefaults_obj()
{
}

bool URLRequestDefaults_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { outValue = ( userAgent ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"idleTimeout") ) { outValue = ( idleTimeout ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"manageCookies") ) { outValue = ( manageCookies ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { outValue = ( followRedirects ); return true; }
	}
	return false;
}

bool URLRequestDefaults_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"idleTimeout") ) { idleTimeout=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"manageCookies") ) { manageCookies=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { followRedirects=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *URLRequestDefaults_obj_sMemberStorageInfo = 0;
static hx::StaticInfo URLRequestDefaults_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &URLRequestDefaults_obj::followRedirects,HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75")},
	{hx::fsFloat,(void *) &URLRequestDefaults_obj::idleTimeout,HX_HCSTRING("idleTimeout","\xed","\x65","\x58","\x2d")},
	{hx::fsBool,(void *) &URLRequestDefaults_obj::manageCookies,HX_HCSTRING("manageCookies","\x6a","\x1f","\x8f","\xbc")},
	{hx::fsString,(void *) &URLRequestDefaults_obj::userAgent,HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void URLRequestDefaults_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequestDefaults_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLRequestDefaults_obj::followRedirects,"followRedirects");
	HX_MARK_MEMBER_NAME(URLRequestDefaults_obj::idleTimeout,"idleTimeout");
	HX_MARK_MEMBER_NAME(URLRequestDefaults_obj::manageCookies,"manageCookies");
	HX_MARK_MEMBER_NAME(URLRequestDefaults_obj::userAgent,"userAgent");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLRequestDefaults_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequestDefaults_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLRequestDefaults_obj::followRedirects,"followRedirects");
	HX_VISIT_MEMBER_NAME(URLRequestDefaults_obj::idleTimeout,"idleTimeout");
	HX_VISIT_MEMBER_NAME(URLRequestDefaults_obj::manageCookies,"manageCookies");
	HX_VISIT_MEMBER_NAME(URLRequestDefaults_obj::userAgent,"userAgent");
};

#endif

hx::Class URLRequestDefaults_obj::__mClass;

static ::String URLRequestDefaults_obj_sStaticFields[] = {
	HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"),
	HX_HCSTRING("idleTimeout","\xed","\x65","\x58","\x2d"),
	HX_HCSTRING("manageCookies","\x6a","\x1f","\x8f","\xbc"),
	HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"),
	::String(null())
};

void URLRequestDefaults_obj::__register()
{
	hx::Object *dummy = new URLRequestDefaults_obj;
	URLRequestDefaults_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLRequestDefaults","\x01","\x67","\x14","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLRequestDefaults_obj::__GetStatic;
	__mClass->mSetStaticField = &URLRequestDefaults_obj::__SetStatic;
	__mClass->mMarkFunc = URLRequestDefaults_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(URLRequestDefaults_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< URLRequestDefaults_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLRequestDefaults_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLRequestDefaults_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLRequestDefaults_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void URLRequestDefaults_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_21b30f6acc93c9d1_15_boot)
HXDLIN(  15)		followRedirects = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_21b30f6acc93c9d1_16_boot)
HXDLIN(  16)		idleTimeout = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_21b30f6acc93c9d1_17_boot)
HXDLIN(  17)		manageCookies = false;
            	}
}

} // end namespace openfl
} // end namespace net
