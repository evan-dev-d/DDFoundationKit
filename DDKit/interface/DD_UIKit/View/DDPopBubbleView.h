//  DDPopBubbleView.h
//  DDKit
//
//  Created by DDKit.Evan on 2023/1/31.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDPopBubbleView : UIView
@property (nonatomic, strong, readonly) UIImageView *arrowView;
@property (nonatomic, strong, readonly) UILabel *titleLabel;

+ (instancetype)createWithArrowImage:(UIImage *)image;

- (void)dd_widthToFitEdge:(CGFloat)edge;

@end

NS_ASSUME_NONNULL_END
