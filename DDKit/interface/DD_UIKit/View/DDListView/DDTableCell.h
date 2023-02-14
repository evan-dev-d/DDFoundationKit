//
//  DDTableCell.h
//  DDKit
//
//  Created by Evan on 2022/12/25.
//

#import <UIKit/UIKit.h>
#import "DDListItem.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DDTableViewCellInterface <NSObject>
+ (NSString *)dd_identifier;
- (void)bindMode:(DDListItem *)item;
@end

@interface DDTableCell : UITableViewCell <DDTableViewCellInterface>
@property (nonatomic, strong) DDListItem *item;
@end

@interface DDSwitchTableCell : DDTableCell

@end

NS_ASSUME_NONNULL_END
