//
//  OESponsor+CoreDataProperties.h
//  
//
//  Created by Meiwin Fu on 3/2/16.
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OESponsor.h"

NS_ASSUME_NONNULL_BEGIN

@interface OESponsor (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *logo;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *url;
@property (nonatomic) int32_t identifier;
@property (nullable, nonatomic, retain) OEEvent *event;

@end

NS_ASSUME_NONNULL_END
