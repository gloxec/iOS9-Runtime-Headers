/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerDocumentTableViewController : UITableViewController <_UIDocumentPickerContainedViewController> {
    UIActivityIndicatorView * _initialActivityView;
    _UIDocumentPickerContainerModel * _model;
    BOOL  _monitoring;
    NSURL * _observedURL;
    UIView * _pinnedHeaderView;
    _UIDocumentPickerViewServiceViewController * _serviceViewController;
    BOOL  _shouldHideSortBar;
    _UIDocumentPickerSortOrderView * _sortView;
    BOOL  _updatesMayAnimate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *indexPathsForSelectedItems;
@property (nonatomic, retain) UIActivityIndicatorView *initialActivityView;
@property (nonatomic, retain) _UIDocumentPickerContainerModel *model;
@property (nonatomic) BOOL monitoring;
@property (nonatomic, retain) NSURL *observedURL;
@property (nonatomic, retain) UIView *pinnedHeaderView;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, retain) _UIDocumentPickerViewServiceViewController *serviceViewController;
@property (nonatomic) BOOL shouldHideSortBar;
@property (nonatomic, retain) _UIDocumentPickerSortOrderView *sortView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updatesMayAnimate;

- (void).cxx_destruct;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_unlockAnimations;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (void)didDismissSearchController:(id)arg1;
- (int)displayMode;
- (void)ensureSortViewInvisible;
- (id)indexPathsForSelectedItems;
- (id)initWithModel:(id)arg1;
- (id)initialActivityView;
- (BOOL)isEditing;
- (id)model;
- (void)modelChanged:(id)arg1;
- (BOOL)monitoring;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)observedURL;
- (void)performAction:(int)arg1 forRow:(id)arg2 view:(id)arg3;
- (id)pinnedHeaderView;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)scrollSortViewToVisible;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)serviceViewController;
- (void)setContentSizeAdjustment:(float)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIndexPathsForSelectedItems:(id)arg1;
- (void)setInitialActivityView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setMonitoring:(BOOL)arg1;
- (void)setObservedURL:(id)arg1;
- (void)setPinnedHeaderView:(id)arg1;
- (void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2;
- (void)setServiceViewController:(id)arg1;
- (void)setShouldHideSortBar:(BOOL)arg1;
- (void)setSortView:(id)arg1;
- (void)setUpdatesMayAnimate:(BOOL)arg1;
- (BOOL)shouldHideSortBar;
- (BOOL)smallCells;
- (id)sortView;
- (BOOL)supportsActions;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentInset;
- (void)updatePinnedHeader;
- (void)updateRowHeight;
- (BOOL)updatesMayAnimate;
- (BOOL)useIndentation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
