//
//  UIViewController+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/10/7.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(int32_t, DDTransitionAnimationType) {
    DDTransitionAnimationTypeNone = 0,
    DDTransitionAnimationTypeVertical,
    DDTransitionAnimationTypeHorizontal,
};

@protocol DDViewControllerAnimationDelegate <NSObject>
- (void)dd_showAnimationWithViewController:(UIViewController *)parentViewController;
- (void)dd_dismissAnimationWithCompletion:(void (^)(void))completion;
@end

@interface UIViewController (DDKit) <DDViewControllerAnimationDelegate>

@property (nonatomic, assign) DDTransitionAnimationType dd_transitionAnimationType;//自定义动画方向

- (UIViewController *)dd_topViewController;

- (void)setupBackNavigationItem:(SEL)selector;
- (void)setupLeftNavigationItem:(SEL)selector imageName:(NSString *)imageName;
- (void)setupRightNavigationItem:(SEL)selector imageName:(NSString *)imageName;

- (void)setupDismissAction;

- (UIViewController *)dd_showClass:(Class)aClass;
- (UIViewController *)dd_showClass:(Class)aClass animation:(BOOL)animation;
- (UIViewController *)dd_showClass:(Class)aClass animation:(BOOL)animation updateOrientations:(BOOL)updateOrientations;
- (void)dd_showInViewController:(UIViewController *)parentViewController;
- (void)dd_showInViewController:(UIViewController *)parentViewController animation:(BOOL)animation;
- (void)dd_showInViewController:(UIViewController *)parentViewController animation:(BOOL)animation updateOrientations:(BOOL)updateOrientations;
- (void)dd_showInViewController:(UIViewController *)parentViewController animation:(BOOL)animation updateOrientations:(BOOL)updateOrientations frame:(CGRect)frame;

- (void)dd_dismiss;
- (void)dd_dismissWithAnimation:(BOOL)animation;
- (void)dd_dismissWithAnimation:(BOOL)animation updateOrientations:(BOOL)updateOrientations;

@end

@interface UIViewController (DDOrientation)
@property (nonatomic, strong) NSNumber *dd_orientation; //UIInterfaceOrientationMask 类型
//切换方向
- (void)dd_changeDeviceOrientationTo:(UIDeviceOrientation)orientation;
- (void)dd_setNeedsUpdateOfSupportedInterfaceOrientations;//ios 16以后需要更新方向
@end

NS_ASSUME_NONNULL_END
