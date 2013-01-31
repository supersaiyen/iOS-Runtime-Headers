/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDRubyProperties : NSObject  {
    unsigned int mOriginal : 1;
    struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; } *mOriginalProperties;
}

@property int alignment;
@property unsigned short phoneticGuideFontSize;
@property unsigned short baseFontSize;
@property unsigned short distanceBetween;
@property int phoneticGuideLanguage;


- (void)dealloc;
- (id)init;
- (void)clearPhoneticGuideLanguage;
- (BOOL)isPhoneticGuideLanguageOverridden;
- (void)setPhoneticGuideLanguage:(int)arg1;
- (int)phoneticGuideLanguage;
- (void)clearDistanceBetween;
- (BOOL)isDistanceBetweenOverridden;
- (void)setDistanceBetween:(unsigned short)arg1;
- (unsigned short)distanceBetween;
- (void)clearBaseFontSize;
- (BOOL)isBaseFontSizeOverridden;
- (void)setBaseFontSize:(unsigned short)arg1;
- (unsigned short)baseFontSize;
- (void)clearPhoneticGuideFontSize;
- (BOOL)isPhoneticGuideFontSizeOverridden;
- (void)setPhoneticGuideFontSize:(unsigned short)arg1;
- (unsigned short)phoneticGuideFontSize;
- (void)clearAlignment;
- (BOOL)isAnythingOverriddenIn:(struct { int x1; unsigned short x2; unsigned short x3; unsigned short x4; int x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; }*)arg1;
- (BOOL)isAnythingOverridden;
- (BOOL)isAlignmentOverridden;
- (int)alignment;
- (void)setAlignment:(int)arg1;

@end