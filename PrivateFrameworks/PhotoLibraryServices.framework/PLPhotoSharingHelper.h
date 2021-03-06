/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoSharingHelper : NSObject {
}

+ (id)_pathToServerConfigurationCache;
+ (int)_serverLimitValueForKey:(id)arg1 withDefaultResult:(int)arg2;
+ (void)acceptPendingInvitationForAlbum:(id)arg1 completion:(id)arg2;
+ (BOOL)accountMatchesEmail:(id)arg1;
+ (void)accountSettingsChanged;
+ (void)applicationIsInForeground:(BOOL)arg1;
+ (void)clearCachedAccountState;
+ (void)countOfAssetsInMstreamdSharingDownloadQueueWithCompletionBlock:(id)arg1;
+ (BOOL)debugDownloadThumbnailsOnly;
+ (void)declinePendingInvitationForAlbum:(id)arg1;
+ (void)deleteCloudSharedAlbumFromServer:(id)arg1;
+ (void)deleteCloudSharedAssetsFromServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)deleteCommentWithGUIDFromServer:(id)arg1;
+ (void)deleteDebugBreadcrumbsForAlbumGUID:(id)arg1;
+ (void)deleteLocalAlbumsForMSASAlbums:(id)arg1;
+ (id)derivativesForMasterAsset:(id)arg1 withSpecifications:(id)arg2;
+ (struct CGSize { float x1; float x2; })derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2 derivativeType:(int)arg3 withSpecificationInfo:(id)arg4;
+ (float)derivedAssetSmallDimensionLimitForType:(int)arg1;
+ (id)directoryPathForDownloadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (id)directoryPathForUploadActivityForAlbumGUID:(id)arg1 create:(BOOL)arg2;
+ (void)enqueueCloudSharedAssetsForPublishToServer:(id)arg1 inSharedAlbum:(id)arg2;
+ (void)forgetSharingPersonID:(id)arg1;
+ (BOOL)hasReachedLimitOfOwnedStreamsInLibrary:(id)arg1;
+ (BOOL)hasReachedLimitOfSubscribedStreamsInLibrary:(id)arg1;
+ (double)intervalBetweenPolls;
+ (BOOL)isBreadcrumbDebugEnabled;
+ (void)isMstreamdBusyPerformingSharingActivityWithCompletionBlock:(id)arg1;
+ (void)markAlbumGUIDAsViewed:(id)arg1 clearUnseenAssetsCount:(BOOL)arg2;
+ (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2;
+ (int)maxAssetsPerStream;
+ (int)maxCharactersPerComment;
+ (int)maxCommentsPerAsset;
+ (int)maxOwnedStreams;
+ (int)maxSubscribedStreams;
+ (int)maxSubscribersPerStream;
+ (void)photosPreferencesChanged;
+ (void)pollForAlbumListUpdates;
+ (id)prefixForBreadcrumbState:(int)arg1;
+ (void)prioritizeDownloadsForAlbumGUID:(id)arg1;
+ (void)prioritizeDownloadsForAsset:(id)arg1;
+ (void)publishCloudSharedAlbumToServer:(id)arg1;
+ (void)publishCloudSharedCommentToServer:(id)arg1;
+ (unsigned long long)purgeSpace:(unsigned long long)arg1;
+ (unsigned long long)purgeableSpace;
+ (void)refreshSubscriberListForAlbumGUID:(id)arg1;
+ (void)removeSubscribers:(id)arg1 fromOwnedAlbum:(id)arg2;
+ (void)resetAllLocalState;
+ (void)sendPendingInvitationsForNewlyCreatedAlbum:(id)arg1;
+ (id)serverSideConfigurationDictionary;
+ (BOOL)sharedStreamsEnabled;
+ (BOOL)sharedStreamsUIEnabled;
+ (id)sharingPersonID;
+ (id)temporaryDerivativePathForCollectionGUID:(id)arg1;
+ (id)temporaryThumbnailPathForCollectionGUID:(id)arg1;
+ (void)trackUploadBatchSize:(unsigned int)arg1;
+ (void)unsubscribeFromAlbum:(id)arg1;
+ (void)updateCloudSharedAlbumMetadataOnServer:(id)arg1;
+ (void)updateCloudSharedAlbumPublicURLStateOnServer:(id)arg1;
+ (void)updateLocalAlbumMetadataForMSASAlbum:(id)arg1;
+ (void)updateSharedAlbumsCachedServerConfigurationLimits;
+ (void)writeAlbumNameBreadCrumb:(id)arg1 forAlbumGUID:(id)arg2 isUpload:(BOOL)arg3;
+ (void)writeDownloadDebugBreadcrumbForAsset:(id)arg1 albumGUID:(id)arg2 content:(id)arg3 state:(int)arg4 error:(id)arg5;
+ (void)writeUploadDebugBreadcrumbForAssetCollections:(id)arg1 state:(int)arg2 error:(id)arg3;

@end
