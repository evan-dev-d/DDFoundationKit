//
//  UIResponder+DDLocalize.h
//  DDKit
//
//  Created by Evan on 2022/10/16.
//

#import <UIKit/UIKit.h>
#import "DDLocalizeTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIResponder (DDLocalize)

- (BOOL)dd_addLocalizePicker:(DDLocalizePicker)picker forKey:(NSString *)key;
- (BOOL)dd_removeLocalizePickerWithKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
