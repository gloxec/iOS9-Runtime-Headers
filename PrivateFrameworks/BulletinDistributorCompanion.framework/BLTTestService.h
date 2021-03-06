/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTTestService : NSObject {
    NSXPCConnection * _connection;
}

+ (id)sharedTestService;

- (void).cxx_destruct;
- (void)_connectIfNecessary;
- (void)_disconnect;
- (void)addBulletin:(id)arg1 forFeed:(unsigned int)arg2 playLightsAndSirens:(BOOL)arg3 attachment:(id)arg4 attachmentType:(int)arg5 completion:(id /* block */)arg6;
- (void)clearSectionInfoSentCacheWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)disableStandaloneTestModeWithCompletion:(id /* block */)arg1;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned int)arg1 maximumSendDelay:(unsigned int)arg2 minimumResponseDelay:(unsigned int)arg3 maximumResponseDelay:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)getStandaloneTestModeEnabledWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)originalSettingsWithCompletion:(id /* block */)arg1;
- (void)overriddenSettingsWithCompletion:(id /* block */)arg1;
- (void)sendAllSectionInfoWithCompletion:(id /* block */)arg1;
- (void)sendSectionInfoWithSectionID:(id)arg1 completion:(id /* block */)arg2;
- (void)settingOverridesWithCompletion:(id /* block */)arg1;
- (void)willAlertForSectionID:(id)arg1 completion:(id /* block */)arg2;

@end
