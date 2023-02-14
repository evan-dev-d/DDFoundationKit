//
//  DDButton.h
//  DDKit
//
//  Created by Evan on 2023/1/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^DDButtonActionTouchUpInside) (void);

@interface DDButton : UIButton

@property (nonatomic, assign) BOOL enableTouchSacleAnimation; //打开点击按钮缩放动画

//打开触感反馈，style 触感反馈类型
- (void)enable:(BOOL)enable impactFeedbackStyle:(UIImpactFeedbackStyle)style;

@end

NS_ASSUME_NONNULL_END
