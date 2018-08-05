// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_lime_text_unifill_Unicode
#include <lime/text/unifill/Unicode.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_18_decodeSurrogate,"lime.text.unifill.Unicode","decodeSurrogate",0x4bf45696,"lime.text.unifill.Unicode.decodeSurrogate","lime/text/unifill/Unicode.hx",18,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_21_encodeHighSurrogate,"lime.text.unifill.Unicode","encodeHighSurrogate",0xbebeb3ec,"lime.text.unifill.Unicode.encodeHighSurrogate","lime/text/unifill/Unicode.hx",21,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_24_encodeLowSurrogate,"lime.text.unifill.Unicode","encodeLowSurrogate",0xff0f498e,"lime.text.unifill.Unicode.encodeLowSurrogate","lime/text/unifill/Unicode.hx",24,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_27_isScalar,"lime.text.unifill.Unicode","isScalar",0xa65bcd6a,"lime.text.unifill.Unicode.isScalar","lime/text/unifill/Unicode.hx",27,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_31_isHighSurrogate,"lime.text.unifill.Unicode","isHighSurrogate",0xb809df98,"lime.text.unifill.Unicode.isHighSurrogate","lime/text/unifill/Unicode.hx",31,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_35_isLowSurrogate,"lime.text.unifill.Unicode","isLowSurrogate",0xaa143762,"lime.text.unifill.Unicode.isLowSurrogate","lime/text/unifill/Unicode.hx",35,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_10_boot,"lime.text.unifill.Unicode","boot",0xb35764e6,"lime.text.unifill.Unicode.boot","lime/text/unifill/Unicode.hx",10,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_11_boot,"lime.text.unifill.Unicode","boot",0xb35764e6,"lime.text.unifill.Unicode.boot","lime/text/unifill/Unicode.hx",11,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_12_boot,"lime.text.unifill.Unicode","boot",0xb35764e6,"lime.text.unifill.Unicode.boot","lime/text/unifill/Unicode.hx",12,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_13_boot,"lime.text.unifill.Unicode","boot",0xb35764e6,"lime.text.unifill.Unicode.boot","lime/text/unifill/Unicode.hx",13,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_14_boot,"lime.text.unifill.Unicode","boot",0xb35764e6,"lime.text.unifill.Unicode.boot","lime/text/unifill/Unicode.hx",14,0xd7e34665)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf4a2963378ffdc_15_boot,"lime.text.unifill.Unicode","boot",0xb35764e6,"lime.text.unifill.Unicode.boot","lime/text/unifill/Unicode.hx",15,0xd7e34665)
namespace lime{
namespace text{
namespace unifill{

void Unicode_obj::__construct() { }

Dynamic Unicode_obj::__CreateEmpty() { return new Unicode_obj; }

void *Unicode_obj::_hx_vtable = 0;

Dynamic Unicode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Unicode_obj > _hx_result = new Unicode_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Unicode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f8128ec;
}

int Unicode_obj::minCodePoint;

int Unicode_obj::maxCodePoint;

int Unicode_obj::minHighSurrogate;

int Unicode_obj::maxHighSurrogate;

int Unicode_obj::minLowSurrogate;

int Unicode_obj::maxLowSurrogate;

int Unicode_obj::decodeSurrogate(int hi,int lo){
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_18_decodeSurrogate)
HXDLIN(  18)		return ((int)((int)(hi - (int)55232) << (int)(int)10) | (int)((int)lo & (int)(int)1023));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Unicode_obj,decodeSurrogate,return )

int Unicode_obj::encodeHighSurrogate(int c){
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_21_encodeHighSurrogate)
HXDLIN(  21)		return (((int)c >> (int)(int)10) + (int)55232);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeHighSurrogate,return )

int Unicode_obj::encodeLowSurrogate(int c){
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_24_encodeLowSurrogate)
HXDLIN(  24)		return ((int)((int)c & (int)(int)1023) | (int)(int)56320);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,encodeLowSurrogate,return )

bool Unicode_obj::isScalar(int code){
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_27_isScalar)
HXDLIN(  27)		bool _hx_tmp;
HXDLIN(  27)		bool _hx_tmp1;
HXDLIN(  27)		if (((int)0 <= code)) {
HXDLIN(  27)			_hx_tmp1 = (code <= (int)1114111);
            		}
            		else {
HXDLIN(  27)			_hx_tmp1 = false;
            		}
HXDLIN(  27)		if (_hx_tmp1) {
HXDLIN(  27)			bool _hx_tmp2;
HXDLIN(  27)			if (((int)55296 <= code)) {
HXDLIN(  27)				_hx_tmp2 = (code <= (int)56319);
            			}
            			else {
HXDLIN(  27)				_hx_tmp2 = false;
            			}
HXDLIN(  27)			_hx_tmp = !(_hx_tmp2);
            		}
            		else {
HXDLIN(  27)			_hx_tmp = false;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXDLIN(  27)			bool _hx_tmp3;
HXDLIN(  27)			if (((int)56320 <= code)) {
HXDLIN(  27)				_hx_tmp3 = (code <= (int)57343);
            			}
            			else {
HXDLIN(  27)				_hx_tmp3 = false;
            			}
HXDLIN(  27)			return !(_hx_tmp3);
            		}
            		else {
HXDLIN(  27)			return false;
            		}
HXDLIN(  27)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isScalar,return )

bool Unicode_obj::isHighSurrogate(int code){
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_31_isHighSurrogate)
HXDLIN(  31)		if (((int)55296 <= code)) {
HXDLIN(  31)			return (code <= (int)56319);
            		}
            		else {
HXDLIN(  31)			return false;
            		}
HXDLIN(  31)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isHighSurrogate,return )

bool Unicode_obj::isLowSurrogate(int code){
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_35_isLowSurrogate)
HXDLIN(  35)		if (((int)56320 <= code)) {
HXDLIN(  35)			return (code <= (int)57343);
            		}
            		else {
HXDLIN(  35)			return false;
            		}
HXDLIN(  35)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unicode_obj,isLowSurrogate,return )


Unicode_obj::Unicode_obj()
{
}

bool Unicode_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isScalar") ) { outValue = isScalar_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isLowSurrogate") ) { outValue = isLowSurrogate_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"decodeSurrogate") ) { outValue = decodeSurrogate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isHighSurrogate") ) { outValue = isHighSurrogate_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"encodeLowSurrogate") ) { outValue = encodeLowSurrogate_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"encodeHighSurrogate") ) { outValue = encodeHighSurrogate_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Unicode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Unicode_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Unicode_obj::minCodePoint,HX_HCSTRING("minCodePoint","\xf1","\x1b","\xf4","\x75")},
	{hx::fsInt,(void *) &Unicode_obj::maxCodePoint,HX_HCSTRING("maxCodePoint","\x9f","\x70","\xe9","\xf1")},
	{hx::fsInt,(void *) &Unicode_obj::minHighSurrogate,HX_HCSTRING("minHighSurrogate","\x24","\x8d","\xff","\xed")},
	{hx::fsInt,(void *) &Unicode_obj::maxHighSurrogate,HX_HCSTRING("maxHighSurrogate","\xd2","\xd0","\xe7","\xe0")},
	{hx::fsInt,(void *) &Unicode_obj::minLowSurrogate,HX_HCSTRING("minLowSurrogate","\x56","\x7f","\x3d","\xd8")},
	{hx::fsInt,(void *) &Unicode_obj::maxLowSurrogate,HX_HCSTRING("maxLowSurrogate","\x68","\xcb","\x57","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Unicode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unicode_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_MARK_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_MARK_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Unicode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unicode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minCodePoint,"minCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxCodePoint,"maxCodePoint");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minHighSurrogate,"minHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxHighSurrogate,"maxHighSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::minLowSurrogate,"minLowSurrogate");
	HX_VISIT_MEMBER_NAME(Unicode_obj::maxLowSurrogate,"maxLowSurrogate");
};

#endif

hx::Class Unicode_obj::__mClass;

static ::String Unicode_obj_sStaticFields[] = {
	HX_HCSTRING("minCodePoint","\xf1","\x1b","\xf4","\x75"),
	HX_HCSTRING("maxCodePoint","\x9f","\x70","\xe9","\xf1"),
	HX_HCSTRING("minHighSurrogate","\x24","\x8d","\xff","\xed"),
	HX_HCSTRING("maxHighSurrogate","\xd2","\xd0","\xe7","\xe0"),
	HX_HCSTRING("minLowSurrogate","\x56","\x7f","\x3d","\xd8"),
	HX_HCSTRING("maxLowSurrogate","\x68","\xcb","\x57","\x7c"),
	HX_HCSTRING("decodeSurrogate","\xca","\x22","\xcb","\x7f"),
	HX_HCSTRING("encodeHighSurrogate","\x20","\xaa","\xc1","\x44"),
	HX_HCSTRING("encodeLowSurrogate","\xda","\x15","\xdf","\x4e"),
	HX_HCSTRING("isScalar","\xb6","\x82","\x8f","\x94"),
	HX_HCSTRING("isHighSurrogate","\xcc","\xab","\xe0","\xeb"),
	HX_HCSTRING("isLowSurrogate","\xae","\xed","\xdc","\xc5"),
	::String(null())
};

void Unicode_obj::__register()
{
	hx::Object *dummy = new Unicode_obj;
	Unicode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.unifill.Unicode","\x3a","\x3c","\x0c","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unicode_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Unicode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Unicode_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Unicode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Unicode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Unicode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Unicode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Unicode_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_10_boot)
HXDLIN(  10)		minCodePoint = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_11_boot)
HXDLIN(  11)		maxCodePoint = (int)1114111;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_12_boot)
HXDLIN(  12)		minHighSurrogate = (int)55296;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_13_boot)
HXDLIN(  13)		maxHighSurrogate = (int)56319;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_14_boot)
HXDLIN(  14)		minLowSurrogate = (int)56320;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ebf4a2963378ffdc_15_boot)
HXDLIN(  15)		maxLowSurrogate = (int)57343;
            	}
}

} // end namespace lime
} // end namespace text
} // end namespace unifill
