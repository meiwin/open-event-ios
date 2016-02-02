//
//  OEEvent+CoreDataProperties.h
//  
//
//  Created by Meiwin Fu on 3/2/16.
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OEEvent.h"

NS_ASSUME_NONNULL_BEGIN

@interface OEEvent (CoreDataProperties)

@property (nonatomic) NSTimeInterval end_time;
@property (nonatomic) int32_t identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *slogan;
@property (nonatomic) NSTimeInterval start_time;
@property (nullable, nonatomic, retain) NSString *url;
@property (nullable, nonatomic, retain) NSString *color;
@property (nullable, nonatomic, retain) NSString *email;
@property (nullable, nonatomic, retain) NSSet<OESponsor *> *sponsors;
@property (nullable, nonatomic, retain) NSSet<OETrack *> *tracks;
@property (nullable, nonatomic, retain) OEVersion *version;

@end

@interface OEEvent (CoreDataGeneratedAccessors)

- (void)addSponsorsObject:(OESponsor *)value;
- (void)removeSponsorsObject:(OESponsor *)value;
- (void)addSponsors:(NSSet<OESponsor *> *)values;
- (void)removeSponsors:(NSSet<OESponsor *> *)values;

- (void)addTracksObject:(OETrack *)value;
- (void)removeTracksObject:(OETrack *)value;
- (void)addTracks:(NSSet<OETrack *> *)values;
- (void)removeTracks:(NSSet<OETrack *> *)values;

@end

NS_ASSUME_NONNULL_END
