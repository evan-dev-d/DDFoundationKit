//
//  DDPHASEAudioItem.h
//  DDKit
//
//  Created by Evan on 2022/10/2.
//

#import <Foundation/Foundation.h>
#import "DDPHASESource.h"

NS_ASSUME_NONNULL_BEGIN

@interface DDPHASEAudioItem : NSObject
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *titleText;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat z;

@property (nonatomic, strong) NSString *resourceName;
@property (nonatomic, strong) NSString *resourceType;

@property (nonatomic, strong, nullable) DDPHASESource *source;
@property (nonatomic, assign) BOOL actived;

- (instancetype)initWithInfo:(NSDictionary *)info;

- (void)clear;

@end

@interface DDPHASEConfig : NSObject

@property (nonatomic, assign, readonly) CGFloat displayWidth;
@property (nonatomic, assign, readonly) CGFloat displayLimitWidth;
@property (nonatomic, assign, readonly) CGFloat sourceCullDistance; //空间音频声音开始衰减的距离
@property (nonatomic, assign, readonly) CGFloat unitPt; //空间音频1米 对应的 像素单位数量

+ (instancetype)shared;

- (void)setupWithDisplayWidth:(CGFloat)displayWidth displayLimitWidth:(CGFloat)displayLimitWidth sourceCullDistance:(CGFloat)sourceCullDistance;

@end

NS_ASSUME_NONNULL_END