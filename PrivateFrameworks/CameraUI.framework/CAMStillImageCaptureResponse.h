/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {
    BOOL  _HDREV0;
    NSString * _burstIdentifier;
    unsigned int  _burstRepresentedCount;
    NSDate * _captureDate;
    UIImage * _imageWellImage;
    NSDictionary * _metadata;
    NSString * _persistenceUUID;
}

@property (getter=isHDREV0, nonatomic, readonly) BOOL HDREV0;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned int burstRepresentedCount;
@property (nonatomic, readonly) NSDate *captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned int numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (unsigned int)burstRepresentedCount;
- (id)captureDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)imageWellImage;
- (id)initWithUUID:(id)arg1 captureDate:(id)arg2 metadata:(id)arg3 burstIdentifier:(id)arg4 burstRepresentedCount:(unsigned int)arg5 imageWellImage:(id)arg6 HDREV0:(BOOL)arg7;
- (BOOL)isHDREV0;
- (unsigned int)mediaType;
- (id)metadata;
- (unsigned int)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)placeholderImage;
- (id)stillImageMetadata;
- (id)uuid;

@end
