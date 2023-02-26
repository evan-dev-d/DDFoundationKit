//
//  DDMediaUtils.h
//  DDKit
//
//  Created by Evan on 2022/10/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDMediaUtils : NSObject

+ (instancetype)shared;

#pragma mark - 音效
//
/// 播放音效，自动加载并播放
/// - Parameters:
///   - name: 音频文件名
///   - ext: 音频文件后缀
///   - needVibrate: NO 仅播放音频 YES 震动+播放
///   - loop: 是否循环播放
///   - duration: 循环播放持续时长
-(void)playSoundEffectWithResource:(NSString *)name extension:(NSString *)ext needVibrate:(BOOL)needVibrate loop:(BOOL)loop duration:(CGFloat)duration;

/// 停止音效，会从内存卸载音效文件
/// - Parameters:
///   - name: 音频文件名
///   - ext: 音频文件后缀
-(void)stopSoundEffectWithResource:(NSString *)name extension:(NSString *)ext;

//打开后台播放
+ (void)setupAudioPlayBack;

+ (void)touchFeedback;

+ (void)touchFeedbackSoft;

@end

NS_ASSUME_NONNULL_END
