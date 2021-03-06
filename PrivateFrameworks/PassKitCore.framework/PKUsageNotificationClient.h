/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKUsageNotificationClient : NSObject <PKUsageNotificationClientExportedInterface> {
    PKXPCService * _connection;
    id /* block */  _handler;
    id /* block */  _paymentHandler;
}

- (void)dealloc;
- (id)init;
- (void)setPassUsageHandler:(id /* block */)arg1;
- (void)setPaymentUsageHandler:(id /* block */)arg1;
- (void)usedPassFromSource:(int)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3;
- (void)usedPaymentPassWithUniqueIdentifier:(id)arg1 transactionIdentifier:(id)arg2 info:(id)arg3;

@end
