//
//  DDLocalizeManager.h
//  DDKit
//
//  Created by Evan on 2022/10/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DDLocalizeManager : NSObject
@property (nonatomic, copy) NSString *currentLocalize;
@property (nonatomic, assign) UISemanticContentAttribute currentViewDirection;
@property (nonatomic, copy, readonly) NSArray<NSString *> *supportLocalizeArray;

+ (instancetype)shared;

- (void)setupWithLocales:(NSArray *)array;

/**
 更新选择的应用语言
 
 @param localize 语言（zh-Hant）
 */
- (void)updateLocalize:(NSString *)localize;

/**
 返回当前语言在应用里显示的内容
 
 @return zh-Hant ->（中文繁体）
 */
- (NSString *)currentLocalizeDisplayName;

/**
 返回某语言在应用里显示的内容
 
 @param localize 语言（zh-Hant）
 
 @return 显示的内容（中文繁体）
 */
- (NSString *)displayNameWithLocalize:(NSString *)localize;

/**
 返回当前语言对应的code
 
 @return zh-Hant -> 1028
 */
- (NSString *)currentLocalizeCode;


// 获取本地化文本内容
- (NSString *)localizedStringForKey:(NSString *)key;
- (NSString *)localizedStringForKey:(NSString *)key tableName:(NSString *)tableName;

//是否是阿拉伯语
+ (BOOL)isArabic;

//
//+ (NSString *)displayNameWithLocalizeID:(NSString *)lid;

@end
