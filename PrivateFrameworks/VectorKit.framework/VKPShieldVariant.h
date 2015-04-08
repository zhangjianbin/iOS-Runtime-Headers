/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKPShieldVariant : PBCodable <NSCopying> {
    unsigned int _atlasIndex;
    unsigned int _backgroundColor;
    unsigned int _borderColor;
    float _capWidthLeft;
    float _capWidthRight;
    float _centerOffsetX;
    struct { 
        float *list; 
        unsigned int count; 
        unsigned int size; 
    } _centerPoints;
    struct { 
        float _a; 
        unsigned int _b; 
        unsigned int _g; 
        unsigned int _r; 
    } _fontColor;
    NSString *_fontName;
    float _fontSize;
    struct { 
        unsigned int textShadow : 1; 
        unsigned int textStroke : 1; 
        unsigned int fontColor : 1; 
        unsigned int atlasIndex : 1; 
        unsigned int backgroundColor : 1; 
        unsigned int borderColor : 1; 
        unsigned int capWidthLeft : 1; 
        unsigned int capWidthRight : 1; 
        unsigned int centerOffsetX : 1; 
        unsigned int fontSize : 1; 
        unsigned int maxDigits : 1; 
        unsigned int minDigits : 1; 
        unsigned int nonDigitFontSize : 1; 
        unsigned int paddingLeft : 1; 
        unsigned int paddingRight : 1; 
        unsigned int quadIndex : 1; 
        unsigned int textBaseline : 1; 
        unsigned int textMaskColor : 1; 
    } _has;
    struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; } *_layers;
    unsigned int _layersCount;
    unsigned int _layersSpace;
    unsigned int _maxDigits;
    unsigned int _minDigits;
    NSString *_nonDigitFontName;
    float _nonDigitFontSize;
    float _paddingLeft;
    float _paddingRight;
    unsigned int _quadIndex;
    float _textBaseline;
    int _textMaskColor;
    struct { 
        struct { 
            float _a; 
            unsigned int _b; 
            unsigned int _g; 
            unsigned int _r; 
        } _color; 
        float _offsetX; 
        float _offsetY; 
        float _size; 
        struct { 
            unsigned int offsetX : 1; 
            unsigned int offsetY : 1; 
        } _has; 
    } _textShadow;
    struct { 
        struct { 
            float _a; 
            unsigned int _b; 
            unsigned int _g; 
            unsigned int _r; 
        } _color; 
        float _width; 
    } _textStroke;
}

@property unsigned int atlasIndex;
@property unsigned int backgroundColor;
@property unsigned int borderColor;
@property float capWidthLeft;
@property float capWidthRight;
@property float centerOffsetX;
@property(readonly) float* centerPoints;
@property(readonly) unsigned int centerPointsCount;
@property struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; } fontColor;
@property(retain) NSString * fontName;
@property float fontSize;
@property BOOL hasAtlasIndex;
@property BOOL hasBackgroundColor;
@property BOOL hasBorderColor;
@property BOOL hasCapWidthLeft;
@property BOOL hasCapWidthRight;
@property BOOL hasCenterOffsetX;
@property BOOL hasFontColor;
@property(readonly) BOOL hasFontName;
@property BOOL hasFontSize;
@property BOOL hasMaxDigits;
@property BOOL hasMinDigits;
@property(readonly) BOOL hasNonDigitFontName;
@property BOOL hasNonDigitFontSize;
@property BOOL hasPaddingLeft;
@property BOOL hasPaddingRight;
@property BOOL hasQuadIndex;
@property BOOL hasTextBaseline;
@property BOOL hasTextMaskColor;
@property BOOL hasTextShadow;
@property BOOL hasTextStroke;
@property(readonly) struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }* layers;
@property(readonly) unsigned int layersCount;
@property unsigned int maxDigits;
@property unsigned int minDigits;
@property(retain) NSString * nonDigitFontName;
@property float nonDigitFontSize;
@property float paddingLeft;
@property float paddingRight;
@property unsigned int quadIndex;
@property float textBaseline;
@property int textMaskColor;
@property struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; } textShadow;
@property struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; } textStroke;

