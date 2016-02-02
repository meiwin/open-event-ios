//
//  OETrack+CoreDataProperties.h
//  
//
//  Created by Meiwin Fu on 3/2/16.
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OETrack.h"

NS_ASSUME_NONNULL_BEGIN

@interface OETrack (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *desc;
@property (nonatomic) int32_t identifier;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *track_image_url;
@property (nullable, nonatomic, retain) OEEvent *event;
@property (nullable, nonatomic, retain) NSSet<OESession *> *sessions;

@end

@interface OETrack (CoreDataGeneratedAccessors)

- (void)addSessionsObject:(OESession *)value;
- (void)removeSessionsObject:(OESession *)value;
- (void)addSessions:(NSSet<OESession *> *)values;
- (void)removeSessions:(NSSet<OESession *> *)values;

@end

NS_ASSUME_NONNULL_END
