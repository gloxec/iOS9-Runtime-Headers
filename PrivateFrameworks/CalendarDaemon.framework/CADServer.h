/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADServer : NSObject <ClientConnectionDelegate, NSXPCListenerDelegate> {
    NSXPCListener * _NSXPCListener;
    int  _backgroundTaskCount;
    BirthdayCalendarManager * _birthdayManager;
    unsigned int  _birthdayManagerGeneration;
    NSMutableSet * _clientConnections;
    NSLock * _connectionLock;
    LocalAttachmentCleanUpSupport * _localAttachmentCleanupManager;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    BOOL  _running;
    NSObject<OS_dispatch_queue> * _serverQueue;
    NSArray * _signalSensors;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_serverIdentifier;
+ (id)server;

- (void).cxx_destruct;
- (void)_dumpState;
- (void)_exitWithStatus:(int)arg1;
- (void)_handleXPCConnection:(id)arg1;
- (void)_protectedDataDidBecomeAvailable;
- (void)_registerForIdentityOrphanCleanup;
- (void)_registerForIdleChangeTrackingClientCleanup;
- (void)_registerForNotifications;
- (void)_setUpSignalHandlers;
- (void)_startBirthdayManager;
- (void)_stopBirthdayManager;
- (void)_tearDownSignalHandlers;
- (BOOL)_trimAndExtendOccurrenceCache;
- (void)_updateOccurrenceCacheTimeZone;
- (void)clientConnectionDied:(id)arg1;
- (id)clientConnectionForIdentifier:(int)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)run;
- (void)runForTesting;
- (void)shutDown;

@end
