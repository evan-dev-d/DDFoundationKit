//
//  NSSet+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <Foundation/Foundation.h>

@interface NSSet (DDKit)

- (NSSet *)dd_setByAddingObject:(id)anObject;

+ (instancetype)dd_setWithObject:(id)object;
+ (instancetype)dd_setWithObjects:(const id [])objects count:(NSUInteger)cnt;
@end

@interface NSMutableSet (DDKit)

- (void)dd_addObject:(id)object;

@end
