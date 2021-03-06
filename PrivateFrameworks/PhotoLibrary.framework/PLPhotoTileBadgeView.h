/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileBadgeView : UIView {
    UIView * __backgroundView;
    UIImageView * __badgeImageView;
    UILabel * __textLabel;
    int  _numberOfPhotos;
    int  _style;
}

@property (nonatomic, readonly) UIView *_backgroundView;
@property (nonatomic, readonly) UIImageView *_badgeImageView;
@property (nonatomic, readonly) UILabel *_textLabel;
@property (nonatomic) int numberOfPhotos;
@property (nonatomic) int style;

- (id)_backgroundView;
- (id)_badgeImageView;
- (void)_commonPLPhotoTileBadgeViewInitialization;
- (id)_textLabel;
- (void)_updateBadgeImage;
- (void)_updateBadgeText;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)numberOfPhotos;
- (void)setAlpha:(float)arg1;
- (void)setNumberOfPhotos:(int)arg1;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;

@end
