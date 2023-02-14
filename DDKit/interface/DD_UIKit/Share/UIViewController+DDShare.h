//
//  UIViewController+DDShare.h
//  DDKit
//
//  Created by Evan on 2023/2/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (DDShare)

- (void)dd_shareWithImage:(UIImage *)image text:(NSString *)text url:(NSString *)urlString;

@end

NS_ASSUME_NONNULL_END
