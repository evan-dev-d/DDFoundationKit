//
//  DDAudioPlayer.h
//  DDKit
//
//  Created by Evan on 2023/1/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^DDAudioPlayerCompletion) (BOOL successfully);

@interface DDAudioPlayer : NSObject

@property (nonatomic, copy) DDAudioPlayerCompletion completionBlock;

+ (instancetype)playWithResource:(NSString *)name extension:(NSString *)ext numberOfLoops:(NSInteger)numberOfLoops completionBlock:(DDAudioPlayerCompletion)block;

- (void)stopAndClear;

@end

NS_ASSUME_NONNULL_END
