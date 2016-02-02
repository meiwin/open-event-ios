//
//  OEMicroLocation+CoreDataProperties.h
//  
//
//  Created by Meiwin Fu on 3/2/16.
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OEMicroLocation.h"

NS_ASSUME_NONNULL_BEGIN

@interface OEMicroLocation (CoreDataProperties)

@property (nonatomic) int32_t floor;
@property (nonatomic) int32_t identifier;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<OESession *> *sessions;

@end

@interface OEMicroLocation (CoreDataGeneratedAccessors)

- (void)addSessionsObject:(OESession *)value;
- (void)removeSessionsObject:(OESession *)value;
- (void)addSessions:(NSSet<OESession *> *)values;
- (void)removeSessions:(NSSet<OESession *> *)values;

@end

NS_ASSUME_NONNULL_END
