//
//  NSObject+DDThread.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//
//  线程相关调用保护
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#ifdef __cplusplus
extern "C" {
#endif
    
    void dd_dispatch_async_main_queue_safe(dispatch_block_t block);
    
    
#ifdef __cplusplus
}
#endif


@interface NSObject (DDThread)

- (void)dd_postNotificationInMainThreadWithName:(NSNotificationName)aName;
- (void)dd_postNotificationInMainThreadWithName:(NSNotificationName)aName userInfo:(nullable NSDictionary *)aUserInfo;
- (void)dd_postNotificationInMainThreadWithName:(NSNotificationName)aName object:(nullable id)anObject userInfo:(nullable NSDictionary *)aUserInfo;

@end

NS_ASSUME_NONNULL_END
