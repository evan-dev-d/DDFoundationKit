//
//  DDLocationManager.h
//  DDKit
//
//  Created by Evan on 2022/12/22.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocationManager.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const kDDNotificationDidUpdateLocation;


@interface DDLocationManager : NSObject

@property (nonatomic, strong, readonly) CLLocation *currentLocation;

+ (instancetype)shared;

- (void)setup;

- (BOOL)fetch;

@end

NS_ASSUME_NONNULL_END
