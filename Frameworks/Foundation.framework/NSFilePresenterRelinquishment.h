/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePresenterRelinquishment : NSObject {
    NSCountedSet * _blockingAccessClaimIDs;
    id /* block */  _reacquirer;
}

- (BOOL)addBlockingAccessClaimID:(id)arg1;
- (void)dealloc;
- (void)removeAllBlockingAccessClaimIDs;
- (void)removeBlockingAccessClaimID:(id)arg1;
- (void)removeBlockingAccessClaimID:(id)arg1 thenContinue:(id /* block */)arg2;
- (void)setReacquirer:(id /* block */)arg1;

@end
