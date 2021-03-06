/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLSocialServiceSetupTableViewSection : NSObject {
    MSCLAccountStore * _accountStore;
    SKUIClientContext * _clientContext;
    NSArray * _facebookPages;
    UIImage * _image;
    MSCLSocialService * _service;
}

@property (nonatomic, readonly) MSCLAccountStore *accountStore;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) NSArray *facebookPages;
@property (nonatomic, readonly) MSCLSocialService *service;

- (void).cxx_destruct;
- (int)_cellTypeForIndexPath:(id)arg1;
- (id)_displayNameForAccount:(id)arg1;
- (void)_openFacebookPreferences;
- (id)_selectedFacebookPageForAccount:(id)arg1;
- (id)_serviceTitle;
- (void)_switchAction:(id)arg1;
- (id)accountStore;
- (id)clientContext;
- (id)facebookPages;
- (id)initWithService:(id)arg1 accountStore:(id)arg2;
- (id)performActionForIndexPath:(id)arg1 parentViewController:(id)arg2;
- (void)registerReusableCellsWithTableView:(id)arg1;
- (id)service;
- (void)setClientContext:(id)arg1;
- (void)setFacebookPages:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
