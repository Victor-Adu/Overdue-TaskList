//
//  DetailTaskViewController.h
//  Overdue TaskList
//
//  Created by Victor  Adu on 4/12/15.
//  Copyright (c) 2015 Victor  Adu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"
#import "EditTaskViewController.h"

@protocol DetailTaskViewControllerDelegate <NSObject>

-(void)updateTask;

@end


@interface DetailTaskViewController : UIViewController <EditTaskViewControllerDelegate>

@property(strong, nonatomic) Task *task;
@property(weak, nonatomic) id <DetailTaskViewControllerDelegate> delegate;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
