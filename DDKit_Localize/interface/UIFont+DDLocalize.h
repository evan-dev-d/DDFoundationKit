//
//  UIFont+DDLocalize.h
//  DDLocalize
//
//  Created by Evan on 2023/2/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/*
 * font
 */
extern NSString * const kDDFontSystem; //系统字体
extern NSString * const kDDFontSystemBold; //系统粗体
extern NSString * const kDDFontSystemLight; //细体，PingFangSC-Light

@interface UIFont (DDLocalize)

+ (UIFont *)dd_fontWithName:(NSString *)fontName size:(CGFloat)fontSize;

@end

NS_ASSUME_NONNULL_END
