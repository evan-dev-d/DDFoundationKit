//
//  DDJSONUtils.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <Foundation/Foundation.h>


@interface NSString(DDJSONUtils)

- (id)dd_objectFromJSONString;

@end

@interface NSData(DDJSONUtils)

- (id)dd_objectFromJSONData;

@end

@interface NSDictionary(DDJSONUtils)

- (NSString *)dd_jsonString;

@end

@interface NSArray(DDJSONUtils)

- (NSString *)dd_jsonString;

@end
