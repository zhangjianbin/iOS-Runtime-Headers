/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying> {
    double  _duration;
    NSMutableArray * _events;
    double  _goal;
    long long  _goalType;
    struct { 
        unsigned int duration : 1; 
        unsigned int goal : 1; 
        unsigned int goalType : 1; 
        unsigned int totalBasalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int totalDistanceInCanonicalUnit : 1; 
        unsigned int totalEnergyBurnedInCanonicalUnit : 1; 
        unsigned int totalWStepsInCanonicalUnit : 1; 
        unsigned int type : 1; 
    }  _has;
    HDCodableSample * _sample;
    double  _totalBasalEnergyBurnedInCanonicalUnit;
    double  _totalDistanceInCanonicalUnit;
    double  _totalEnergyBurnedInCanonicalUnit;
    double  _totalWStepsInCanonicalUnit;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) double goal;
@property (nonatomic) long long goalType;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) BOOL hasGoalType;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalDistanceInCanonicalUnit;
@property (nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) BOOL hasTotalWStepsInCanonicalUnit;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalWStepsInCanonicalUnit;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (BOOL)applyToObject:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedGoal;
- (unsigned int)decodedGoalType;
- (id)decodedTotalBasalEnergyBurned;
- (id)decodedTotalDistance;
- (id)decodedTotalEnergyBurned;
- (id)decodedTotalSwimmingStrokeCount;
- (id)decodedWorkoutEvents;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)events;
- (id)eventsAtIndex:(unsigned int)arg1;
- (unsigned int)eventsCount;
- (double)goal;
- (long long)goalType;
- (BOOL)hasDuration;
- (BOOL)hasGoal;
- (BOOL)hasGoalType;
- (BOOL)hasSample;
- (BOOL)hasTotalBasalEnergyBurnedInCanonicalUnit;
- (BOOL)hasTotalDistanceInCanonicalUnit;
- (BOOL)hasTotalEnergyBurnedInCanonicalUnit;
- (BOOL)hasTotalWStepsInCanonicalUnit;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setDuration:(double)arg1;
- (void)setEvents:(id)arg1;
- (void)setGoal:(double)arg1;
- (void)setGoalType:(long long)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasGoal:(BOOL)arg1;
- (void)setHasGoalType:(BOOL)arg1;
- (void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalDistanceInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalEnergyBurnedInCanonicalUnit:(BOOL)arg1;
- (void)setHasTotalWStepsInCanonicalUnit:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setSample:(id)arg1;
- (void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setTotalDistanceInCanonicalUnit:(double)arg1;
- (void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1;
- (void)setTotalWStepsInCanonicalUnit:(double)arg1;
- (void)setType:(long long)arg1;
- (double)totalBasalEnergyBurnedInCanonicalUnit;
- (double)totalDistanceInCanonicalUnit;
- (double)totalEnergyBurnedInCanonicalUnit;
- (double)totalWStepsInCanonicalUnit;
- (long long)type;
- (void)writeTo:(id)arg1;

@end
