/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKFetchOperation : NSObject {
    NSUUID * _UUID;
    int  _clientPriority;
    <HKFetchOperationDelegate> * _delegate;
    int  _operationPriority;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) int clientPriority;
@property (getter=_delegate, setter=_setDelegate:, nonatomic) <HKFetchOperationDelegate> *delegate;
@property (nonatomic) int operationPriority;

- (void).cxx_destruct;
- (id)UUID;
- (void)_alertDelegateDidUpdatePriority;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (int)clientPriority;
- (id)init;
- (int)operationPriority;
- (void)setClientPriority:(int)arg1;
- (void)setOperationPriority:(int)arg1;
- (void)startOperationWithCompletion:(id /* block */)arg1;
- (void)stopOperation;

@end
