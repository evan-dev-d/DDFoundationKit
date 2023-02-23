//
//  UIImageView+DDKit.h
//  DDKit
//
//  Created by Evan on 2023/2/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImageView (DDKit)

+ (UIImageView *)dd_createFitSizeImageName:(NSString *)imageName fitWidth:(CGFloat)fitWidth;
- (void )dd_sizeToFitWidth:(CGFloat)fitWidth;
- (void)dd_sizeToFit;

@end

NS_ASSUME_NONNULL_END
