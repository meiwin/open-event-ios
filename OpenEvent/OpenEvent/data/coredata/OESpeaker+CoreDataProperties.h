//
//  OESpeaker+CoreDataProperties.h
//  
//
//  Created by Meiwin Fu on 3/2/16.
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OESpeaker.h"

NS_ASSUME_NONNULL_BEGIN

@interface OESpeaker (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *bio;
@property (nullable, nonatomic, retain) NSString *country;
@property (nullable, nonatomic, retain) NSString *email;
@property (nullable, nonatomic, retain) NSString *facebook;
@property (nullable, nonatomic, retain) NSString *github;
@property (nonatomic) int32_t identifier;
@property (nullable, nonatomic, retain) NSString *linkedin;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *organisation;
@property (nullable, nonatomic, retain) NSString *photo;
@property (nullable, nonatomic, retain) NSString *position;
@property (nullable, nonatomic, retain) NSString *twitter;
@property (nullable, nonatomic, retain) NSString *web;
@property (nullable, nonatomic, retain) NSSet<OESession *> *sessions;

@end

@interface OESpeaker (CoreDataGeneratedAccessors)

- (void)addSessionsObject:(OESession *)value;
- (void)removeSessionsObject:(OESession *)value;
- (void)addSessions:(NSSet<OESession *> *)values;
- (void)removeSessions:(NSSet<OESession *> *)values;

@end

NS_ASSUME_NONNULL_END
