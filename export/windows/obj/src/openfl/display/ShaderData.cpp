// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d46640c38533f59_15_new,"openfl.display.ShaderData","new",0x6406164b,"openfl.display.ShaderData.new","openfl/display/ShaderData.hx",15,0xa8261943)
namespace openfl{
namespace display{

void ShaderData_obj::__construct( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACKFRAME(&_hx_pos_8d46640c38533f59_15_new)
            	}

Dynamic ShaderData_obj::__CreateEmpty() { return new ShaderData_obj; }

void *ShaderData_obj::_hx_vtable = 0;

Dynamic ShaderData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderData_obj > _hx_result = new ShaderData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ShaderData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2602c5dd;
}


hx::ObjectPtr< ShaderData_obj > ShaderData_obj::__new( ::openfl::utils::ByteArrayData byteArray) {
	hx::ObjectPtr< ShaderData_obj > __this = new ShaderData_obj();
	__this->__construct(byteArray);
	return __this;
}

hx::ObjectPtr< ShaderData_obj > ShaderData_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::utils::ByteArrayData byteArray) {
	ShaderData_obj *__this = (ShaderData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShaderData_obj), true, "openfl.display.ShaderData"));
	*(void **)__this = ShaderData_obj::_hx_vtable;
	__this->__construct(byteArray);
	return __this;
}

ShaderData_obj::ShaderData_obj()
{
}

void ShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderData);
	HX_MARK_DYNAMIC;
	HX_MARK_END_CLASS();
}

void ShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
}

hx::Val ShaderData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

hx::Val ShaderData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void ShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ShaderData_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ShaderData_obj_sStaticStorageInfo = 0;
#endif

static void ShaderData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderData_obj::__mClass;

void ShaderData_obj::__register()
{
	hx::Object *dummy = new ShaderData_obj;
	ShaderData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.ShaderData","\xd9","\x94","\x7c","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display