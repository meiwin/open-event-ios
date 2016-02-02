//
//  OEVersion+CoreDataProperties.h
//  
//
//  Created by Meiwin Fu on 3/2/16.
//
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "OEVersion.h"

NS_ASSUME_NONNULL_BEGIN

@interface OEVersion (CoreDataProperties)

@property (nonatomic) int32_t event_ver;
@property (nonatomic) int32_t identifier;
@property (nonatomic) int32_t microlocations_ver;
@property (nonatomic) int32_t session_ver;
@property (nonatomic) int32_t speakers_ver;
@property (nonatomic) int32_t sponsors_ver;
@property (nonatomic) int32_t tracks_ver;
@property (nullable, nonatomic, retain) OEEvent *event;

@end

NS_ASSUME_NONNULL_END
