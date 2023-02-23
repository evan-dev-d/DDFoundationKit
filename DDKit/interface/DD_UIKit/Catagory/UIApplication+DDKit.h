//
//  UIApplication+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/12/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (DDKit)
+ (UIWindowScene *)dd_currentWindowScene;
+ (UIWindow *)dd_keyWindow;
+ (UIViewController *)dd_topViewController;
@end

@interface UIApplication (DDOrientation)
//是否横屏
+ (BOOL)dd_isLandscape;
//当前屏幕方向
+ (UIInterfaceOrientation)dd_interfaceOrientation;

@end

NS_ASSUME_NONNULL_END
