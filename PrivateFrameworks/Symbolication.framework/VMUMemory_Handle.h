/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class <VMUMemory>, VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {
    struct _VMURange { 
        unsigned long long location; 
        unsigned long long length; 
    } _addressRange;
    VMUArchitecture *_architecture;
    char *_data;
    <VMUMemory> *_parent;
}

- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (id)architecture;
- (void)dealloc;
- (id)description;
- (id)initWithParent:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 architecture:(id)arg3 data:(char *)arg4;
- (BOOL)isContiguous;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (id)memoryFromSubRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)swappedView;
- (id)view;

@end
