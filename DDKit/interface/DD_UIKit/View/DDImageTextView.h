//  DDImageTextView.h
//  DDKit
//
//  Created by DDKit.Evan on 2023/2/18.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDImageTextView : UIView

@property (nonatomic, strong, readonly) UIImageView *iconView;
@property (nonatomic, strong, readonly) UILabel *titleLabel;

- (instancetype)initWithImage:(UIImage *)image;
- (void)sizeToFitWithMargin:(CGFloat)margin;

@end

NS_ASSUME_NONNULL_END
