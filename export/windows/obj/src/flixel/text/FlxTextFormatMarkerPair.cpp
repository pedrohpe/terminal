// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_415d3a020ae56400_1089_new,"flixel.text.FlxTextFormatMarkerPair","new",0xb549f24d,"flixel.text.FlxTextFormatMarkerPair.new","flixel/text/FlxText.hx",1089,0xdf165a6e)
namespace flixel{
namespace text{

void FlxTextFormatMarkerPair_obj::__construct( ::flixel::text::FlxTextFormat format,::String marker){
            	HX_STACKFRAME(&_hx_pos_415d3a020ae56400_1089_new)
HXLINE(1090)		this->format = format;
HXLINE(1091)		this->marker = marker;
            	}

Dynamic FlxTextFormatMarkerPair_obj::__CreateEmpty() { return new FlxTextFormatMarkerPair_obj; }

void *FlxTextFormatMarkerPair_obj::_hx_vtable = 0;

Dynamic FlxTextFormatMarkerPair_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTextFormatMarkerPair_obj > _hx_result = new FlxTextFormatMarkerPair_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxTextFormatMarkerPair_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x681229bd;
}


hx::ObjectPtr< FlxTextFormatMarkerPair_obj > FlxTextFormatMarkerPair_obj::__new( ::flixel::text::FlxTextFormat format,::String marker) {
	hx::ObjectPtr< FlxTextFormatMarkerPair_obj > __this = new FlxTextFormatMarkerPair_obj();
	__this->__construct(format,marker);
	return __this;
}

hx::ObjectPtr< FlxTextFormatMarkerPair_obj > FlxTextFormatMarkerPair_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::text::FlxTextFormat format,::String marker) {
	FlxTextFormatMarkerPair_obj *__this = (FlxTextFormatMarkerPair_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxTextFormatMarkerPair_obj), true, "flixel.text.FlxTextFormatMarkerPair"));
	*(void **)__this = FlxTextFormatMarkerPair_obj::_hx_vtable;
	__this->__construct(format,marker);
	return __this;
}

FlxTextFormatMarkerPair_obj::FlxTextFormatMarkerPair_obj()
{
}

void FlxTextFormatMarkerPair_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormatMarkerPair);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(marker,"marker");
	HX_MARK_END_CLASS();
}

void FlxTextFormatMarkerPair_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(marker,"marker");
}

hx::Val FlxTextFormatMarkerPair_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"marker") ) { return hx::Val( marker ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxTextFormatMarkerPair_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::flixel::text::FlxTextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"marker") ) { marker=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormatMarkerPair_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("marker","\xba","\x75","\x70","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTextFormatMarkerPair_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxTextFormat*/ ,(int)offsetof(FlxTextFormatMarkerPair_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsString,(int)offsetof(FlxTextFormatMarkerPair_obj,marker),HX_HCSTRING("marker","\xba","\x75","\x70","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxTextFormatMarkerPair_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTextFormatMarkerPair_obj_sMemberFields[] = {
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("marker","\xba","\x75","\x70","\xba"),
	::String(null()) };

static void FlxTextFormatMarkerPair_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormatMarkerPair_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTextFormatMarkerPair_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormatMarkerPair_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTextFormatMarkerPair_obj::__mClass;

void FlxTextFormatMarkerPair_obj::__register()
{
	hx::Object *dummy = new FlxTextFormatMarkerPair_obj;
	FlxTextFormatMarkerPair_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.text.FlxTextFormatMarkerPair","\xdb","\xc7","\xdd","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTextFormatMarkerPair_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTextFormatMarkerPair_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTextFormatMarkerPair_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTextFormatMarkerPair_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTextFormatMarkerPair_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTextFormatMarkerPair_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace text
