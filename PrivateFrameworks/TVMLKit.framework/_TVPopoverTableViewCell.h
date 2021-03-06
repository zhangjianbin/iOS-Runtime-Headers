/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverTableViewCell : UITableViewCell {
    IKViewElement * _cardElement;
    UIView * _cardView;
    UIView * _dimmingView;
    IKImageElement * _imageElement;
    BOOL  _imageLoaded;
    IKTextElement * _textElement;
    _TVImageView * _tvImageView;
    _TVLabel * _tvLabel;
}

@property (nonatomic, retain) IKViewElement *cardElement;
@property (nonatomic, retain) UIView *cardView;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) IKImageElement *imageElement;
@property (getter=isImageLoaded, nonatomic) BOOL imageLoaded;
@property (nonatomic, retain) IKTextElement *textElement;
@property (nonatomic, retain) _TVImageView *tvImageView;
@property (nonatomic, retain) _TVLabel *tvLabel;

+ (float)cellHeightForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)cardElement;
- (id)cardView;
- (id)dimmingView;
- (id)imageElement;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isImageLoaded;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCardElement:(id)arg1;
- (void)setCardView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setImageElement:(id)arg1;
- (void)setImageLoaded:(BOOL)arg1;
- (void)setTextElement:(id)arg1;
- (void)setTvImageView:(id)arg1;
- (void)setTvLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)textElement;
- (id)tvImageView;
- (id)tvLabel;

@end
