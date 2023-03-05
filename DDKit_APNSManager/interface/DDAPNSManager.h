//
//  DDAPNSManager.h
//  DDKit
//
//  Created by Evan on 2023/2/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDAPNSManager : NSObject

- (void)registerLocalNotification:(NSTimeInterval)interval;
- (void)removeLocalNotification;

@end

NS_ASSUME_NONNULL_END
