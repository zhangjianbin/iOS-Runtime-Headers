/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIKeyboardCandidatePageControl;

@interface UIKeyboardCandidateView_iPad : UIKeyboardCandidateView <UICollectionViewDelegate, UIKeyboardCandidateBarDelegate> {
    UIKeyboardCandidatePageControl *_pageControl;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (float)defaultExtendedControlHeight;

- (float)_additionalClipHeight;
- (int)_clipCornersOfView:(id)arg1;
- (unsigned int)_numberOfColumns:(BOOL)arg1;
- (void)candidateBarDidScroll:(id)arg1;
- (void)dealloc;
- (void)didEndSplitTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)rightButtonYOffset;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCandidateViewExtended:(BOOL)arg1;
- (void)updatePageControlStatus;

@end