//
//  DDDateUtils.h
//  DDKit
//
//  Created by Evan on 2023/2/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (DDKit)
- (BOOL)laterThan:(NSDate *)date;
- (NSDate *)addYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;
@end


@interface DDDateUtils : NSObject

+ (NSDateFormatter *)formatter;

@end

NS_ASSUME_NONNULL_END
