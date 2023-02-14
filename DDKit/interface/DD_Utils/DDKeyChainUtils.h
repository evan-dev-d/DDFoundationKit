//
//  DDKeyChainUtils.h
//  DDKit
//
//  Created by Evan on 2022/9/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDKeyChainUtils : NSObject
/**
 * keychain 相关
 * 读取keychain里指定key的内容
 * 向keychain里添加指定内容，data支持NSString、NSArray、NSDictionary、NSSet等可以序列化的类型
 * 在keychain里删除指定key的内容
 */
+ (id)loadKeyChain:(NSString *)chainKey;
+ (BOOL)addKeychain:(NSString*)chainKey data:(id)data;
+ (void)deleteKeychain:(NSString*)chainKey;

@end

NS_ASSUME_NONNULL_END
