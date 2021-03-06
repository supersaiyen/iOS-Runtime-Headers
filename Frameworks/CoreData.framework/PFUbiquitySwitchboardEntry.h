/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString, PFUbiquityFilePresenter, PFUbiquityLocation, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter;

@interface PFUbiquitySwitchboardEntry : NSObject {
    unsigned int _activeStoreCount;
    _PFUbiquityRecordsExporter *_exporter;
    PFUbiquityFilePresenter *_fp;
    _PFUbiquityRecordsImporter *_importer;
    NSString *_localPeerID;
    NSMutableDictionary *_registeredCoordinators;
    NSMutableDictionary *_storeNameToCacheWrapper;
    NSRecursiveLock *_storeNameToCacheWrapperLock;
    NSMutableDictionary *_storeNameToImporterPSC;
    NSMutableDictionary *_storeNameToModelVersionHash;
    NSMutableDictionary *_storeNameToStores;
    PFUbiquityLocation *_ubiquityRootLocation;
}

@property unsigned int activeStoreCount;
@property(readonly) _PFUbiquityRecordsExporter * exporter;
@property(readonly) PFUbiquityFilePresenter * filePresenter;
@property(readonly) _PFUbiquityRecordsImporter * importer;
@property(readonly) NSString * localPeerID;
@property(readonly) NSDictionary * storeNameToImporterPSC;
@property(readonly) NSDictionary * storeNameToModelVersionHash;
@property(readonly) NSDictionary * storeNameToStores;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;

- (unsigned int)activeStoreCount;
- (id)cacheWrapperForStoreName:(id)arg1;
- (id)createSetOfActiveStoreNames;
- (id)createSetOfPersistentStoreCoordinatorsRegisteredForStoreName:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)entryWillBeRemovedFromSwitchboard;
- (id)exporter;
- (id)filePresenter;
- (id)importer;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
- (id)localPeerID;
- (void)registerPersistentStore:(id)arg1 withStoreName:(id)arg2;
- (void)setActiveStoreCount:(unsigned int)arg1;
- (id)storeNameToImporterPSC;
- (id)storeNameToModelVersionHash;
- (id)storeNameToStores;
- (id)ubiquityRootLocation;
- (void)unregisterPersistentStore:(id)arg1;
- (void)unregisterPersistentStoreCoordinator:(id)arg1;

@end
