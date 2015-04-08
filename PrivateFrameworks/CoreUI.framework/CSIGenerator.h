/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDGradient, CUIShapeEffectPreset, NSData, NSDate, NSMutableArray, NSString;

@interface CSIGenerator : NSObject {
    BOOL _allowsMultiPassEncoding;
    NSMutableArray *_bitmaps;
    int _blendMode;
    short _colorSpaceID;
    CUIShapeEffectPreset *_effectPreset;
    int _exifOrientation;
    CUIPSDGradient *_gradient;
    BOOL _isExcludedFromFilter;
    BOOL _isFPOHint;
    BOOL _isVectorBased;
    short _layout;
    NSMutableArray *_metrics;
    NSDate *_modtime;
    NSString *_name;
    float _opacity;
    unsigned int _pixelFormat;
    NSData *_rawData;
    unsigned long _rowbytes;
    unsigned int _scaleFactor;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSMutableArray *_slices;
    int _templateRenderingMode;
    NSString *_utiType;
}

@property BOOL allowsMultiPassEncoding;
@property int blendMode;
@property short colorSpaceID;
@property(retain) CUIShapeEffectPreset * effectPreset;
@property(getter=isExcludedFromContrastFilter) BOOL excludedFromContrastFilter;
@property int exifOrientation;
@property(retain) CUIPSDGradient * gradient;
@property BOOL isRenditionFPO;
@property BOOL isVectorBased;
@property(copy) NSDate * modtime;
@property(copy) NSString * name;
@property float opacity;
@property unsigned int pixelFormat;
@property unsigned int scaleFactor;
@property int templateRenderingMode;
@property(copy) NSString * utiType;

+ (int)fileCompression;
+ (void)initialize;
+ (void)setFileCompression:(int)arg1;

- (id)CSIRepresentationWithCompression:(BOOL)arg1;
- (void)_addNodes:(id)arg1 toNodeList:(struct _csigradientdatanode { unsigned int x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; }*)arg2;
- (void)addBitmap:(id)arg1;
- (void)addMetrics:(struct { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; })arg1;
- (void)addSliceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)allowsMultiPassEncoding;
- (int)blendMode;
- (short)colorSpaceID;
- (void)dealloc;
- (id)effectPreset;
- (int)exifOrientation;
- (void)formatCSIHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (id)gradient;
- (id)initWithCanvasSize:(struct CGSize { float x1; float x2; })arg1 sliceCount:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithRawData:(id)arg1 pixelFormat:(unsigned int)arg2 layout:(short)arg3;
- (id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned int)arg2;
- (BOOL)isExcludedFromContrastFilter;
- (BOOL)isRenditionFPO;
- (BOOL)isVectorBased;
- (id)modtime;
- (id)name;
- (float)opacity;
- (unsigned int)pixelFormat;
- (unsigned int)scaleFactor;
- (void)setAllowsMultiPassEncoding:(BOOL)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setColorSpaceID:(short)arg1;
- (void)setEffectPreset:(id)arg1;
- (void)setExcludedFromContrastFilter:(BOOL)arg1;
- (void)setExifOrientation:(int)arg1;
- (void)setGradient:(id)arg1;
- (void)setIsRenditionFPO:(BOOL)arg1;
- (void)setIsVectorBased:(BOOL)arg1;
- (void)setModtime:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpacity:(float)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (void)setTemplateRenderingMode:(int)arg1;
- (void)setUtiType:(id)arg1;
- (int)templateRenderingMode;
- (id)utiType;
- (unsigned long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(BOOL)arg3;
- (unsigned long)writeGradientToData:(id)arg1;
- (void)writeHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 toData:(id)arg2;
- (unsigned long)writeRawDataToData:(id)arg1;
- (unsigned long)writeResourcesToData:(id)arg1;

@end