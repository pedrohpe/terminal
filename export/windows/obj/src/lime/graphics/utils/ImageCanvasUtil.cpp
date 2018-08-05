// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_26_colorTransform,"lime.graphics.utils.ImageCanvasUtil","colorTransform",0x478efac9,"lime.graphics.utils.ImageCanvasUtil.colorTransform","lime/graphics/utils/ImageCanvasUtil.hx",26,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_35_convertToCanvas,"lime.graphics.utils.ImageCanvasUtil","convertToCanvas",0x7fd81686,"lime.graphics.utils.ImageCanvasUtil.convertToCanvas","lime/graphics/utils/ImageCanvasUtil.hx",35,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_91_convertToData,"lime.graphics.utils.ImageCanvasUtil","convertToData",0x2b8bb058,"lime.graphics.utils.ImageCanvasUtil.convertToData","lime/graphics/utils/ImageCanvasUtil.hx",91,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_137_copyChannel,"lime.graphics.utils.ImageCanvasUtil","copyChannel",0xbd2cd24e,"lime.graphics.utils.ImageCanvasUtil.copyChannel","lime/graphics/utils/ImageCanvasUtil.hx",137,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_147_copyPixels,"lime.graphics.utils.ImageCanvasUtil","copyPixels",0xbf1ad802,"lime.graphics.utils.ImageCanvasUtil.copyPixels","lime/graphics/utils/ImageCanvasUtil.hx",147,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_196_createCanvas,"lime.graphics.utils.ImageCanvasUtil","createCanvas",0x3ddb6834,"lime.graphics.utils.ImageCanvasUtil.createCanvas","lime/graphics/utils/ImageCanvasUtil.hx",196,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_229_createImageData,"lime.graphics.utils.ImageCanvasUtil","createImageData",0x307c5949,"lime.graphics.utils.ImageCanvasUtil.createImageData","lime/graphics/utils/ImageCanvasUtil.hx",229,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_257_fillRect,"lime.graphics.utils.ImageCanvasUtil","fillRect",0x8e427887,"lime.graphics.utils.ImageCanvasUtil.fillRect","lime/graphics/utils/ImageCanvasUtil.hx",257,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_309_floodFill,"lime.graphics.utils.ImageCanvasUtil","floodFill",0x900e2821,"lime.graphics.utils.ImageCanvasUtil.floodFill","lime/graphics/utils/ImageCanvasUtil.hx",309,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_318_getPixel,"lime.graphics.utils.ImageCanvasUtil","getPixel",0x44040950,"lime.graphics.utils.ImageCanvasUtil.getPixel","lime/graphics/utils/ImageCanvasUtil.hx",318,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_327_getPixel32,"lime.graphics.utils.ImageCanvasUtil","getPixel32",0x541529ef,"lime.graphics.utils.ImageCanvasUtil.getPixel32","lime/graphics/utils/ImageCanvasUtil.hx",327,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_336_getPixels,"lime.graphics.utils.ImageCanvasUtil","getPixels",0x3f841d23,"lime.graphics.utils.ImageCanvasUtil.getPixels","lime/graphics/utils/ImageCanvasUtil.hx",336,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_345_merge,"lime.graphics.utils.ImageCanvasUtil","merge",0x36e8e778,"lime.graphics.utils.ImageCanvasUtil.merge","lime/graphics/utils/ImageCanvasUtil.hx",345,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_355_resize,"lime.graphics.utils.ImageCanvasUtil","resize",0xd5553d34,"lime.graphics.utils.ImageCanvasUtil.resize","lime/graphics/utils/ImageCanvasUtil.hx",355,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_383_scroll,"lime.graphics.utils.ImageCanvasUtil","scroll",0x143ebb4d,"lime.graphics.utils.ImageCanvasUtil.scroll","lime/graphics/utils/ImageCanvasUtil.hx",383,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_400_setPixel,"lime.graphics.utils.ImageCanvasUtil","setPixel",0xf26162c4,"lime.graphics.utils.ImageCanvasUtil.setPixel","lime/graphics/utils/ImageCanvasUtil.hx",400,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_409_setPixel32,"lime.graphics.utils.ImageCanvasUtil","setPixel32",0x5792c863,"lime.graphics.utils.ImageCanvasUtil.setPixel32","lime/graphics/utils/ImageCanvasUtil.hx",409,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_418_setPixels,"lime.graphics.utils.ImageCanvasUtil","setPixels",0x22d5092f,"lime.graphics.utils.ImageCanvasUtil.setPixels","lime/graphics/utils/ImageCanvasUtil.hx",418,0x78efca71)
HX_LOCAL_STACK_FRAME(_hx_pos_b4a5736184612a6f_429_sync,"lime.graphics.utils.ImageCanvasUtil","sync",0x85fe4d9b,"lime.graphics.utils.ImageCanvasUtil.sync","lime/graphics/utils/ImageCanvasUtil.hx",429,0x78efca71)
namespace lime{
namespace graphics{
namespace utils{

void ImageCanvasUtil_obj::__construct() { }

Dynamic ImageCanvasUtil_obj::__CreateEmpty() { return new ImageCanvasUtil_obj; }

void *ImageCanvasUtil_obj::_hx_vtable = 0;

Dynamic ImageCanvasUtil_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageCanvasUtil_obj > _hx_result = new ImageCanvasUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ImageCanvasUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x54aa3c6c;
}

void ImageCanvasUtil_obj::colorTransform( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_26_colorTransform)
HXLINE(  28)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE(  30)		::lime::graphics::utils::ImageDataUtil_obj::colorTransform(image,rect,colorMatrix);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,colorTransform,(void))

void ImageCanvasUtil_obj::convertToCanvas( ::lime::graphics::Image image,hx::Null< bool >  __o_clear){
bool clear = __o_clear.Default(false);
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_35_convertToCanvas)
HXLINE(  37)		 ::lime::graphics::ImageBuffer buffer = image->buffer;
HXLINE(  86)		image->type = ::lime::graphics::ImageType_obj::CANVAS_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageCanvasUtil_obj,convertToCanvas,(void))

