/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLocalMediaRemoteControlContext : NSObject {
    MPAVItem * _currentlyPlayingItem;
    unsigned long long  _itemPersistentID;
    MusicAVPlayer * _player;
}

@property (nonatomic, readonly) MPAVItem *currentlyPlayingItem;
@property (nonatomic, readonly) unsigned long long itemPersistentID;
@property (nonatomic, readonly) MusicAVPlayer *player;

- (void).cxx_destruct;
- (id)currentlyPlayingItem;
- (id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2;
- (unsigned long long)itemPersistentID;
- (id)player;

@end
