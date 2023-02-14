//
//  DDWebViewController.h
//  DDKit
//
//  Created by Evan on 2023/2/6.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDWebViewController : UIViewController

+ (instancetype)createWithUrl:(NSString *)url;

+ (instancetype)showUrl:(NSString *)url inViewController:(UIViewController *)parentVC;
+ (instancetype)showUrl:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