void ImageCanvasUtil_obj::convertToData( ::lime::graphics::Image image,hx::Null< bool >  __o_clear){
bool clear = __o_clear.Default(false);
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_91_convertToData)
HXLINE(  93)		 ::lime::graphics::ImageBuffer buffer = image->buffer;
HXLINE( 132)		image->type = ::lime::graphics::ImageType_obj::DATA_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageCanvasUtil_obj,convertToData,(void))

void ImageCanvasUtil_obj::copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::ImageChannel sourceChannel, ::lime::graphics::ImageChannel destChannel){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_137_copyChannel)
HXLINE( 139)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(sourceImage,null());
HXLINE( 140)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 142)		::lime::graphics::utils::ImageDataUtil_obj::copyChannel(image,sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageCanvasUtil_obj,copyChannel,(void))

void ImageCanvasUtil_obj::copyPixels( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b4a5736184612a6f_147_copyPixels)
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		bool _hx_tmp1;
HXDLIN( 149)		bool _hx_tmp2;
HXDLIN( 149)		bool _hx_tmp3;
HXDLIN( 149)		bool _hx_tmp4;
HXDLIN( 149)		if (hx::IsNotNull( destPoint )) {
HXLINE( 149)			_hx_tmp4 = (destPoint->x >= image->width);
            		}
            		else {
HXLINE( 149)			_hx_tmp4 = true;
            		}
HXDLIN( 149)		if (!(_hx_tmp4)) {
HXLINE( 149)			_hx_tmp3 = (destPoint->y >= image->height);
            		}
            		else {
HXLINE( 149)			_hx_tmp3 = true;
            		}
HXDLIN( 149)		if (!(_hx_tmp3)) {
HXLINE( 149)			_hx_tmp2 = hx::IsNull( sourceRect );
            		}
            		else {
HXLINE( 149)			_hx_tmp2 = true;
            		}
HXDLIN( 149)		if (!(_hx_tmp2)) {
HXLINE( 149)			_hx_tmp1 = (sourceRect->width < (int)1);
            		}
            		else {
HXLINE( 149)			_hx_tmp1 = true;
            		}
