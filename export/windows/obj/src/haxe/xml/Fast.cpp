// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29a259f17af427cd_211_new,"haxe.xml.Fast","new",0xda21546d,"haxe.xml.Fast.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",211,0x60a2153a)
namespace haxe{
namespace xml{

void Fast_obj::__construct( ::Xml x){
            	HX_GC_STACKFRAME(&_hx_pos_29a259f17af427cd_211_new)
HXLINE( 212)		bool _hx_tmp;
HXDLIN( 212)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 212)			_hx_tmp = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 212)			_hx_tmp = false;
            		}
HXDLIN( 212)		if (_hx_tmp) {
HXLINE( 213)			HX_STACK_DO_THROW((HX_("Invalid nodeType ",3b,e0,cb,e1) + x->nodeType));
            		}
HXLINE( 214)		this->x = x;
HXLINE( 215)		this->node =  ::haxe::xml::_Fast::NodeAccess_obj::__alloc( HX_CTX ,x);
HXLINE( 216)		this->nodes =  ::haxe::xml::_Fast::NodeListAccess_obj::__alloc( HX_CTX ,x);
HXLINE( 217)		this->att =  ::haxe::xml::_Fast::AttribAccess_obj::__alloc( HX_CTX ,x);
HXLINE( 218)		this->has =  ::haxe::xml::_Fast::HasAttribAccess_obj::__alloc( HX_CTX ,x);
HXLINE( 219)		this->hasNode =  ::haxe::xml::_Fast::HasNodeAccess_obj::__alloc( HX_CTX ,x);
            	}

Dynamic Fast_obj::__CreateEmpty() { return new Fast_obj; }

void *Fast_obj::_hx_vtable = 0;

Dynamic Fast_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Fast_obj > _hx_result = new Fast_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Fast_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3b1b716d;
}


hx::ObjectPtr< Fast_obj > Fast_obj::__new( ::Xml x) {
	hx::ObjectPtr< Fast_obj > __this = new Fast_obj();
	__this->__construct(x);
	return __this;
}

hx::ObjectPtr< Fast_obj > Fast_obj::__alloc(hx::Ctx *_hx_ctx, ::Xml x) {
	Fast_obj *__this = (Fast_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Fast_obj), true, "haxe.xml.Fast"));
	*(void **)__this = Fast_obj::_hx_vtable;
	__this->__construct(x);
	return __this;
}

Fast_obj::Fast_obj()
{
}

void Fast_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fast);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(att,"att");
	HX_MARK_MEMBER_NAME(has,"has");
	HX_MARK_MEMBER_NAME(hasNode,"hasNode");
	HX_MARK_END_CLASS();
}

void Fast_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(att,"att");
	HX_VISIT_MEMBER_NAME(has,"has");
	HX_VISIT_MEMBER_NAME(hasNode,"hasNode");
}

hx::Val Fast_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { return hx::Val( att ); }
		if (HX_FIELD_EQ(inName,"has") ) { return hx::Val( has ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return hx::Val( node ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return hx::Val( nodes ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { return hx::Val( hasNode ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Fast_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast<  ::Xml >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"att") ) { att=inValue.Cast<  ::haxe::xml::_Fast::AttribAccess >(); return inValue; }
		if (HX_FIELD_EQ(inName,"has") ) { has=inValue.Cast<  ::haxe::xml::_Fast::HasAttribAccess >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast<  ::haxe::xml::_Fast::NodeAccess >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast<  ::haxe::xml::_Fast::NodeListAccess >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNode") ) { hasNode=inValue.Cast<  ::haxe::xml::_Fast::HasNodeAccess >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fast_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"));
	outFields->push(HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"));
	outFields->push(HX_HCSTRING("att","\x21","\x00","\x4a","\x00"));
	outFields->push(HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"));
	outFields->push(HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Fast_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Fast_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeAccess*/ ,(int)offsetof(Fast_obj,node),HX_HCSTRING("node","\x02","\x0a","\x0a","\x49")},
	{hx::fsObject /*::haxe::xml::_Fast::NodeListAccess*/ ,(int)offsetof(Fast_obj,nodes),HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f")},
	{hx::fsObject /*::haxe::xml::_Fast::AttribAccess*/ ,(int)offsetof(Fast_obj,att),HX_HCSTRING("att","\x21","\x00","\x4a","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasAttribAccess*/ ,(int)offsetof(Fast_obj,has),HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00")},
	{hx::fsObject /*::haxe::xml::_Fast::HasNodeAccess*/ ,(int)offsetof(Fast_obj,hasNode),HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Fast_obj_sStaticStorageInfo = 0;
#endif

static ::String Fast_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("node","\x02","\x0a","\x0a","\x49"),
	HX_HCSTRING("nodes","\x31","\xb8","\xbe","\x9f"),
	HX_HCSTRING("att","\x21","\x00","\x4a","\x00"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("hasNode","\x7c","\x2a","\x4e","\x18"),
	::String(null()) };

static void Fast_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Fast_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fast_obj::__mClass,"__mClass");
};

#endif

hx::Class Fast_obj::__mClass;

void Fast_obj::__register()
{
	hx::Object *dummy = new Fast_obj;
	Fast_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml.Fast","\xfb","\x99","\x91","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Fast_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Fast_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fast_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Fast_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Fast_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Fast_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml