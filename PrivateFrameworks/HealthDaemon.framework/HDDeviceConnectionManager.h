/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeviceConnectionManager : NSObject <HDDatabaseProtectedDataObserver> {
    BOOL  _BTLEEnabled;
    NSMutableDictionary * _activeServices;
    BOOL  _connecting;
    HDDatabase * _database;
    HDHealthDeviceManager * _deviceMgr;
    NSObject<OS_dispatch_queue> * _deviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_transactionName:(id)arg1;
+ (void)connectToService:(id)arg1;
+ (void)connectToServicesWithDeviceManager:(id)arg1 healthDatabase:(id)arg2;
+ (void)disconnectFromService:(id)arg1;
+ (void)disconnectFromServices;
+ (void)reconnectToServices;
+ (id)sharedDeviceManager;

- (void).cxx_destruct;
- (void)_connectToService:(id)arg1;
- (void)_connectToServices;
- (void)_disconnectFromService:(id)arg1;
- (void)_disconnectFromServices;
- (void)_handleBluetoothUpdates:(int)arg1;
- (void)_subscribeBluetoothStateUpdates;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (id)init;

@end