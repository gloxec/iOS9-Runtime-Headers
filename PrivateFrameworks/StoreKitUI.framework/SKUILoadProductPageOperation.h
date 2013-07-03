/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SSMetricsPageEvent, NSURL, NSObject<OS_dispatch_queue>;

@interface SKUILoadProductPageOperation : NSOperation  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _itemID;
    SSMetricsPageEvent *_metricsPageEvent;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

    NSURL *_url;
}

@property(copy) id outputBlock;
@property(readonly) SSMetricsPageEvent * metricsPageEvent;


- (id)_initSKUILoadProductPageOperation;
- (id)initWithProductPageURL:(id)arg1;
- (id)metricsPageEvent;
- (void)setOutputBlock:(id)arg1;
- (id)outputBlock;
- (id)initWithItemIdentifier:(long long)arg1;
- (void).cxx_destruct;
- (void)main;

@end