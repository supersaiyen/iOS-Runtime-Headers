/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSData, NSString;

@interface SSPlayInfoRequestContext : NSObject <SSXPCCoding, NSCopying> {
    NSString *_playerGUID;
    NSData *_sic;
    NSArray *_sinfs;
}

@property(copy) NSData * SICData;
@property(copy) NSString * playerGUID;
@property(copy) NSArray * sinfs;

- (id)SICData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithXPCEncoding:(id)arg1;
- (id)playerGUID;
- (void)setPlayerGUID:(id)arg1;
- (void)setSICData:(id)arg1;
- (void)setSinfs:(id)arg1;
- (id)sinfs;

@end
