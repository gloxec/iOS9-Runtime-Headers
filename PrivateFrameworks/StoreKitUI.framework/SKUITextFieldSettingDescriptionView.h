/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextFieldSettingDescriptionView : SKUIFieldSettingDescriptionView <UITextFieldDelegate> {
    float  _aggregateLabelWidth;
    SKUIInputViewElement * _inputViewElement;
    UILabel * _label;
    SKUIFieldSettingDescription * _settingDescription;
    UITextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (struct CGSize { float x1; float x2; })preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_addInputWithElement:(id)arg1;
- (void)_addLabelWithElement:(id)arg1;
- (void)_addTextInputWithElement:(id)arg1;
- (void)_alignView:(id)arg1 withBaselineLabel:(id)arg2 font:(id)arg3 offsetX:(float)arg4 fitWidth:(float)arg5;
- (void)_arrangeTextField:(id)arg1 andLabel:(id)arg2;
- (id)_currentControllerValue;
- (void)_fillLayoutWithView:(id)arg1 labelForBaselinePosition:(id)arg2;
- (void)_updateTextFieldValue:(id)arg1;
- (void)beginEdits;
- (void)commitEdits;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)tintColorDidChange;

@end
