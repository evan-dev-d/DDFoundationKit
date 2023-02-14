//
//  UIView+DDManualLayout.h
//  DDKit
//
//  Created by Evan on 2022/9/18.
//

#import <UIKit/UIKit.h>

@interface UIView (DDManualLayoutProperty)

@property (nonatomic, assign) CGFloat dd_top;
@property (nonatomic, assign) CGFloat dd_left;
@property (nonatomic, assign) CGFloat dd_bottom;
@property (nonatomic, assign) CGFloat dd_right;

@property (nonatomic, assign) CGFloat dd_width;
@property (nonatomic, assign) CGFloat dd_height;

@property (nonatomic, assign) CGPoint dd_origin;
@property (nonatomic, assign) CGSize dd_size;

@property (nonatomic, assign) CGFloat dd_centerX;
@property (nonatomic, assign) CGFloat dd_centerY;

@end

@interface UIView (DDManualLayoutHiberarchy)

- (UIView *)dd_topSuperview;
- (BOOL)dd_isSiblingWithView:(UIView *)view;
- (void)dd_removeAllSubViews;

@end

@interface UIView (DDManualLayoutOffset)

- (void)dd_offsetX:(CGFloat)xOffset;
- (void)dd_offsetY:(CGFloat)yOffset;
- (void)dd_offsetOrigin:(CGPoint)originOffset;

- (void)dd_offsetWidth:(CGFloat)widthOffset;
- (void)dd_offsetHeight:(CGFloat)heightOffset;
- (void)dd_offsetSize:(CGSize)sizeOffset;

@end

@interface UIView (DDManualLayoutFill)

- (void)dd_fill;
- (void)dd_fillWidth;
- (void)dd_fillHeight;

- (void)dd_fillWithTopSpacing:(CGFloat)topSpacing
                   leftSpacing:(CGFloat)leftSpacing
                 bottomSpacing:(CGFloat)bottomSpacing
                  rightSpacing:(CGFloat)rightSpacing;

- (void)dd_fillWithTopSpacing:(CGFloat)topSpacing
                   leftSpacing:(CGFloat)leftSpacing
                 bottomSpacing:(CGFloat)bottomSpacing
                   resizeWidth:(CGFloat)resizeWidth;
- (void)dd_fillWithTopSpacing:(CGFloat)topSpacing
                  rightSpacing:(CGFloat)rightSpacing
                 bottomSpacing:(CGFloat)bottomSpacing
                   resizeWidth:(CGFloat)resizeWidth;
- (void)dd_fillWithLeftSpacing:(CGFloat)leftSpacing
                     topSpacing:(CGFloat)topSpacing
                   rightSpacing:(CGFloat)rightSpacing
                   resizeHeight:(CGFloat)resizeHeight;
- (void)dd_fillWithLeftSpacing:(CGFloat)leftSpacing
                  bottomSpacing:(CGFloat)bottomSpacing
                   rightSpacing:(CGFloat)rightSpacing
                   resizeHeight:(CGFloat)resizeHeight;

@end

@interface UIView (DDManualLayoutAlign)

- (void)dd_alignLeftToView:(UIView *)view
                leftSpacing:(CGFloat)leftSpacing
                     resize:(CGSize)resize;
- (void)dd_alignCenterHorizontallyToView:(UIView *)view
                                   resize:(CGSize)resize;
- (void)dd_alignRightToView:(UIView *)view
                rightSpacing:(CGFloat)rightSpacing
                      resize:(CGSize)resize;

- (void)dd_alignTopToView:(UIView *)view
                topSpacing:(CGFloat)topSpacing
                    resize:(CGSize)resize;
- (void)dd_alignCenterVerticallyToView:(UIView *)view
                                 resize:(CGSize)resize;
- (void)dd_alignBottomToView:(UIView *)view
                bottomSpacing:(CGFloat)bottomSpacing
                       resize:(CGSize)resize;

- (void)dd_alignTopLeftToView:(UIView *)view
                    topSpacing:(CGFloat)topSpacing
                   leftSpacing:(CGFloat)leftSpacing
                        resize:(CGSize)resize;
