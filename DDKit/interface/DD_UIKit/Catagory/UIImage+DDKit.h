//
//  UIImage+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (DDKit)

+ (UIImage *)dd_imageWithColor:(UIColor *)color;
+ (UIImage *)dd_imageWithColor:(UIColor *)color size:(CGSize)size;
//圆角矩形图片
+ (UIImage *)dd_imageWithColor:(UIColor *)color size:(CGSize)size cornerRadius:(CGFloat)radius;

@end

NS_ASSUME_NONNULL_END
