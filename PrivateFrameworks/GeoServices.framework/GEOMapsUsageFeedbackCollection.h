/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOCarInfo, GEOMapRegion, GEOPlaceActionDetails, NSString;

@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying> {
    int _actionType;
    GEOCarInfo *_carInfo;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int sessionRelativeTimestamp : 1; 
        unsigned int zoomLevel : 1; 
        unsigned int actionType : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
    GEOMapRegion *_mapRegion;
    GEOPlaceActionDetails *_placeActionDetails;
    NSString *_providerId;
    int _sequenceNumber;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    double _sessionRelativeTimestamp;
    double _zoomLevel;
}

@property int actionType;
@property(retain) GEOCarInfo * carInfo;
@property BOOL hasActionType;
@property(readonly) BOOL hasCarInfo;
@property(readonly) BOOL hasMapRegion;
@property(readonly) BOOL hasPlaceActionDetails;
@property(readonly) BOOL hasProviderId;
@property BOOL hasSequenceNumber;
@property BOOL hasSessionID;
@property BOOL hasSessionRelativeTimestamp;
@property BOOL hasZoomLevel;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) GEOPlaceActionDetails * placeActionDetails;
@property(retain) NSString * providerId;
@property int sequenceNumber;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property double sessionRelativeTimestamp;
@property double zoomLevel;

+ (id)feedbackCollectionWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
+ (id)feedbackCollectionWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;

- (int)actionType;
- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasActionType;
- (BOOL)hasCarInfo;
- (BOOL)hasMapRegion;
- (BOOL)hasPlaceActionDetails;
- (BOOL)hasProviderId;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionID;
- (BOOL)hasSessionRelativeTimestamp;
- (BOOL)hasZoomLevel;
- (unsigned int)hash;
- (id)initWithTraits:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)initWithTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)placeActionDetails;
- (id)providerId;
- (BOOL)readFrom:(id)arg1;
- (int)sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (double)sessionRelativeTimestamp;
- (void)setActionType:(int)arg1;
- (void)setCarInfo:(id)arg1;
- (void)setHasActionType:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasSessionRelativeTimestamp:(BOOL)arg1;
- (void)setHasZoomLevel:(BOOL)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setPlaceActionDetails:(id)arg1;
- (void)setProviderId:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setZoomLevel:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)zoomLevel;

@end