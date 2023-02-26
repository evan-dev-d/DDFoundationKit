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

- (void)enableTouchFeedback;
- (void)enableTouchFeedbackSoft;

@end

NS_ASSUME_NONNULL_END
