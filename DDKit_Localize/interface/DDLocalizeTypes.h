//
//  DDLocalizeTypes.h
//  DDKit
//
//  Created by Evan on 2022/10/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString * const kDDLocalizeID_English;
extern NSString * const kDDLocalizeID_ChineseSimple;// 中文简体
extern NSString * const kDDLocalizeID_Chinese;// 中文繁体
extern NSString * const kDDLocalizeID_Indonesia;//印尼
extern NSString * const kDDLocalizeID_Vietnamese; //越南
extern NSString * const kDDLocalizeID_Filipino; //菲律宾
extern NSString * const kDDLocalizeID_Thai;  //泰国
extern NSString * const kDDLocalizeID_Malaysia;   //马来西亚
extern NSString * const kDDLocalizeID_Portugal; //葡萄牙
extern NSString * const kDDLocalizeID_Bengali; // 孟加拉
extern NSString * const kDDLocalizeID_Hindi; // 印地
extern NSString * const kDDLocalizeID_Turkce; // 土耳其语
extern NSString * const kDDLocalizeID_Arabic; // 阿拉伯语
extern NSString * const kDDLocalizeID_Urdu; // 乌尔都语
extern NSString * const kDDLocalizeID_Spain; // 西班牙语
extern NSString * const kDDLocalizeID_Russia; // 俄语
extern NSString * const kDDLocalizeID_Japan; // 日语
extern NSString * const kDDLocalizeID_Korea; // 朝鲜语

// 语言切换通知
extern NSString * const kNotificationDDLocalizeChanged;
// 视图方向改变
extern NSString * const kNotificationDDLocalizeViewDirectionChanged;



typedef id _Nonnull(^DDDynamicPicker)(void);
typedef void(^DDLocalizePicker) (void);



@interface DDDynamicText : NSObject
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) DDDynamicPicker text;
@property (nonatomic, copy) DDDynamicPicker fontSize;

+ (instancetype)textWithType:(NSString *)type fonts:(NSDictionary *)fonts;

- (NSString *)textValue;

@end


@protocol DDLocalizeProtocol <NSObject>
@optional
@property (nonatomic, strong) DDDynamicText *dd_text;
@property (nonatomic, copy) DDDynamicPicker dd_textPicker;
@property (nonatomic, copy) DDDynamicPicker dd_fontPicker;

- (void)dd_setAttributedText:(DDDynamicText *)text fontName:(nullable NSString *)fontName attributes:(nullable NSDictionary<NSAttributedStringKey, id> *)attrs;

@end

NS_ASSUME_NONNULL_END
