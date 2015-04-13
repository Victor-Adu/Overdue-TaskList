//
//  ViewController.h
//  Overdue TaskList
//
//  Created by Victor  Adu on 4/12/15.
//  Copyright (c) 2015 Victor  Adu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AddTaskViewController.h"
#import "DetailTaskViewController.h"

@interface ViewController : UIViewController <AddTaskViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, DetailTaskViewControllerDelegate>

@property(strong,nonatomic) NSMutableArray *taskObjects;

@property (weak, nonatomic) IBOutlet UITableView *tableView;

- (IBAction)addTaskButtonItemPressed:(UIBarButtonItem *)sender;
- (IBAction)reorderButtonItemPressed:(UIBarButtonItem *)sender;


@end

