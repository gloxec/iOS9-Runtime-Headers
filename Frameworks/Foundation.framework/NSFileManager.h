/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileManager : NSObject

@property (readonly, copy) NSString *currentDirectoryPath;
@property <NSFileManagerDelegate> *delegate;
@property (readonly, copy) <NSObject><NSCopying><NSCoding> *ubiquityIdentityToken;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)defaultManager;

- (id)URLForDirectory:(unsigned int)arg1 inDomain:(unsigned int)arg2 appropriateForURL:(id)arg3 create:(BOOL)arg4 error:(id*)arg5;
- (id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id*)arg2 error:(id*)arg3;
- (id)URLForUbiquityContainerIdentifier:(id)arg1;
- (id)URLsForDirectory:(unsigned int)arg1 inDomains:(unsigned int)arg2;
- (id)_URLForReplacingItemAtURL:(id)arg1 error:(id*)arg2;
- (id)_URLForTrashingItemAtURL:(id)arg1 create:(BOOL)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3;
- (id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(BOOL)arg2 error:(id*)arg3;
- (id)_displayPathForPath:(id)arg1;
- (id)_info;
- (void)_performRemoveFileAtPath:(id)arg1;
- (BOOL)_processCanAccessUbiquityIdentityToken;
- (BOOL)_processHasUbiquityContainerEntitlement;
- (BOOL)_processUsesCloudServices;
- (void)_registerForUbiquityAccountChangeNotifications;
- (void)_web_backgroundRemoveFileAtPath:(id)arg1;
- (void)_web_backgroundRemoveLeftoverFiles:(id)arg1;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (BOOL)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;
- (BOOL)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2;
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2;
- (BOOL)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4;
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (BOOL)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(BOOL*)arg2 traverseLink:(BOOL)arg3;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (id)_web_pathWithUniqueFilenameForPath:(id)arg1;
- (BOOL)_web_removeFileOnlyAtPath:(id)arg1;
- (id)_web_startupVolumeName_nowarn;
- (id)_web_visibleItemsInDirectoryAtPath:(id)arg1;
- (id)attributesOfFileSystemForPath:(id)arg1 error:(id*)arg2;
- (id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)changeCurrentDirectoryPath:(id)arg1;
- (BOOL)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (id)componentsToDisplayForPath:(id)arg1;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (id)contentsAtPath:(id)arg1;
- (BOOL)contentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4;
- (BOOL)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4;
- (BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id*)arg3;
- (BOOL)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id*)arg3;
- (id)currentDirectoryPath;
- (void)dealloc;
- (id)delegate;
- (id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)directoryCanBeCreatedAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(int)arg3 keepExtension:(BOOL)arg4;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(int)arg3 keepExtension:(BOOL)arg4 error:(id*)arg5;
- (id)displayNameAtPath:(id)arg1;
- (id)enumeratorAtPath:(id)arg1;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned int)arg3 errorHandler:(id /* block */)arg4;
- (BOOL)evictUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (id)extendedAttributesAtPath:(id)arg1 error:(id*)arg2;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)fileExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isDirectory:(BOOL*)arg2;
- (id)fileSystemAttributesAtPath:(id)arg1;
- (const char *)fileSystemRepresentationWithPath:(id)arg1;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
- (BOOL)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (BOOL)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (BOOL)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned int)arg2 withPath:(id)arg3;
- (BOOL)getRelationship:(int*)arg1 ofDirectory:(unsigned int)arg2 inDomain:(unsigned int)arg3 toItemAtURL:(id)arg4 error:(id*)arg5;
- (BOOL)getRelationship:(int*)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id*)arg4;
- (BOOL)isDeletableFileAtPath:(id)arg1;
- (BOOL)isExecutableFileAtPath:(id)arg1;
- (BOOL)isReadableFileAtPath:(id)arg1;
- (BOOL)isUbiquitousItemAtURL:(id)arg1;
- (BOOL)isWritableFileAtPath:(id)arg1;
- (BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned int)arg2;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (id)pathContentOfSymbolicLinkAtPath:(id)arg1;
- (BOOL)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id*)arg3;
- (BOOL)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)removeItemAtURL:(id)arg1 error:(id*)arg2;
- (BOOL)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned int)arg4 resultingItemURL:(id*)arg5 error:(id*)arg6;
- (BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (BOOL)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id*)arg4;
- (BOOL)setUbiquitous:(BOOL)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id*)arg4;
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id*)arg2;
- (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned int)arg2;
- (id)subpathsAtPath:(id)arg1;
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)trashItemAtURL:(id)arg1 resultingItemURL:(id*)arg2 error:(id*)arg3;
- (id)ubiquityIdentityToken;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

