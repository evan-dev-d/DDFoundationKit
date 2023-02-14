//
//  DDPHASEEngine.h
//  DDKit
//
//  Created by Evan on 2022/9/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDPHASEEngine : NSObject

+ (instancetype)shared;

- (void)setupEngine;

- (void)addSounds:(NSArray *)sounds;
- (void)play;
- (void)stopWithCompletion:(void (^)(void))completion;

@end

NS_ASSUME_NONNULL_END
