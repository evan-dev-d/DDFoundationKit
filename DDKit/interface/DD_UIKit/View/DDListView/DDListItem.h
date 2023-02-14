//
//  DDListItem.h
//  DDKit
//
//  Created by Evan on 2022/12/25.
//

#import <Foundation/Foundation.h>

@interface DDListItem : NSObject
@property (nonatomic, assign) int32_t type;
@property (nonatomic, strong) NSString *identifier;

@property (nonatomic, strong) NSString *sectionid;
@property (nonatomic, strong) NSString *dynamicSectionid;

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *dynamicTitle;

@property (nonatomic, strong) NSString *subtitle;
@property (nonatomic, strong) NSString *dynamicSubtitle;

@property (nonatomic, strong) NSString *iconName;

@property (nonatomic, copy) void (^selectAction)(void);


@property (nonatomic, assign) BOOL isOn;
@property (nonatomic, copy) void (^valueChangeAction)(BOOL isOn);


+ (instancetype)itemWithIdentifier:(NSString *)identifier title:(NSString *)title selectAction:(void (^)(void))selectAction;
+ (instancetype)itemWithIdentifier:(NSString *)identifier title:(NSString *)title isOn:(BOOL)isOn valueChangeAction:(void (^)(BOOL isON))valueChangeAction;
+ (instancetype)itemWithIdentifier:(NSString *)identifier sectionid:(NSString *)sectionid title:(NSString *)title selectAction:(void (^)(void))selectAction;
+ (instancetype)itemWithIdentifier:(NSString *)identifier sectionid:(NSString *)sectionid title:(NSString *)title isOn:(BOOL)isOn valueChangeAction:(void (^)(BOOL))valueChangeAction;

+ (instancetype)itemWithIdentifier:(NSString *)identifier sectionid:(NSString *)sectionid title:(NSString *)title iconName:(NSString *)iconName selectAction:(void (^)(void))selectAction isOn:(BOOL)isOn valueChangeAction:(void (^)(BOOL isON))valueChangeAction;
+ (instancetype)itemWithIdentifier:(NSString *)identifier dynamicSectionid:(NSString *)dynamicSectionid dynamicTitle:(NSString *)dynamicTitle iconName:(NSString *)iconName selectAction:(void (^)(void))selectAction;

@end