- (long long)_srDeleteAllTempFiles;
- (long long)_srDeleteFilesOlderThanTimeToLiveInSeconds:(double)arg1;
- (void)_srDeleteFilesWithPrefix:(id)arg1;
- (unsigned long long)_srDeviceFreeDiskSpace;
- (BOOL)_srDeviceHasSufficientFreeSpaceForRecording;
- (id)_srGetCreationDateForFile:(id)arg1;
- (void)_srMoveFileFromURL:(id)arg1 toURL:(id)arg2 completion:(id /* block */)arg3;
- (void)_srRemoveFile:(id)arg1 completion:(id /* block */)arg2;
- (void)_srSetupTempDirectory;
- (long long)_srSizeOfTempDir:(id*)arg1;
- (id)_srTempPath;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_web_createTemporaryFileForQuickLook:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (BOOL)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (int)brc_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)brc_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)brc_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (BOOL)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)cplFileExistsAtURL:(id)arg1;
- (BOOL)cplIsFileDoesNotExistError:(id)arg1;
- (BOOL)cplIsFileExistsError:(id)arg1;
- (BOOL)cplIsHardLinkNotPossibleError:(id)arg1;
- (BOOL)cplLinkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (BOOL)_cutIsPathOnMissingVolume:(id)arg1;
- (id)cutCreateUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)cutRandomTemporaryPathWithFileName:(id)arg1;
- (id)cutUniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

- (id)dataForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
- (BOOL)setExtendedAttributeData:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id*)arg4;
- (BOOL)setExtendedAttributeValue:(id)arg1 forKey:(id)arg2 atURL:(id)arg3 error:(id*)arg4;
- (id)stringForExtendedAttribute:(id)arg1 atURL:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices

- (id)makeUniqueDirectoryWithPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (double)_gkExpirationIntervalOfFileAtPath:(id)arg1;
- (long)_gkReadXattrBytes:(void*)arg1 count:(unsigned long)arg2 withName:(id)arg3 path:(id)arg4;
- (void)_gkRemoveXattrNamed:(id)arg1 path:(id)arg2;
- (void)_gkSetExpirationInterval:(double)arg1 ofFileAtPath:(id)arg2;
- (void)_gkWriteXattrBytes:(void*)arg1 count:(unsigned long)arg2 withName:(id)arg3 path:(id)arg4;

// Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage

- (int)gs_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (id)gs_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 andExtension:(id)arg3 error:(id*)arg4;
- (id)gs_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (id)_generateLinkForURL:(id)arg1;
- (BOOL)_isPathOnMissingVolume:(id)arg1;
- (BOOL)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4 asCopy:(BOOL)arg5;
- (id)_randomTemporaryPathWithFileName:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (BOOL)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id*)arg3 error:(id*)arg4;
- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (BOOL)mf_canWriteToDirectoryAtPath:(id)arg1;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (BOOL)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id*)arg3;
- (BOOL)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id*)arg4;
- (id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

- (BOOL)sfu_applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id*)arg3;
- (BOOL)sfu_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5;
- (BOOL)sfu_changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (unsigned long long)sfu_directoryUsage:(id)arg1;
- (BOOL)sfu_hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)sfu_hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)sfu_increaseFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (void)sfu_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (BOOL)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (BOOL)sfup_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 onlyIncreaseProtection:(BOOL)arg4 recursively:(BOOL)arg5 error:(id*)arg6;
- (BOOL)sfup_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (BOOL)sfup_fileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 passesTest:(id /* block */)arg3;
- (void)sfup_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 indent:(id)arg3;
- (BOOL)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(id /* block */)arg5;
- (BOOL)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (BOOL)createDirectoryIfNeededAtPath:(id)arg1 error:(id*)arg2;
- (BOOL)directoryExistsAtPath:(id)arg1;
- (BOOL)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;
- (id)tmpFileForVideoTranscodeWithExtension:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id)_safari_containerDirectory;
- (id)_safari_safariLibraryDirectory;
- (id)safari_ensureDirectoryExists:(id)arg1;
- (BOOL)safari_removeFileAtURL:(id)arg1 error:(id*)arg2;
- (id)safari_settingsDirectory;
- (id)safari_subdirectoryWithName:(id)arg1 inUserDomainOfDirectory:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)temporaryFilePathWithExtension:(id)arg1;
+ (id)temporaryFileURLWithExtension:(id)arg1;