HXDLIN( 149)		if (!(_hx_tmp1)) {
HXLINE( 149)			_hx_tmp = (sourceRect->height < (int)1);
            		}
            		else {
HXLINE( 149)			_hx_tmp = true;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 151)			return;
            		}
HXLINE( 155)		bool _hx_tmp5;
HXDLIN( 155)		if (hx::IsNotNull( alphaImage )) {
HXLINE( 155)			_hx_tmp5 = alphaImage->get_transparent();
            		}
            		else {
HXLINE( 155)			_hx_tmp5 = false;
            		}
HXDLIN( 155)		if (_hx_tmp5) {
HXLINE( 157)			if (hx::IsNull( alphaPoint )) {
HXLINE( 157)				alphaPoint =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            			}
HXLINE( 161)			 ::lime::graphics::Image tempData = image->clone();
HXLINE( 162)			 ::lime::math::Rectangle _hx_tmp6 =  ::lime::math::Rectangle_obj::__alloc( HX_CTX ,alphaPoint->x,alphaPoint->y,sourceRect->width,sourceRect->height);
HXDLIN( 162)			tempData->copyChannel(alphaImage,_hx_tmp6, ::lime::math::Vector2_obj::__alloc( HX_CTX ,sourceRect->x,sourceRect->y),::lime::graphics::ImageChannel_obj::ALPHA_dyn(),::lime::graphics::ImageChannel_obj::ALPHA_dyn());
HXLINE( 163)			sourceImage = tempData;
            		}
HXLINE( 167)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image,true);
HXLINE( 169)		if (!(mergeAlpha)) {
HXLINE( 171)			bool _hx_tmp7;
HXDLIN( 171)			if (image->get_transparent()) {
HXLINE( 171)				_hx_tmp7 = sourceImage->get_transparent();
            			}
            			else {
HXLINE( 171)				_hx_tmp7 = false;
            			}
HXDLIN( 171)			if (_hx_tmp7) {
HXLINE( 173)				 ::Dynamic image1 =  ::Dynamic(image->buffer->_hx___srcContext->__Field(HX_("clearRect",51,35,68,bf),hx::paccDynamic));
HXDLIN( 173)				Float _hx_tmp8 = (destPoint->x + image->offsetX);
HXDLIN( 173)				Float _hx_tmp9 = (destPoint->y + image->offsetY);
HXDLIN( 173)				Float _hx_tmp10 = (sourceRect->width + image->offsetX);
HXDLIN( 173)				image1(_hx_tmp8,_hx_tmp9,_hx_tmp10,(sourceRect->height + image->offsetY));
            			}
            		}
HXLINE( 179)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(sourceImage,null());
HXLINE( 181)		if (hx::IsNotNull( sourceImage->buffer->get_src() )) {
HXLINE( 184)			image->buffer->_hx___srcContext->__SetField(HX_("globalCompositeOperation",63,05,f9,c0),HX_("source-over",46,01,99,ce),hx::paccDynamic);
HXLINE( 186)			 ::Dynamic image2 =  ::Dynamic(image->buffer->_hx___srcContext->__Field(HX_("drawImage",b7,54,74,85),hx::paccDynamic));
HXDLIN( 186)			 ::Dynamic _hx_tmp11 = sourceImage->buffer->get_src();
HXDLIN( 186)			int _hx_tmp12 = ::Std_obj::_hx_int((sourceRect->x + sourceImage->offsetX));
HXDLIN( 186)			int _hx_tmp13 = ::Std_obj::_hx_int((sourceRect->y + sourceImage->offsetY));
HXDLIN( 186)			int _hx_tmp14 = ::Std_obj::_hx_int(sourceRect->width);
HXDLIN( 186)			int _hx_tmp15 = ::Std_obj::_hx_int(sourceRect->height);
HXDLIN( 186)			int _hx_tmp16 = ::Std_obj::_hx_int((destPoint->x + image->offsetX));
HXDLIN( 186)			int _hx_tmp17 = ::Std_obj::_hx_int((destPoint->y + image->offsetY));
HXDLIN( 186)			int _hx_tmp18 = ::Std_obj::_hx_int(sourceRect->width);
HXDLIN( 186)			image2(_hx_tmp11,_hx_tmp12,_hx_tmp13,_hx_tmp14,_hx_tmp15,_hx_tmp16,_hx_tmp17,_hx_tmp18,::Std_obj::_hx_int(sourceRect->height));
            		}
