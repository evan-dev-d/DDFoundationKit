//
//  DDSpatialAudioItem.h
//  DDKit
//
//  Created by Evan on 2022/10/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const kNotificationSoundSourceaActiveChanged; ///< 音源是否active发生变化

@interface DDSpatialAudioItem : NSObject
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSString *titleText;
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat z;

@property (nonatomic, strong) NSString *resourceName;
@property (nonatomic, strong) NSString *resourceType;

@property (nonatomic, assign) BOOL actived;

@property (nonatomic, assign, readonly) CGFloat transformX;
@property (nonatomic, assign, readonly) CGFloat transformZ;
@property (nonatomic, strong, readonly) NSString *debugDesc;


- (instancetype)initWithInfo:(NSDictionary *)info;

- (void)clear;

- (void)updateTransformX:(CGFloat)x z:(CGFloat)z;
- (void)updateSource:(nullable id)source;

@end

@interface DDSpatialConfig : NSObject

@property (nonatomic, assign, readonly) CGFloat displayWidth;
@property (nonatomic, assign, readonly) CGFloat displayLimitWidth;
@property (nonatomic, assign, readonly) CGFloat sourceCullDistance; //空间音频声音开始衰减的距离
@property (nonatomic, assign, readonly) CGFloat unitPt; //空间音频1米 对应的 像素单位数量

+ (instancetype)shared;

- (void)setupWithDisplayWidth:(CGFloat)displayWidth displayLimitWidth:(CGFloat)displayLimitWidth sourceCullDistance:(CGFloat)sourceCullDistance;

@end

NS_ASSUME_NONNULL_END