- (BOOL)copySource:(id)arg1 toDestination:(id)arg2 withProgressionBlock:(id /* block */)arg3;
- (id)createTemporaryDirectoryAppropriateForForPath:(id)arg1 error:(id*)arg2;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)incrementalURLInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)unarchiveItemAtPath:(id)arg1 toDirectory:(id)arg2 withProgressionBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (int)rc_dataProtectionKeyBagState;
- (BOOL)rc_fileExistsAndIsInValidRecordingURL:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromCreatingItemsInDirectory:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromReadingAtPath:(id)arg1;
- (BOOL)rc_isRestrictedByFileProtectionFromWritingAtPath:(id)arg1;
- (id)rc_uniqueFileSystemURLWithPreferredURL:(id)arg1 uniquenessFormatString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_webkit_createTemporaryDirectoryWithTemplatePrefix:(id)arg1;
- (id)_webkit_pathWithUniqueFilenameForPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

+ (BOOL)_storeMovePath:(id)arg1 toPath:(id)arg2;
+ (id)cacheDirectoryPathWithName:(id)arg1;
+ (BOOL)ensureDirectoryExists:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

- (BOOL)sfu_applyFileAttributesFromDocumentAtURL:(id)arg1 toDocumentAtURL:(id)arg2 error:(id*)arg3;
- (BOOL)sfu_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 recursively:(BOOL)arg4 error:(id*)arg5;
- (BOOL)sfu_changeFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (unsigned long long)sfu_directoryUsage:(id)arg1;
- (BOOL)sfu_hasAtLeastFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)sfu_hasAtMostFileProtection:(id)arg1 atURL:(id)arg2 recursively:(BOOL)arg3;
- (BOOL)sfu_increaseFileProtectionAtURL:(id)arg1 toProtection:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (void)sfu_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (BOOL)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4;
- (BOOL)sfup_changeFileProtectionAtURL:(id)arg1 fromProtection:(id)arg2 toProtection:(id)arg3 onlyIncreaseProtection:(BOOL)arg4 recursively:(BOOL)arg5 error:(id*)arg6;
- (BOOL)sfup_fileProtection:(id)arg1 isGreaterThan:(id)arg2;
- (BOOL)sfup_fileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 passesTest:(id /* block */)arg3;
- (void)sfup_logFileProtectionAtURL:(id)arg1 recursively:(BOOL)arg2 indent:(id)arg3;
- (BOOL)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(BOOL)arg3 error:(id*)arg4 shouldUpdateAttributesHandler:(id /* block */)arg5;
- (void)tsp_assertDefaultFileProtectionAtDocumentURL:(id)arg1;
- (BOOL)tsp_copyDocumentAtURL:(id)arg1 toURL:(id)arg2 linkingData:(BOOL)arg3 error:(id*)arg4;
- (BOOL)tsp_linkDirectoryContentsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)tsp_linkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)tsp_setDefaultFileProtectionAtDocumentURL:(id)arg1 error:(id*)arg2;
- (BOOL)tsp_setDefaultFileProtectionForDirectoryPath:(id)arg1 error:(id*)arg2;
- (BOOL)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id*)arg2;

@end