HXLINE( 190)		image->dirty = true;
HXLINE( 191)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageCanvasUtil_obj,copyPixels,(void))

void ImageCanvasUtil_obj::createCanvas( ::lime::graphics::Image image,int width,int height){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_196_createCanvas)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,createCanvas,(void))

void ImageCanvasUtil_obj::createImageData( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_229_createImageData)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageCanvasUtil_obj,createImageData,(void))

void ImageCanvasUtil_obj::fillRect( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int color,int format){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_257_fillRect)
HXLINE( 259)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image,null());
HXLINE( 261)		int r;
HXDLIN( 261)		int g;
HXDLIN( 261)		int b;
HXDLIN( 261)		int a;
HXLINE( 263)		if ((format == (int)1)) {
HXLINE( 265)			r = ((int)((int)color >> (int)(int)16) & (int)(int)255);
HXLINE( 266)			g = ((int)((int)color >> (int)(int)8) & (int)(int)255);
HXLINE( 267)			b = ((int)color & (int)(int)255);
HXLINE( 268)			if (image->get_transparent()) {
HXLINE( 268)				a = ((int)((int)color >> (int)(int)24) & (int)(int)255);
            			}
            			else {
HXLINE( 268)				a = (int)255;
            			}
            		}
            		else {
HXLINE( 272)			r = ((int)((int)color >> (int)(int)24) & (int)(int)255);
HXLINE( 273)			g = ((int)((int)color >> (int)(int)16) & (int)(int)255);
HXLINE( 274)			b = ((int)((int)color >> (int)(int)8) & (int)(int)255);
HXLINE( 275)			if (image->get_transparent()) {
HXLINE( 275)				a = ((int)color & (int)(int)255);
            			}
            			else {
HXLINE( 275)				a = (int)255;
            			}
            		}
HXLINE( 279)		bool _hx_tmp;
HXDLIN( 279)		bool _hx_tmp1;
HXDLIN( 279)		bool _hx_tmp2;
HXDLIN( 279)		if ((rect->x == (int)0)) {
HXLINE( 279)			_hx_tmp2 = (rect->y == (int)0);
            		}
            		else {
HXLINE( 279)			_hx_tmp2 = false;
            		}
HXDLIN( 279)		if (_hx_tmp2) {
HXLINE( 279)			_hx_tmp1 = (rect->width == image->width);
            		}
            		else {
HXLINE( 279)			_hx_tmp1 = false;
            		}
HXDLIN( 279)		if (_hx_tmp1) {
HXLINE( 279)			_hx_tmp = (rect->height == image->height);
            		}
            		else {
HXLINE( 279)			_hx_tmp = false;
            		}
HXDLIN( 279)		if (_hx_tmp) {
HXLINE( 281)			bool _hx_tmp3;
HXDLIN( 281)			if (image->get_transparent()) {
HXLINE( 281)				_hx_tmp3 = (a == (int)0);
            			}
            			else {
HXLINE( 281)				_hx_tmp3 = false;
            			}
HXDLIN( 281)			if (_hx_tmp3) {
HXLINE( 283)				image->buffer->_hx___srcCanvas->__SetField(HX_("width",06,b6,62,ca),image->buffer->width,hx::paccDynamic);
HXLINE( 284)				return;
            			}
            		}
