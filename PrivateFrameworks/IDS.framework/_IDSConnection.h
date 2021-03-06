/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSConnection : NSObject <IDSAccountDelegate, IDSDaemonListenerProtocol> {
    IDSAccount * _account;
    NSSet * _commands;
    unsigned int  _delegateCapabilities;
    id  _delegateContext;
    NSMapTable * _delegateToInfo;
    BOOL  _indirectDelegateCallouts;
    id  _messageContext;
    NSMutableDictionary * _pendingSends;
    NSString * _serviceToken;
}

@property (nonatomic, readonly, retain) IDSAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isActive;
@property (readonly) Class superclass;

- (void)_callDelegatesWithBlock:(id /* block */)arg1;
- (void)_callDelegatesWithBlock:(id /* block */)arg1 group:(id)arg2;
- (void)_connect;
- (void)_handleLastCallForPendingIdentifier:(id)arg1 callbackID:(id)arg2;
- (void)_resendPendingSends;
- (id)_sendWithParameters:(id)arg1 options:(id)arg2 loggingType:(id)arg3 loggingDataSize:(unsigned int)arg4;
- (void)_setTemporaryMessageContext:(id)arg1;
- (BOOL)_shouldAcceptIncomingType:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 validateAliases:(BOOL)arg4;
- (void)accessoryDataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)accessoryReportMessageReceived:(id)arg1 accessoryID:(id)arg2 controllerID:(id)arg3 withGUID:(id)arg4 forTopic:(id)arg5 toIdentifier:(id)arg6 fromID:(id)arg7 context:(id)arg8;
- (id)account;
- (void)account:(id)arg1 devicesChanged:(id)arg2;
- (void)account:(id)arg1 isActiveChanged:(BOOL)arg2;
- (void)account:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)daemonConnected;
- (void)dataReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 delegateContext:(id)arg4;
- (BOOL)isActive;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 updatedWithResponseCode:(int)arg4 error:(id)arg5 lastCall:(BOOL)arg6 context:(id)arg7;
- (void)messageIdentifier:(id)arg1 alternateCallbackID:(id)arg2 forAccount:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;
- (void)messageIdentifier:(id)arg1 forTopic:(id)arg2 toIdentifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)messageReceived:(id)arg1 withGUID:(id)arg2 withPayload:(id)arg3 forTopic:(id)arg4 toIdentifier:(id)arg5 fromID:(id)arg6 context:(id)arg7;
- (void)protobufReceived:(id)arg1 withGUID:(id)arg2 forTopic:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 context:(id)arg6;
- (void)removeDelegate:(id)arg1;
- (BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (BOOL)sendServerMessage:(id)arg1 command:(id)arg2;
- (void)sessionInvitationReceivedWithPayload:(id)arg1 forTopic:(id)arg2 sessionID:(id)arg3 toIdentifier:(id)arg4 fromID:(id)arg5 transportType:(id)arg6;
- (void)setDelegateCapabilities:(unsigned int)arg1;

@end