- (void)dd_alignTopCenterToView:(UIView *)view
                      topSpacing:(CGFloat)topSpacing
                          resize:(CGSize)resize;
- (void)dd_alignTopRightToView:(UIView *)view
                     topSpacing:(CGFloat)topSpacing
                   rightSpacing:(CGFloat)rightSpacing
                         resize:(CGSize)resize;

- (void)dd_alignLeftCenterToView:(UIView *)view
                      leftSpacing:(CGFloat)leftSpacing
                           resize:(CGSize)resize;
- (void)dd_alignCenterToView:(UIView *)view
                       resize:(CGSize)resize;
- (void)dd_alignRightCenterToView:(UIView *)view
                      rightSpacing:(CGFloat)rightSpacing
                            resize:(CGSize)resize;

- (void)dd_alignBottomLeftToView:(UIView *)view
                    bottomSpacing:(CGFloat)bottomSpacing
                      leftSpacing:(CGFloat)leftSpacing
                           resize:(CGSize)resize;
- (void)dd_alignBottomCenterToView:(UIView *)view
                      bottomSpacing:(CGFloat)bottomSpacing
                             resize:(CGSize)resize;
- (void)dd_alignBottomRightToView:(UIView *)view
                     bottomSpacing:(CGFloat)bottomSpacing
                      rightSpacing:(CGFloat)rightSpacing
                            resize:(CGSize)resize;

@end

@interface UIView (DDManualLayoutNeighbor)

- (void)dd_neighborTopToView:(UIView *)view
                   topSpacing:(CGFloat)topSpacing
                       resize:(CGSize)resize;
- (void)dd_neighborLeftToView:(UIView *)view
                   leftSpacing:(CGFloat)leftSpacing
                        resize:(CGSize)resize;
- (void)dd_neighborBottomToView:(UIView *)view
                   bottomSpacing:(CGFloat)bottomSpacing
                          resize:(CGSize)resize;
- (void)dd_neighborRightToView:(UIView *)view
                   rightSpacing:(CGFloat)rightSpacing
                         resize:(CGSize)resize;

- (void)dd_neighborTopLeftToBottomLeftInView:(UIView *)view
                                   topSpacing:(CGFloat)topSpacing
                                  leftSpacing:(CGFloat)leftSpacing
                                       resize:(CGSize)resize;
- (void)dd_neighborTopLeftToTopRightInView:(UIView *)view
                                 topSpacing:(CGFloat)topSpacing
                                leftSpacing:(CGFloat)leftSpacing
                                     resize:(CGSize)resize;
- (void)dd_neighborTopLeftToBottomRightInView:(UIView *)view
                                    topSpacing:(CGFloat)topSpacing
                                   leftSpacing:(CGFloat)leftSpacing
                                        resize:(CGSize)resize;

- (void)dd_neighborTopRightToTopLeftInView:(UIView *)view
                                 topSpacing:(CGFloat)topSpacing
                               rightSpacing:(CGFloat)rightSpacing
                                     resize:(CGSize)resize;
- (void)dd_neighborTopRightToBottomLeftInView:(UIView *)view
                                    topSpacing:(CGFloat)topSpacing
                                  rightSpacing:(CGFloat)rightSpacing
                                        resize:(CGSize)resize;
- (void)dd_neighborTopRightToBottomRightInView:(UIView *)view
                                     topSpacing:(CGFloat)topSpacing
                                   rightSpacing:(CGFloat)rightSpacing
                                         resize:(CGSize)resize;

- (void)dd_neighborBottomLeftToTopLeftInView:(UIView *)view
                                bottomSpacing:(CGFloat)bottomSpacing
                                  leftSpacing:(CGFloat)leftSpacing
                                       resize:(CGSize)resize;
- (void)dd_neighborBottomLeftToTopRightInView:(UIView *)view
                                 bottomSpacing:(CGFloat)bottomSpacing
                                   leftSpacing:(CGFloat)leftSpacing
                                        resize:(CGSize)resize;
