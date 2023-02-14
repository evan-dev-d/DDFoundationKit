//
//  DDAnimation.h
//  DDKit
//
//  Created by Evan on 2022/12/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDAnimation : NSObject

/*
 * CA Animation
 */

+ (CABasicAnimation *)CATranslateToIdentityFromX:(CGFloat)x fromY:(CGFloat)y duration:(CFTimeInterval)duration;
+ (CABasicAnimation *)CATranslateToIdentityFromX:(CGFloat)x fromY:(CGFloat)y duration:(CFTimeInterval)duration timingFunction:(CAMediaTimingFunctionName)timingFunction removedOnCompletion:(BOOL)removedOnCompletion;

+ (CABasicAnimation *)CAScaleToIdentityFrom:(CGFloat)from duration:(CFTimeInterval)duration;
+ (CABasicAnimation *)CAScaleToIdentityFrom:(CGFloat)from duration:(CFTimeInterval)duration timingFunction:(CAMediaTimingFunctionName)timingFunction removedOnCompletion:(BOOL)removedOnCompletion;

+ (CABasicAnimation *)CATransformFrom:(CATransform3D)from to:(CATransform3D)to duration:(CFTimeInterval)duration;
+ (CABasicAnimation *)CATransformFrom:(CATransform3D)from to:(CATransform3D)to duration:(CFTimeInterval)duration timingFunction:(CAMediaTimingFunctionName)timingFunction removedOnCompletion:(BOOL)removedOnCompletion;

+ (CABasicAnimation *)CAAlphaFrom:(CGFloat)from to:(CGFloat)to duration:(CFTimeInterval)duration;
+ (CABasicAnimation *)CAAlphaFrom:(CGFloat)from to:(CGFloat)to duration:(CFTimeInterval)duration timingFunction:(CAMediaTimingFunctionName)timingFunction removedOnCompletion:(BOOL)removedOnCompletion;

@end

@interface UIView (DDAnimation)
- (void)dd_addCAAnimation:(CAAnimation *)animation;
- (void)dd_addCAAnimation:(CAAnimation *)animation key:(nullable NSString *)key delay:(CGFloat)delay;
@end

NS_ASSUME_NONNULL_END