HXLINE( 290)		if ((a < (int)255)) {
HXLINE( 292)			 ::Dynamic image1 =  ::Dynamic(image->buffer->_hx___srcContext->__Field(HX_("clearRect",51,35,68,bf),hx::paccDynamic));
HXDLIN( 292)			Float _hx_tmp4 = (rect->x + image->offsetX);
HXDLIN( 292)			Float _hx_tmp5 = (rect->y + image->offsetY);
HXDLIN( 292)			Float _hx_tmp6 = (rect->width + image->offsetX);
HXDLIN( 292)			image1(_hx_tmp4,_hx_tmp5,_hx_tmp6,(rect->height + image->offsetY));
            		}
HXLINE( 296)		if ((a > (int)0)) {
HXLINE( 298)			image->buffer->_hx___srcContext->__SetField(HX_("fillStyle",ae,cb,c4,52),((((((((HX_("rgba(",f4,cc,0d,e8) + r) + HX_(", ",74,26,00,00)) + g) + HX_(", ",74,26,00,00)) + b) + HX_(", ",74,26,00,00)) + ((Float)a / (Float)(int)255)) + HX_(")",29,00,00,00)),hx::paccDynamic);
HXLINE( 299)			 ::Dynamic image2 =  ::Dynamic(image->buffer->_hx___srcContext->__Field(HX_("fillRect",47,45,b9,6c),hx::paccDynamic));
HXDLIN( 299)			Float _hx_tmp7 = (rect->x + image->offsetX);
HXDLIN( 299)			Float _hx_tmp8 = (rect->y + image->offsetY);
HXDLIN( 299)			Float _hx_tmp9 = (rect->width + image->offsetX);
HXDLIN( 299)			image2(_hx_tmp7,_hx_tmp8,_hx_tmp9,(rect->height + image->offsetY));
            		}
HXLINE( 303)		image->dirty = true;
HXLINE( 304)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,fillRect,(void))

void ImageCanvasUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_309_floodFill)
HXLINE( 311)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 313)		::lime::graphics::utils::ImageDataUtil_obj::floodFill(image,x,y,color,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,floodFill,(void))

int ImageCanvasUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_318_getPixel)
HXLINE( 320)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 322)		return ::lime::graphics::utils::ImageDataUtil_obj::getPixel(image,x,y,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel,return )

int ImageCanvasUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_327_getPixel32)
HXLINE( 329)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 331)		return ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(image,x,y,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageCanvasUtil_obj,getPixel32,return )

 ::haxe::io::Bytes ImageCanvasUtil_obj::getPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect,int format){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_336_getPixels)
HXLINE( 338)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 340)		return ::lime::graphics::utils::ImageDataUtil_obj::getPixels(image,rect,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,getPixels,return )

void ImageCanvasUtil_obj::merge( ::lime::graphics::Image image, ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_345_merge)
HXLINE( 347)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(sourceImage,null());
HXLINE( 348)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 350)		::lime::graphics::utils::ImageDataUtil_obj::merge(image,sourceImage,sourceRect,destPoint,redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageCanvasUtil_obj,merge,(void))

void ImageCanvasUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_355_resize)
HXLINE( 357)		 ::lime::graphics::ImageBuffer buffer = image->buffer;
HXLINE( 359)		if (hx::IsNull( buffer->_hx___srcCanvas )) {
HXLINE( 361)			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(image,newWidth,newHeight);
HXLINE( 362)			 ::Dynamic buffer1 =  ::Dynamic(buffer->_hx___srcContext->__Field(HX_("drawImage",b7,54,74,85),hx::paccDynamic));
HXDLIN( 362)			buffer1(buffer->get_src(),(int)0,(int)0,newWidth,newHeight);
            		}
            		else {
HXLINE( 366)			::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image,true);
HXLINE( 367)			 ::Dynamic sourceCanvas = buffer->_hx___srcCanvas;
HXLINE( 368)			buffer->_hx___srcCanvas = null();
HXLINE( 369)			::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(image,newWidth,newHeight);
HXLINE( 370)			buffer->_hx___srcContext->__Field(HX_("drawImage",b7,54,74,85),hx::paccDynamic)(sourceCanvas,(int)0,(int)0,newWidth,newHeight);
            		}
HXLINE( 374)		buffer->_hx___srcImageData = null();
HXLINE( 375)		buffer->data = null();
HXLINE( 377)		image->dirty = true;
HXLINE( 378)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,resize,(void))

