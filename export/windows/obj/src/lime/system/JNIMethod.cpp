// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_system_JNIMethod
#include <lime/system/JNIMethod.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_39b0deb1236c4593_312_new,"lime.system.JNIMethod","new",0xca67a7f2,"lime.system.JNIMethod.new","lime/system/JNI.hx",312,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_322_callMember,"lime.system.JNIMethod","callMember",0x1acfd846,"lime.system.JNIMethod.callMember","lime/system/JNI.hx",322,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_333_callStatic,"lime.system.JNIMethod","callStatic",0x1c15d29a,"lime.system.JNIMethod.callStatic","lime/system/JNI.hx",333,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_341_getMemberMethod,"lime.system.JNIMethod","getMemberMethod",0x7872cd23,"lime.system.JNIMethod.getMemberMethod","lime/system/JNI.hx",341,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_39b0deb1236c4593_356_getStaticMethod,"lime.system.JNIMethod","getStaticMethod",0xd67b3e77,"lime.system.JNIMethod.getStaticMethod","lime/system/JNI.hx",356,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNIMethod_obj::__construct( ::Dynamic method){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_312_new)
HXDLIN( 312)		this->method = method;
            	}

Dynamic JNIMethod_obj::__CreateEmpty() { return new JNIMethod_obj; }

void *JNIMethod_obj::_hx_vtable = 0;

Dynamic JNIMethod_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JNIMethod_obj > _hx_result = new JNIMethod_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JNIMethod_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20e469de;
}

 ::Dynamic JNIMethod_obj::callMember(::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_322_callMember)
HXDLIN( 322)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callMember,return )

 ::Dynamic JNIMethod_obj::callStatic(::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_333_callStatic)
HXDLIN( 333)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callStatic,return )

 ::Dynamic JNIMethod_obj::getMemberMethod(bool useArray){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_341_getMemberMethod)
HXDLIN( 341)		if (useArray) {
HXLINE( 343)			return this->callMember_dyn();
            		}
            		else {
HXLINE( 347)			return ::Reflect_obj::makeVarArgs(this->callMember_dyn());
            		}
HXLINE( 341)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getMemberMethod,return )

 ::Dynamic JNIMethod_obj::getStaticMethod(bool useArray){
            	HX_STACKFRAME(&_hx_pos_39b0deb1236c4593_356_getStaticMethod)
HXDLIN( 356)		if (useArray) {
HXLINE( 358)			return this->callStatic_dyn();
            		}
            		else {
HXLINE( 362)			return ::Reflect_obj::makeVarArgs(this->callStatic_dyn());
            		}
HXLINE( 356)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getStaticMethod,return )


hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__new( ::Dynamic method) {
	hx::ObjectPtr< JNIMethod_obj > __this = new JNIMethod_obj();
	__this->__construct(method);
	return __this;
}

hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic method) {
	JNIMethod_obj *__this = (JNIMethod_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JNIMethod_obj), true, "lime.system.JNIMethod"));
	*(void **)__this = JNIMethod_obj::_hx_vtable;
	__this->__construct(method);
	return __this;
}

JNIMethod_obj::JNIMethod_obj()
{
}

void JNIMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMethod);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void JNIMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
}

hx::Val JNIMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return hx::Val( method ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { return hx::Val( callMember_dyn() ); }
		if (HX_FIELD_EQ(inName,"callStatic") ) { return hx::Val( callStatic_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMemberMethod") ) { return hx::Val( getMemberMethod_dyn() ); }
		if (HX_FIELD_EQ(inName,"getStaticMethod") ) { return hx::Val( getStaticMethod_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JNIMethod_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JNIMethod_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMethod_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JNIMethod_obj_sStaticStorageInfo = 0;
#endif

static ::String JNIMethod_obj_sMemberFields[] = {
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("callMember","\x98","\xb9","\xe5","\x2f"),
	HX_HCSTRING("callStatic","\xec","\xb3","\x2b","\x31"),
	HX_HCSTRING("getMemberMethod","\x91","\xe2","\xb0","\xec"),
	HX_HCSTRING("getStaticMethod","\xe5","\x53","\xb9","\x4a"),
	::String(null()) };

static void JNIMethod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNIMethod_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
};

#endif

hx::Class JNIMethod_obj::__mClass;

void JNIMethod_obj::__register()
{
	hx::Object *dummy = new JNIMethod_obj;
	JNIMethod_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.JNIMethod","\x00","\x87","\x5c","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JNIMethod_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JNIMethod_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JNIMethod_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNIMethod_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNIMethod_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNIMethod_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
