/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationFooterView : UIView {
    PKGlyphView * _glyphView;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    NSLayoutConstraint * _overallHeightConstraint;
    UILabel * _passbookPaymentDetailsView;
    UIButton * _payWithPasscodeButton;
    NSLayoutConstraint * _payWithPasscodeCenterYConstraint;
    NSLayoutConstraint * _separatorLeftConstraint;
    UIView * _separatorView;
    int  _state;
    NSString * _title;
}

@property (nonatomic) PKPaymentAuthorizationLayout *layout;
@property (nonatomic, readonly) UIButton *payWithPasscodeButton;
@property (nonatomic) int state;

- (void)_createSubviews;
- (void)_prepareConstraints;
- (id)_titleAttributedStringForState:(int)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layout;
- (id)payWithPasscodeButton;
- (void)setLayout:(id)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 string:(id)arg2 animated:(BOOL)arg3;
- (int)state;
- (void)updateConstraints;

@end