void ImageCanvasUtil_obj::scroll( ::lime::graphics::Image image,int x,int y){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_383_scroll)
HXLINE( 385)		bool _hx_tmp;
HXDLIN( 385)		if ((hx::Mod(x,image->width) == (int)0)) {
HXLINE( 385)			_hx_tmp = (hx::Mod(y,image->height) == (int)0);
            		}
            		else {
HXLINE( 385)			_hx_tmp = false;
            		}
HXDLIN( 385)		if (_hx_tmp) {
HXLINE( 385)			return;
            		}
HXLINE( 387)		 ::lime::graphics::Image copy = image->clone();
HXLINE( 389)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(image,true);
HXLINE( 391)		image->buffer->_hx___srcContext->__Field(HX_("clearRect",51,35,68,bf),hx::paccDynamic)(x,y,image->width,image->height);
HXLINE( 392)		 ::Dynamic image1 =  ::Dynamic(image->buffer->_hx___srcContext->__Field(HX_("drawImage",b7,54,74,85),hx::paccDynamic));
HXDLIN( 392)		image1(copy->get_src(),x,y);
HXLINE( 394)		image->dirty = true;
HXLINE( 395)		image->version++;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageCanvasUtil_obj,scroll,(void))

void ImageCanvasUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_400_setPixel)
HXLINE( 402)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 404)		::lime::graphics::utils::ImageDataUtil_obj::setPixel(image,x,y,color,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel,(void))

void ImageCanvasUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_409_setPixel32)
HXLINE( 411)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 413)		::lime::graphics::utils::ImageDataUtil_obj::setPixel32(image,x,y,color,format);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixel32,(void))

void ImageCanvasUtil_obj::setPixels( ::lime::graphics::Image image, ::lime::math::Rectangle rect, ::lime::utils::BytePointerData bytePointer,int format, ::lime::_hx_system::Endian endian){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_418_setPixels)
HXLINE( 420)		::lime::graphics::utils::ImageCanvasUtil_obj::convertToData(image,null());
HXLINE( 422)		::lime::graphics::utils::ImageDataUtil_obj::setPixels(image,rect,bytePointer,format,endian);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageCanvasUtil_obj,setPixels,(void))

void ImageCanvasUtil_obj::sync( ::lime::graphics::Image image,bool clear){
            	HX_STACKFRAME(&_hx_pos_b4a5736184612a6f_429_sync)
HXDLIN( 429)		if (hx::IsNull( image )) {
HXDLIN( 429)			return;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageCanvasUtil_obj,sync,(void))


ImageCanvasUtil_obj::ImageCanvasUtil_obj()
{
}

bool ImageCanvasUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sync") ) { outValue = sync_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"scroll") ) { outValue = scroll_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCanvas") ) { outValue = createCanvas_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToData") ) { outValue = convertToData_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToCanvas") ) { outValue = convertToCanvas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createImageData") ) { outValue = createImageData_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ImageCanvasUtil_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ImageCanvasUtil_obj_sStaticStorageInfo = 0;
#endif

static void ImageCanvasUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageCanvasUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageCanvasUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageCanvasUtil_obj::__mClass;

static ::String ImageCanvasUtil_obj_sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("convertToCanvas","\xc6","\x61","\xe8","\x14"),
	HX_HCSTRING("convertToData","\x98","\xab","\x76","\xb3"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("createCanvas","\xf4","\x94","\x97","\xda"),
	HX_HCSTRING("createImageData","\x89","\xa4","\x8c","\xc5"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("sync","\x5b","\xba","\x5f","\x4c"),
	::String(null())
};

void ImageCanvasUtil_obj::__register()
{
	hx::Object *dummy = new ImageCanvasUtil_obj;
	ImageCanvasUtil_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageCanvasUtil","\x2e","\x95","\x3e","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageCanvasUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageCanvasUtil_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ImageCanvasUtil_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageCanvasUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageCanvasUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageCanvasUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageCanvasUtil_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
