/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAsset : NSObject {
    id  _internal;
}

@property (getter=isEditable, nonatomic, readonly) BOOL editable;
@property (nonatomic, retain) ALAssetPrivate *internal;
@property (nonatomic, readonly) ALAsset *originalAsset;

+ (struct CGSize { float x1; float x2; })largePreviewImageSizeForSize:(struct CGSize { float x1; float x2; })arg1;

- (id)_newContentEditingOutputWithType:(int)arg1;
- (id)_typeAsString;
- (id)_uuid;
- (struct CGImage { }*)aspectRatioThumbnail;
- (void)dealloc;
- (id)defaultRepresentation;
- (id)description;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;
- (id)internal;
- (BOOL)isDeletable;
- (BOOL)isEditable;
- (BOOL)isValid;
- (id)originalAsset;
- (id)representationForUTI:(id)arg1;
- (void)requestDefaultRepresentation;
- (void)setExternalUsageIntent:(unsigned int)arg1;
- (void)setImageData:(id)arg1 metadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setInternal:(id)arg1;
- (void)setLargePreviewImageWithImageData:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setVideoAtPath:(id)arg1 completionBlock:(id /* block */)arg2;
- (struct CGImage { }*)thumbnail;
- (id)valueForProperty:(id)arg1;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id /* block */)arg2;

@end
