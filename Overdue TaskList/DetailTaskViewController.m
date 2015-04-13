//
//  DetailTaskViewController.m
//  Overdue TaskList
//
//  Created by Victor  Adu on 4/12/15.
//  Copyright (c) 2015 Victor  Adu. All rights reserved.
//

#import "DetailTaskViewController.h"

@interface DetailTaskViewController ()

@end

@implementation DetailTaskViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.titleLabel.text = self.task.title;
    self.detailLabel.text = self.task.taskdescription;
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    NSString *stringFromDate = [formatter stringFromDate:self.task.date];
    
    self.dateLabel.text = stringFromDate;
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([segue.destinationViewController isKindOfClass:[EditTaskViewController class]]) {
        EditTaskViewController *editTaskViewController = segue.destinationViewController;
        editTaskViewController.task = self.task;
        editTaskViewController.delegate = self;
    }

}

-(void)didUpdateTask
{
    self.titleLabel.text = self.task.title;
    self.detailLabel.text = self.task.taskdescription;
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    NSString *stringFromDate = [formatter stringFromDate:self.task.date];
    self.dateLabel.text = stringFromDate;
    
    [self.navigationController popViewControllerAnimated:YES];
    
    [self.delegate updateTask];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender
{
    [self performSegueWithIdentifier:@"toEditTaskViewControllerSegue" sender:nil];
}
@end
