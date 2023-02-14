//
//  UIView+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/12/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (DDKit)

- (CALayer *)dd_subLayerWithName:(NSString *)name;

//view的中心点 到 父视图中心点 的距离
- (CGFloat)radiusToCenter;

//跟随p点旋转
- (void)rotateWithPoint:(CGPoint)p baseCenter:(CGPoint)center;

//添加十字线
- (void)addCrosshairWithColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
