//
//  NSMutableParagraphStyle+DDLocalize.h
//  DDKit
//
//  Created by Evan on 2022/12/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableParagraphStyle (DDLocalize)

+ (instancetype)styleWithAlignment:(NSTextAlignment)alignment;
+ (instancetype)centerAlignmentWithLineHeightMultiple:(CGFloat)lineHeightMultiple;
+ (instancetype)styleWithLineHeightMultiple:(CGFloat)lineHeightMultiple alignment:(NSTextAlignment)alignment;

@end

NS_ASSUME_NONNULL_END
