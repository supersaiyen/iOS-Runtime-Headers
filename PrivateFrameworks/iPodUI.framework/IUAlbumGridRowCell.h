/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class <IUAlbumGridRowCellDelegate>, IUAlbumGridCellContext, IUAlbumGridRowView;

@interface IUAlbumGridRowCell : UITableViewCell {
    struct CGSize { 
        float width; 
        float height; 
    } _artworkSize;
    <IUAlbumGridRowCellDelegate> *_delegate;
    unsigned int _delegateRespondsToNewGridImageView;
    BOOL _dimTouchedAlbum;
    IUAlbumGridRowView *_gridRowView;
    BOOL _shouldLoadLocalImagesSynchronously;
    float _topPadding;
}

@property struct CGSize { float x1; float x2; } artworkSize;
@property(retain) IUAlbumGridCellContext * context;
@property <IUAlbumGridRowCellDelegate> * delegate;
@property BOOL dimTouchedAlbum;
@property(readonly) struct CGSize { float x1; float x2; } edgeConstraints;
@property(readonly) IUAlbumGridRowView * gridRowView;
@property unsigned int rowIndex;
@property BOOL shouldLoadLocalImagesSynchronously;
@property float topPadding;

+ (float)rowHeightForContext:(id)arg1;
+ (struct CGSize { float x1; float x2; })thumbnailSizeForContext:(id)arg1;

- (void)_longPressed:(id)arg1;
- (struct CGSize { float x1; float x2; })artworkSize;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (void)deleteAlbumAtIndex:(unsigned int)arg1;
- (BOOL)dimTouchedAlbum;
- (struct CGSize { float x1; float x2; })edgeConstraints;
- (id)gridRowView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)newGridImageView;
- (void)prepareForReuse;
- (void)refreshImages;
- (unsigned int)rowIndex;
- (void)setAlbumHidden:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (void)setArtworkSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimTouchedAlbum:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRowIndex:(unsigned int)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldLoadLocalImagesSynchronously:(BOOL)arg1;
- (void)setTitlesHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTopPadding:(float)arg1;
- (BOOL)shouldLoadLocalImagesSynchronously;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbnailFrameForAlbumAtIndex:(unsigned int)arg1;
- (id)thumbnailImageForAlbumAtIndex:(unsigned int)arg1;
- (float)topPadding;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)unhideAlbums;

@end
