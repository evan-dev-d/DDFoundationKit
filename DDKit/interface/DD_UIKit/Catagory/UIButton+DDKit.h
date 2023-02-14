//
//  UIButton+DDKit.h
//  DDKit
//
//  Created by Evan on 2023/1/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (DDKit)

- (void)dd_setBackgroundColor:(UIColor *)color forState:(UIControlState)state;
- (void)dd_setBackgroundColor:(UIColor *)color cornerRadius:(CGFloat)radius forState:(UIControlState)state;

////点击会缩小的胶囊形状按钮
//- (void)dd_setCapsuleColor:(UIColor *)color scale:(CGFloat)scale;
//- (void)dd_setCapsuleColor:(UIColor *)color selectedColor:(UIColor *)selectedColor scale:(CGFloat)scale;

@end

NS_ASSUME_NONNULL_END
