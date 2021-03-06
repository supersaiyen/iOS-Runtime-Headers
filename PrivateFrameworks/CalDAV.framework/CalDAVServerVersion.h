/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSString;

@interface CalDAVServerVersion : NSObject <NSCopying> {
    NSSet *_complianceClasses;
    NSString *_serverHeader;
    NSString *_supportedCalendarComponentSets;
    BOOL _supportsAutoSchedule;
    BOOL _supportsCalendarProxy;
    BOOL _supportsExtendedCalendarQuery;
    BOOL _supportsInboxAvailability;
    BOOL _supportsManagedAttachments;
    BOOL _supportsPrincipalPropertySearch;
    BOOL _supportsPrivateComments;
    BOOL _supportsPrivateEvents;
    BOOL _supportsRequestCompression;
    BOOL _supportsSharing;
    BOOL _supportsSharingNoScheduling;
    BOOL _supportsSubscriptionCalendars;
    BOOL _supportsTimeRangeFilter;
    BOOL _supportsTimeRangeFilterOnInbox;
    BOOL _supportsTimeRangeFilterWithoutEndDate;
    BOOL _supportsTodoTimeRangeFilter;
    double _version;
}

@property(retain) NSSet * complianceClasses;
@property(copy) NSString * serverHeader;
@property(copy) NSString * supportedCalendarComponentSets;
@property BOOL supportsAutoSchedule;
@property BOOL supportsCalendarProxy;
@property BOOL supportsExtendedCalendarQuery;
@property BOOL supportsInboxAvailability;
@property BOOL supportsManagedAttachments;
@property BOOL supportsPrincipalPropertySearch;
@property BOOL supportsPrivateComments;
@property BOOL supportsPrivateEvents;
@property BOOL supportsRequestCompression;
@property BOOL supportsSharing;
@property BOOL supportsSharingNoScheduling;
@property BOOL supportsSubscriptionCalendars;
@property BOOL supportsTimeRangeFilter;
@property BOOL supportsTimeRangeFilterOnInbox;
@property BOOL supportsTimeRangeFilterWithoutEndDate;
@property BOOL supportsTodoTimeRangeFilter;
@property(readonly) NSString * type;
@property double version;

+ (id)_prototypeMatchingServerHeaders:(id)arg1;
+ (id)versionWithHTTPHeaders:(id)arg1;
+ (id)versionWithPropertyValue:(id)arg1;

- (id)_additionalFlagKeys;
- (id)_allFlagKeys;
- (id)_propertiesToComplianceClasses;
- (void)_setPropertiesFromComplianceClasses:(id)arg1;
- (id)complianceClasses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)propertyValue;
- (id)serverHeader;
- (void)setComplianceClasses:(id)arg1;
- (void)setServerHeader:(id)arg1;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (void)setSupportsAutoSchedule:(BOOL)arg1;
- (void)setSupportsCalendarProxy:(BOOL)arg1;
- (void)setSupportsExtendedCalendarQuery:(BOOL)arg1;
- (void)setSupportsInboxAvailability:(BOOL)arg1;
- (void)setSupportsManagedAttachments:(BOOL)arg1;
- (void)setSupportsPrincipalPropertySearch:(BOOL)arg1;
- (void)setSupportsPrivateComments:(BOOL)arg1;
- (void)setSupportsPrivateEvents:(BOOL)arg1;
- (void)setSupportsRequestCompression:(BOOL)arg1;
- (void)setSupportsSharing:(BOOL)arg1;
- (void)setSupportsSharingNoScheduling:(BOOL)arg1;
- (void)setSupportsSubscriptionCalendars:(BOOL)arg1;
- (void)setSupportsTimeRangeFilter:(BOOL)arg1;
- (void)setSupportsTimeRangeFilterOnInbox:(BOOL)arg1;
- (void)setSupportsTimeRangeFilterWithoutEndDate:(BOOL)arg1;
- (void)setSupportsTodoTimeRangeFilter:(BOOL)arg1;
- (void)setVersion:(double)arg1;
- (id)supportedCalendarComponentSets;
- (BOOL)supportsAutoSchedule;
- (BOOL)supportsCalendarProxy;
- (BOOL)supportsExtendedCalendarQuery;
- (BOOL)supportsInboxAvailability;
- (BOOL)supportsManagedAttachments;
- (BOOL)supportsPrincipalPropertySearch;
- (BOOL)supportsPrivateComments;
- (BOOL)supportsPrivateEvents;
- (BOOL)supportsRequestCompression;
- (BOOL)supportsSharing;
- (BOOL)supportsSharingNoScheduling;
- (BOOL)supportsSubscriptionCalendars;
- (BOOL)supportsTimeRangeFilter;
- (BOOL)supportsTimeRangeFilterOnInbox;
- (BOOL)supportsTimeRangeFilterWithoutEndDate;
- (BOOL)supportsTodoTimeRangeFilter;
- (id)type;
- (double)version;

@end
