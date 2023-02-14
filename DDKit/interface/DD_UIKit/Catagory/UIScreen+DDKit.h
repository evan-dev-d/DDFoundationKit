//
//  UIScreen+DDKit.h
//  DDKit
//
//  Created by Evan on 2022/12/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define kDDScreenBounds UIScreen.mainScreen.bounds
#define kDDScreenBounds_Portrait UIScreen.mainScreen.dd_portraitBounds
#define kDDScreenBounds_Landscape UIScreen.mainScreen.dd_landscapeBounds

#define kDDScreenWidth CGRectGetWidth(UIScreen.mainScreen.bounds)
#define kDDScreenHeight CGRectGetHeight(UIScreen.mainScreen.bounds)

#define kDDScreenWidth_Portrait CGRectGetWidth(UIScreen.mainScreen.dd_portraitBounds)
#define kDDScreenHeight_Portrait CGRectGetHeight(UIScreen.mainScreen.dd_portraitBounds)

#define kDDScreenWidth_Landscape CGRectGetWidth(UIScreen.mainScreen.dd_landscapeBounds)
#define kDDScreenHeight_Landscape CGRectGetHeight(UIScreen.mainScreen.dd_landscapeBounds)


@interface UIScreen (DDKit)

- (CGRect)dd_portraitBounds;
- (CGRect)dd_landscapeBounds;

@end

NS_ASSUME_NONNULL_END
