/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSRemoteAlertHandle : NSObject <SBSRemoteAlertClientHandle> {
    BOOL  _active;
    SBSRemoteAlertClient * _client;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    BSMachPortSendRight * _token;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

+ (id)handleWithConfiguration:(id)arg1;
+ (id)lookupHandlesForConfiguration:(id)arg1 creatingIfNone:(BOOL)arg2;

- (id)_initWithHandleToken:(id)arg1;
- (void)_queue_callObserversWithBlock:(id /* block */)arg1;
- (void)activateWithOptions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isValid;
- (void)queue_noteInvalidWithError:(id)arg1;
- (void)queue_setActive:(BOOL)arg1;
- (id)queue_token;
- (void)removeObserver:(id)arg1;

@end
