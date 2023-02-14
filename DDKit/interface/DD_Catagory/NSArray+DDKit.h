//
//  NSArray+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <Foundation/Foundation.h>

// 添加泛型声明
@interface NSArray<__covariant ObjectType> (DDKit)

- (id)dd_objectAtIndex:(NSUInteger)index;

+ (instancetype)dd_arrayWithObject:(id)anObject;

+ (instancetype)dd_arrayWithObjects:(const id [])objects count:(NSUInteger)cnt;

/// 返回第一个满足条件的item
- (ObjectType)dd_firstMatch:(BOOL (^)(ObjectType obj))block;

/// 是否存在一个满足条件的item
- (BOOL)dd_any:(BOOL (^)(ObjectType obj))block;

/// 过滤数据，返回一个新的数组
- (NSArray<ObjectType> *)dd_filter:(BOOL (^)(ObjectType obj))block;

@end

@interface NSMutableArray (DDKit)

- (void)dd_addObject:(id)obj;
- (void)dd_removeFirstObject;
- (void)dd_removeObjectAtIndex:(NSUInteger)index;
- (void)dd_replaceObjectAtIndex:(NSUInteger)index withObject:(id)anObject;
- (void)dd_insertObject:(id)anObject atIndex:(NSUInteger)index;
- (void)dd_exchangeObjectAtIndex:(NSUInteger)idx1 withObjectAtIndex:(NSUInteger)idx2;

@end
