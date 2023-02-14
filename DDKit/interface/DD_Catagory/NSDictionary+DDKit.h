//
//  NSDictionary+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (DDKit)

- (instancetype)dd_initWithDictionary:(NSDictionary *)otherDictionary;

- (NSNumber *)dd_numberForKey:(NSString *)key;
- (NSNumber *)dd_numberOrNilForKey:(NSString *)key;

- (NSString *)dd_stringForKey:(NSString *)key;
- (NSString *)dd_stringOrNilForKey:(NSString *)key;

/// 不存在或失败，返回defaultValue
- (BOOL)dd_boolForKey:(NSString *)key defaultValue:(BOOL)defaultValue;

- (NSArray *)dd_arrayForKey:(NSString *)key;
- (NSDictionary *)dd_dictionaryForKey:(NSString *)key;

- (id)dd_objectOrNilForKey:(NSObject<NSCopying> *)key;
- (id)dd_objectOrNilForKey:(NSObject<NSCopying> *)key class:(Class)clz;

+ (instancetype)dd_dictionaryWithObject:(id)object forKey:(id<NSCopying>)key;
+ (instancetype)dd_dictionaryWithObjects:(const id [])objects forKeys:(const id<NSCopying> [])keys count:(NSUInteger)cnt;

@end

@interface NSMutableDictionary (DDKit)

- (void)dd_setObject:(id)anObject forKey:(id <NSCopying>)aKey;

- (void)dd_removeObjectForKey:(id<NSCopying>)aKey;


@end
