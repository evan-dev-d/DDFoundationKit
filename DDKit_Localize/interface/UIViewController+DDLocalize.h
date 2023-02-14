//
//  UIViewController+DDLocalize.h
//  DDKit
//
//  Created by Evan on 2022/10/16.
//

#import <UIKit/UIKit.h>
#import "UIResponder+DDLocalize.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (DDLocalize)

@property (nonatomic, strong) DDDynamicText *dd_title;
@property (nonatomic, copy) DDDynamicPicker dd_titlePicker;

@end

NS_ASSUME_NONNULL_END
