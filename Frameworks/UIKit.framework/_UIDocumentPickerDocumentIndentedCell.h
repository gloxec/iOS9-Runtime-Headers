/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerDocumentIndentedCell : UITableViewCell <_UIDocumentPickerDocumentTableCell> {
    UIView * _iconCenteringView;
    UIImageView * _iconView;
    _UIDocumentPickerContainerItem * _item;
    _UIDocumentPickerDocumentTableViewController * _tableView;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *iconCenteringView;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) _UIDocumentPickerContainerItem *item;
@property (readonly) Class superclass;
@property (nonatomic) _UIDocumentPickerDocumentTableViewController *tableView;
@property (nonatomic, retain) UILabel *titleLabel;

+ (struct CGSize { float x1; float x2; })thumbnailSize;

- (void).cxx_destruct;
- (id)iconCenteringView;
- (id)iconView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)reloadItem:(BOOL)arg1;
- (void)setIconCenteringView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)tableView;
- (id)titleLabel;

@end
