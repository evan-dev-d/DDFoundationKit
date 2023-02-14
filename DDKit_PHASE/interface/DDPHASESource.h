//
//  DDPHASESource.h
//  DDKit
//
//  Created by Evan on 2022/9/5.
//

#import <Foundation/Foundation.h>
#import <PHASE/PHASE.h>

extern NSString * const kNotificationSoundSourceaActiveChanged; ///< 音源是否active发生变化

@interface DDPHASESource : NSObject

@property (nonatomic, strong, readonly) PHASESource *source;
@property (nonatomic, strong, readonly) PHASESpatialMixerDefinition *mixer;
@property (nonatomic, assign) BOOL actived;

- (instancetype)initWithEngine:(PHASEEngine *)engine assetID:(NSString *)assetID locationPoint:(CGPoint)locationPoint rootNode:(PHASEContainerNodeDefinition *)rootNode;
- (void)setTransformX:(CGFloat)x;
- (CGFloat)transformX;
- (void)setTransformZ:(CGFloat)z;
- (CGFloat)transformZ;
- (void)setTransformX:(CGFloat)x z:(CGFloat)z;

@end
