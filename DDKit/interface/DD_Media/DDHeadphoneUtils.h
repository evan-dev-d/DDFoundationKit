//
//  DDHeadphoneUtils.h
//  DDKit
//
//  Created by Evan on 2022/10/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(int32_t, DDHeadphoneType) {
    DDHeadphoneTypeUnknown = 0,
    DDHeadphoneTypeNomal,   //普通耳机
    DDHeadphoneTypeBluetooth, //蓝牙耳机
    DDHeadphoneTypeUSB,    //串行总线设备（通过转接口耳机）
};

DDStringExtern(kDDNotificationHeadPhoneChanged);

@interface DDHeadphone : NSObject
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) DDHeadphoneType type;
@property (nonatomic, strong) NSString *uid;
@end

@interface DDHeadphoneUtils : NSObject

@property (nonatomic, strong) DDHeadphone * _Nullable headphone;//耳机

+ (instancetype)shared;

- (void)updateCurrentHeadphone;

@end

NS_ASSUME_NONNULL_END
