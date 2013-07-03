/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVCaptureVideoDataOutputSampleBufferDelegate>, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AVCaptureVideoDataOutputInternal : NSObject  {
    <AVCaptureVideoDataOutputSampleBufferDelegate> *delegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    NSDictionary *videoSettings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } deprecatedMinFrameDuration;
    BOOL alwaysDiscardsLateVideoFrames;
}


- (id)init;
- (void)dealloc;

@end