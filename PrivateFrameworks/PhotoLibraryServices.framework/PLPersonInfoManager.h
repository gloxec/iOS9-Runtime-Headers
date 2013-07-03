/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, NSString;

@interface PLPersonInfoManager : NSObject  {
    NSMutableDictionary *_personDictsForPersonID;
    NSString *_plistPath;
}

+ (id)sharedManager;

- (id)emailForPersonID:(id)arg1;
- (id)fullNameForPersonID:(id)arg1;
- (id)lastNameForPersonID:(id)arg1;
- (id)firstNameForPersonID:(id)arg1;
- (void)removePersistedInfo;
- (void)clearCacheForPersonID:(id)arg1;
- (id)phonesForInvitationRecordGUID:(id)arg1;
- (id)emailsForInvitationRecordGUID:(id)arg1;
- (void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg1;
- (void)setEmails:(id)arg1 phones:(id)arg2 forInvitationRecordGUID:(id)arg3;
- (void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 email:(id)arg4 forPersonID:(id)arg5;
- (void)_loadDictionariesIfNeeded;
- (id)plistPath;
- (id)personInfoForPersonID:(id)arg1;
- (void)setPersonInfo:(id)arg1 forPersonID:(id)arg2;
- (id)init;
- (void)dealloc;

@end