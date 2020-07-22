//
//  EventCell.h
//  Event Times
//
//  Created by David Lara on 7/21/20.
//  Copyright © 2020 David Lara. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Event.h"

NS_ASSUME_NONNULL_BEGIN

@interface EventCell : UITableViewCell

@property (strong, nonatomic) Event *event;

@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *locationLabel;
@property (strong, nonatomic) IBOutlet UILabel *datesLabel;

@end

NS_ASSUME_NONNULL_END
