/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISystemNavigationActionDestinationContext : NSObject <BSXPCCoding> {
    NSURL * _URL;
    NSString * _title;
}

@property (nonatomic, copy) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)systemNavigationActionContextWithTitle:(id)arg1 andIconData:(id)arg2 withIconScale:(float)arg3;
+ (id)systemNavigationActionContextWithTitle:(id)arg1 andURL:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 andURL:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (id)title;

@end
