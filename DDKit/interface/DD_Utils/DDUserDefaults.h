//
//  DDUserDefaults.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <Foundation/Foundation.h>

@interface DDUserDefaults : NSObject

+ (instancetype)shared; 

- (void)setValue:(id)value forKey:(NSString *)key;
- (void)removeValueForKey:(NSString *)key;
- (id)getValueForKey:(NSString *)key;
- (id)getValueForKey:(NSString *)key fromClass:(Class)aClass;

- (void)setCustomValue:(id<NSCoding>)value forKey:(NSString *)key;
- (id<NSCoding>)getCustomValueForKey:(NSString *)key;

- (NSString *)getStringForKey:(NSString *)key;
- (NSNumber *)getNumberForKey:(NSString *)key;
- (BOOL)getBoolForKey:(NSString *)key;
- (NSData *)getDataForKey:(NSString *)key;
- (NSDictionary *)getDictionaryForKey:(NSString *)key;
- (NSArray *)getArrayForKey:(NSString *)key;
- (NSDate *)getDateForKey:(NSString *)key;

@end
