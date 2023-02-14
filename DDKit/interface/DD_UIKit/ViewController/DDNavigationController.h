//
//  DDNavigationController.h
//  DDKit
//
//  Created by Evan on 2022/11/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (DDNavigation)
- (void)setDefaultNavigationBarAppearance;
- (void)setNavigationBarAppearanceWithBackgroundColor:(UIColor *)color;
@end

@interface DDNavigationController : UINavigationController

- (void)setDefaultAppearance;
- (void)setAppearanceWithBackgroundColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
