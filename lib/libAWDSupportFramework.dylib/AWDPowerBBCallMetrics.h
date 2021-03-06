/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerBBCallMetrics : PBCodable <NSCopying> {
    unsigned int  _bBAndDataPowerMicroWatt;
    unsigned int  _bBPowerMicroWatt;
    unsigned int  _bBTotalAndDataDuration;
    unsigned int  _bBTotalCallDuration;
    unsigned int  _connectedSleepDuration;
    unsigned int  _connectedSleepDurationData;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bBAndDataPowerMicroWatt : 1; 
        unsigned int bBPowerMicroWatt : 1; 
        unsigned int bBTotalAndDataDuration : 1; 
        unsigned int bBTotalCallDuration : 1; 
        unsigned int connectedSleepDuration : 1; 
        unsigned int connectedSleepDurationData : 1; 
    }  _has;
    NSMutableArray * _metrics;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int bBAndDataPowerMicroWatt;
@property (nonatomic) unsigned int bBPowerMicroWatt;
@property (nonatomic) unsigned int bBTotalAndDataDuration;
@property (nonatomic) unsigned int bBTotalCallDuration;
@property (nonatomic) unsigned int connectedSleepDuration;
@property (nonatomic) unsigned int connectedSleepDurationData;
@property (nonatomic) BOOL hasBBAndDataPowerMicroWatt;
@property (nonatomic) BOOL hasBBPowerMicroWatt;
@property (nonatomic) BOOL hasBBTotalAndDataDuration;
@property (nonatomic) BOOL hasBBTotalCallDuration;
@property (nonatomic) BOOL hasConnectedSleepDuration;
@property (nonatomic) BOOL hasConnectedSleepDurationData;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSMutableArray *metrics;
@property (nonatomic) unsigned long long timestamp;

+ (Class)metricsType;

- (void)addMetrics:(id)arg1;
- (unsigned int)bBAndDataPowerMicroWatt;
- (unsigned int)bBPowerMicroWatt;
- (unsigned int)bBTotalAndDataDuration;
- (unsigned int)bBTotalCallDuration;
- (void)clearMetrics;
- (unsigned int)connectedSleepDuration;
- (unsigned int)connectedSleepDurationData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBBAndDataPowerMicroWatt;
- (BOOL)hasBBPowerMicroWatt;
- (BOOL)hasBBTotalAndDataDuration;
- (BOOL)hasBBTotalCallDuration;
- (BOOL)hasConnectedSleepDuration;
- (BOOL)hasConnectedSleepDurationData;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metrics;
- (id)metricsAtIndex:(unsigned int)arg1;
- (unsigned int)metricsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setBBAndDataPowerMicroWatt:(unsigned int)arg1;
- (void)setBBPowerMicroWatt:(unsigned int)arg1;
- (void)setBBTotalAndDataDuration:(unsigned int)arg1;
- (void)setBBTotalCallDuration:(unsigned int)arg1;
- (void)setConnectedSleepDuration:(unsigned int)arg1;
- (void)setConnectedSleepDurationData:(unsigned int)arg1;
- (void)setHasBBAndDataPowerMicroWatt:(BOOL)arg1;
- (void)setHasBBPowerMicroWatt:(BOOL)arg1;
- (void)setHasBBTotalAndDataDuration:(BOOL)arg1;
- (void)setHasBBTotalCallDuration:(BOOL)arg1;
- (void)setHasConnectedSleepDuration:(BOOL)arg1;
- (void)setHasConnectedSleepDurationData:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMetrics:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
