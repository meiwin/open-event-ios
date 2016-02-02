//
//  OESession+CoreDataProperties.h
//  
//
//  Created by Meiwin Fu on 3/2/16.
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OESession.h"

NS_ASSUME_NONNULL_BEGIN

@interface OESession (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *abstract;
@property (nullable, nonatomic, retain) NSString *desc;
@property (nonatomic) int32_t identifier;
@property (nullable, nonatomic, retain) NSString *level;
@property (nullable, nonatomic, retain) NSString *subtitle;
@property (nonatomic) NSTimeInterval begin;
@property (nonatomic) NSTimeInterval end;
@property (nullable, nonatomic, retain) NSString *title;
@property (nullable, nonatomic, retain) NSString *format;
@property (nullable, nonatomic, retain) OEMicroLocation *microlocation;
@property (nullable, nonatomic, retain) NSSet<OESpeaker *> *speakers;
@property (nullable, nonatomic, retain) OETrack *track;

@end

@interface OESession (CoreDataGeneratedAccessors)

- (void)addSpeakersObject:(OESpeaker *)value;
- (void)removeSpeakersObject:(OESpeaker *)value;
- (void)addSpeakers:(NSSet<OESpeaker *> *)values;
- (void)removeSpeakers:(NSSet<OESpeaker *> *)values;

@end

NS_ASSUME_NONNULL_END
