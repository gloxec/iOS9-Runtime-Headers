/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasCarouselCollectionViewCell : UICollectionViewCell <MPUExtrasCarouselCollectionViewCell, UIGestureRecognizerDelegate> {
    BOOL  _allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
    UILabel * _descriptionLabel;
    MPUContentSizeLayoutConstraint * _descriptionLabelBaselineConstraint;
    MPUExtrasZoomingImageInteractiveTransitionSourceContext * _interactiveTransitionSourceContext;
    unsigned int  _itemIndex;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    MPUContentSizeLayoutConstraint * _subtitleBaselineConstraint;
    UILabel * _subtitleLabel;
    UIView * _textContainer;
    MPUExtrasConstrainedArtworkContainerView * _thumbnailImageContainerView;
    NSLayoutConstraint * _thumbnailImageContainerViewHeightConstraint;
    UILabel * _titleLabel;
    struct CGSize { 
        float width; 
        float height; 
    }  _windowSize;
    NSString * _zoomingImageTransitionIdentifier;
}

@property (nonatomic) BOOL allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *descriptionLabel;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *descriptionLabelBaselineConstraint;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPUExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext;
@property (nonatomic) unsigned int itemIndex;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, retain) MPUContentSizeLayoutConstraint *subtitleBaselineConstraint;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *textContainer;
@property (nonatomic, readonly) float thumbnailImageContainerHeight;
@property (nonatomic, retain) MPUExtrasConstrainedArtworkContainerView *thumbnailImageContainerView;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailImageContainerViewHeightConstraint;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) struct CGSize { float x1; float x2; } windowSize;
@property (nonatomic, copy) NSString *zoomingImageTransitionIdentifier;

- (void).cxx_destruct;
- (float)_descriptionLabelTopInset;
- (void)_handlePinchGesture:(id)arg1;
- (void)_setupDescriptionLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupSubtitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_setupThumbnailImageContainerViewWithConstraintsAccumulator:(id)arg1;
- (void)_setupTitleLabelWithConstraintsAccumulator:(id)arg1;
- (void)_updateThumbnailArtworkViewBorder;
- (BOOL)allowsPinchingThumbnailImageForInteractiveZoomingImageTransition;
- (void)dealloc;
- (id)descriptionLabel;
- (id)descriptionLabelBaselineConstraint;
- (id)descriptionText;
- (id)descriptionTextStyle;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (id)interactiveTransitionSourceContext;
- (unsigned int)itemIndex;
- (id)lockupElement;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (id)pinchGestureRecognizer;
- (void)prepareForReuse;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setDescriptionLabelBaselineConstraint:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setInteractiveTransitionSourceContext:(id)arg1;
- (void)setItemIndex:(unsigned int)arg1;
- (void)setPinchGestureRecognizer:(id)arg1;
- (void)setSubtitleBaselineConstraint:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setThumbnailBorderColor:(id)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setThumbnailImageAccessibilityText:(id)arg1;
- (void)setThumbnailImageContainerView:(id)arg1;
- (void)setThumbnailImageContainerViewHeightConstraint:(id)arg1;
- (void)setThumbnailImagePlaceholder:(id)arg1;
- (void)setThumbnailMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setThumbnailOverlayImage:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setWindowSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setZoomingImageTransitionIdentifier:(id)arg1;
- (id)subtitleBaselineConstraint;
- (id)subtitleLabel;
- (id)subtitleTextStyle;
- (id)textContainer;
- (id)thumbnailImage;
- (id)thumbnailImageAccessibilityText;
- (float)thumbnailImageContainerHeight;
- (id)thumbnailImageContainerView;
- (id)thumbnailImageContainerViewHeightConstraint;
- (id)thumbnailImagePlaceholder;
- (id)titleLabel;
- (id)titleText;
- (id)titleTextStyle;
- (void)updateConstraints;
- (struct CGSize { float x1; float x2; })windowSize;
- (id)zoomingImageTransitionIdentifier;

@end
