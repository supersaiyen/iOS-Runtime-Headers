/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable {
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    double _timestamp;
}

@property(retain) NSString * bundleIdentifier;
@property(retain) GEOLatLng * destination;
@property(retain) GEOLatLng * source;
@property double timestamp;

- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)source;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
