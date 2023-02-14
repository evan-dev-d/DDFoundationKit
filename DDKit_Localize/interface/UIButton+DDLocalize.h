//
//  UIButton+DDLocalize.h
//  DDKit
//
//  Created by Evan on 2022/10/8.
//

#import <UIKit/UIKit.h>
#import "UIResponder+DDLocalize.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (DDLocalize)<DDLocalizeProtocol>

- (void)dd_setTitle:(DDDynamicText *)title forState:(UIControlState)state;
- (void)dd_setAttributedTitle:(DDDynamicText *)title fontName:(nullable NSString *)fontName attributes:(nullable NSDictionary<NSAttributedStringKey, id> *)attrs forState:(UIControlState)state;

@end

NS_ASSUME_NONNULL_END
