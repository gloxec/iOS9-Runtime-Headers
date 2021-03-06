/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKAudioNode : SKNode <NSCoding> {
    BOOL  _autoplayLooped;
    BOOL  _positional;
    struct SKCAudioNode { int (**x1)(); id x2; id x3; struct SKCNode {} x4; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_5_1_1; struct SKCNode {} **x_5_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_5_1_3; } x5; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_6_1_1; struct SKCNode {} **x_6_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_6_1_3; } x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_7_1_1; struct SKCNode {} **x_7_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_7_1_3; } x7; id x8; float x9; bool x10; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_11_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_11_1_2; } x11; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_12_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_12_1_2; } x12; bool x13; id x14; int x15; bool x16; float x17; float x18; bool x19; bool x20; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_21_1_1[4]; } x21; id x22; id x23; bool x24; bool x25; } * _skcAudioNode;
}

@property (nonatomic) BOOL autoplayLooped;
@property (nonatomic, retain) AVAudioNode *avAudioNode;
@property (getter=isPositional, nonatomic) BOOL positional;

+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;

- (void)_connectToScene:(id)arg1;
- (void)_didMakeBackingNode;
- (struct SKCNode { int (**x1)(); id x2; id x3; struct SKCNode {} x4; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_5_1_1; struct SKCNode {} **x_5_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_5_1_3; } x5; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_6_1_1; struct SKCNode {} **x_6_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_6_1_3; } x6; struct vector<SKCNode *, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_7_1_1; struct SKCNode {} **x_7_1_2; struct __compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> > { struct SKCNode {} **x_3_2_1; } x_7_1_3; } x7; id x8; float x9; bool x10; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_11_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_11_1_2; } x11; struct list<SKCAction *, std::__1::allocator<SKCAction *> > { struct __list_node_base<SKCAction *, void *> { struct __list_node<SKCAction *, void *> {} *x_1_2_1; struct __list_node<SKCAction *, void *> {} *x_1_2_2; } x_12_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > > { unsigned long x_2_2_1; } x_12_1_2; } x12; bool x13; id x14; int x15; bool x16; float x17; float x18; bool x19; bool x20; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_21_1_1[4]; } x21; }*)_makeBackingNode;
- (void)_playLooped;
- (void)_setAudioName:(id)arg1 bundle:(id)arg2;
- (id)audioFile;
- (id)audioFileName;
- (id)audioURL;
- (BOOL)autoplayLooped;
- (id)avAudioNode;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAVAudioNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithFileNamed:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isPositional;
- (void)setAudioFileName:(id)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setAutoplayLooped:(BOOL)arg1;
- (void)setAvAudioNode:(id)arg1;
- (void)setPositional:(BOOL)arg1;

@end