- (struct Matrix<float, 4, 1> { float x1[4]; })_colorForMaskColor:(int)arg1 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg2;
- (void)addCenterPoint:(float)arg1;
- (void)addLayer:(struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })arg1;
- (unsigned int)atlasIndex;
- (unsigned int)backgroundColor;
- (unsigned int)borderColor;
- (float)capWidthLeft;
- (float)capWidthRight;
- (float)centerOffsetX;
- (float)centerPointAtIndex:(unsigned int)arg1;
- (float*)centerPoints;
- (unsigned int)centerPointsCount;
- (void)clearCenterPoints;
- (void)clearLayers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; })fontColor;
- (id)fontName;
- (float)fontSize;
- (BOOL)hasAtlasIndex;
- (BOOL)hasBackgroundColor;
- (BOOL)hasBorderColor;
- (BOOL)hasCapWidthLeft;
- (BOOL)hasCapWidthRight;
- (BOOL)hasCenterOffsetX;
- (BOOL)hasFontColor;
- (BOOL)hasFontName;
- (BOOL)hasFontSize;
- (BOOL)hasMaxDigits;
- (BOOL)hasMinDigits;
- (BOOL)hasNonDigitFontName;
- (BOOL)hasNonDigitFontSize;
- (BOOL)hasPaddingLeft;
- (BOOL)hasPaddingRight;
- (BOOL)hasQuadIndex;
- (BOOL)hasTextBaseline;
- (BOOL)hasTextMaskColor;
- (BOOL)hasTextShadow;
- (BOOL)hasTextStroke;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })layerAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)layers;
- (unsigned int)layersCount;
- (unsigned int)maxDigits;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minDigits;
- (struct CGImage { }*)newImageWithTextureAtlases:(id)arg1 atlasToImageCache:(id)arg2 atlasToImageCacheLock:(id)arg3 contentScale:(float)arg4 colors:(struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; }*)arg5;
- (id)nonDigitFontName;
- (float)nonDigitFontSize;
- (float)paddingLeft;
- (float)paddingRight;
- (unsigned int)quadIndex;
- (BOOL)readFrom:(id)arg1;
- (void)setAtlasIndex:(unsigned int)arg1;
- (void)setBackgroundColor:(unsigned int)arg1;
- (void)setBorderColor:(unsigned int)arg1;
- (void)setCapWidthLeft:(float)arg1;
- (void)setCapWidthRight:(float)arg1;
- (void)setCenterOffsetX:(float)arg1;
- (void)setCenterPoints:(float*)arg1 count:(unsigned int)arg2;
- (void)setFontColor:(struct { float x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHasAtlasIndex:(BOOL)arg1;
- (void)setHasBackgroundColor:(BOOL)arg1;
- (void)setHasBorderColor:(BOOL)arg1;
- (void)setHasCapWidthLeft:(BOOL)arg1;
- (void)setHasCapWidthRight:(BOOL)arg1;
- (void)setHasCenterOffsetX:(BOOL)arg1;
- (void)setHasFontColor:(BOOL)arg1;
- (void)setHasFontSize:(BOOL)arg1;
- (void)setHasMaxDigits:(BOOL)arg1;
- (void)setHasMinDigits:(BOOL)arg1;
- (void)setHasNonDigitFontSize:(BOOL)arg1;
- (void)setHasPaddingLeft:(BOOL)arg1;
- (void)setHasPaddingRight:(BOOL)arg1;
- (void)setHasQuadIndex:(BOOL)arg1;
- (void)setHasTextBaseline:(BOOL)arg1;
- (void)setHasTextMaskColor:(BOOL)arg1;
- (void)setHasTextShadow:(BOOL)arg1;
- (void)setHasTextStroke:(BOOL)arg1;
- (void)setLayers:(struct { unsigned int x1; int x2; int x3; float x4; unsigned int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)arg1 count:(unsigned int)arg2;
- (void)setMaxDigits:(unsigned int)arg1;
- (void)setMinDigits:(unsigned int)arg1;
- (void)setNonDigitFontName:(id)arg1;
- (void)setNonDigitFontSize:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setQuadIndex:(unsigned int)arg1;
- (void)setTextBaseline:(float)arg1;
- (void)setTextMaskColor:(int)arg1;
- (void)setTextShadow:(struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; })arg1;
- (void)setTextStroke:(struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; })arg1;
- (float)textBaseline;
- (int)textMaskColor;
- (struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; float x3; float x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; } x5; })textShadow;
- (struct { struct { float x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; float x2; })textStroke;
- (void)writeTo:(id)arg1;

@end