- (void)dd_neighborBottomLeftToBottomRightInView:(UIView *)view
                                    bottomSpacing:(CGFloat)bottomSpacing
                                      leftSpacing:(CGFloat)leftSpacing
                                           resize:(CGSize)resize;

- (void)dd_neighborBottomRightToTopLeftInView:(UIView *)view
                                 bottomSpacing:(CGFloat)bottomSpacing
                                  rightSpacing:(CGFloat)rightSpacing
                                        resize:(CGSize)resize;
- (void)dd_neighborBottomRightToBottomLeftInView:(UIView *)view
                                    bottomSpacing:(CGFloat)bottomSpacing
                                     rightSpacing:(CGFloat)rightSpacing
                                           resize:(CGSize)resize;
- (void)dd_neighborBottomRightToTopRightInView:(UIView *)view
                                  bottomSpacing:(CGFloat)bottomSpacing
                                   rightSpacing:(CGFloat)rightSpacing
                                         resize:(CGSize)resize;

- (void)dd_neighborTopCenterToView:(UIView *)view
                         topSpacing:(CGFloat)topSpacing
                             resize:(CGSize)resize;
- (void)dd_neighborLeftCenterToView:(UIView *)view
                         leftSpacing:(CGFloat)leftSpacing
                              resize:(CGSize)resize;
- (void)dd_neighborBottomCenterToView:(UIView *)view
                         bottomSpacing:(CGFloat)bottomSpacing
                                resize:(CGSize)resize;
- (void)dd_neighborRightCenterToView:(UIView *)view
                         rightSpacing:(CGFloat)rightSpacing
                               resize:(CGSize)resize;

@end

@interface UIView (DDManualLayoutEqualize)

- (void)dd_equalizeTopToView:(UIView *)view;
- (void)dd_equalizeLeftToView:(UIView *)view;
- (void)dd_equalizeBottomToView:(UIView *)view;
- (void)dd_equalizeRightToView:(UIView *)view;
- (void)dd_equalizeOriginToView:(UIView *)view;

@end

@interface UIView (DDManualLayoutHelper)

- (void)dd_fillTopWithHeight:(CGFloat)height;
- (void)dd_fillLeftWithWidth:(CGFloat)width;
- (void)dd_fillBottomWithHeight:(CGFloat)height;
- (void)dd_fillRightWithWidth:(CGFloat)width;

- (void)dd_fillTopWithBottomSpacing:(CGFloat)bottomSpacing;
- (void)dd_fillLeftWithRightSpacing:(CGFloat)rightSpacing;
- (void)dd_fillBottomWithTopSpacing:(CGFloat)topSpacing;
- (void)dd_fillRightWithLeftSpacing:(CGFloat)leftSpacing;

- (void)dd_neighborTopLeftToBottomLeftInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborTopLeftToTopRightInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborTopLeftToBottomRightInView:(UIView *)view resize:(CGSize)resize;

- (void)dd_neighborTopRightToTopLeftInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborTopRightToBottomLeftInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborTopRightToBottomRightInView:(UIView *)view resize:(CGSize)resize;

- (void)dd_neighborBottomLeftToTopLeftInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborBottomLeftToTopRightInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborBottomLeftToBottomRightInView:(UIView *)view resize:(CGSize)resize;

- (void)dd_neighborBottomRightToTopLeftInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborBottomRightToBottomLeftInView:(UIView *)view resize:(CGSize)resize;
- (void)dd_neighborBottomRightToTopRightInView:(UIView *)view resize:(CGSize)resize;

- (void)dd_alignTopToView:(UIView *)view;
- (void)dd_alignLeftToView:(UIView *)view;
- (void)dd_alignBottomToView:(UIView *)view;
- (void)dd_alignRightToView:(UIView *)view;

- (void)dd_alignTopLeftWithSize:(CGSize)size;
- (void)dd_alignTopRightWithSize:(CGSize)size;
- (void)dd_alignBottomLeftWithSize:(CGSize)size;
- (void)dd_alignBottomRightWithSize:(CGSize)size;

@end

