/* Generated by RuntimeBrowser.
 */

@protocol AFUISpeechSynthesis <NSObject>

@required

- (void)cancel;
- (void)enqueueText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)enqueueText:(void *)arg1 isPhonetic:(void *)arg2 provisionally:(void *)arg3 eligibleAfterDuration:(void *)arg4 preparationIdentifier:(void *)arg5 completion:(void *)arg6 animationIdentifier:(void *)arg7; // needs 7 arg types, found 12: NSString *, BOOL, BOOL, double, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*, NSString *
- (void)invalidate;
- (void)skipCurrentSynthesis;

@end