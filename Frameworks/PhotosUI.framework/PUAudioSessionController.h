/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAudioSessionController : NSObject {
    BOOL  __needsUpdateAudioSessionCategory;
    AVAudioSession * _audioSession;
    NSMutableArray * _categoryStack;
    NSObject<OS_dispatch_queue> * _sessionConfigurationQueue;
    NSObject<OS_dispatch_queue> * _updateQueue;
}

@property (setter=_setNeedsUpdateAudioSessionCategory:, nonatomic) BOOL _needsUpdateAudioSessionCategory;

+ (id)sharedController;

- (void).cxx_destruct;
- (BOOL)_audioSessionIsValid;
- (void)_configureAudioSessionForToken:(id)arg1;
- (id)_currentCategoryToken;
- (void)_deregisterCategoryToken:(id)arg1;
- (void)_invalidateAudioSessionCategory;
- (BOOL)_isTokenValid:(id)arg1;
- (BOOL)_needsUpdateAudioSessionCategory;
- (void)_registerCategoryToken:(id)arg1;
- (void)_setNeedsUpdateAudioSessionCategory:(BOOL)arg1;
- (void)_updateAudioSessionCategoryIfNeeded;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)requestAudioCategory:(id)arg1;
- (id)requestAudioCategory:(id)arg1 options:(unsigned int)arg2;
- (void)tokenDidChange:(id)arg1;

@end
