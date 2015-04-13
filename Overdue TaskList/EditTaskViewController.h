//
//  EditTaskViewController.h
//  Overdue TaskList
//
//  Created by Victor  Adu on 4/12/15.
//  Copyright (c) 2015 Victor  Adu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@protocol EditTaskViewControllerDelegate <NSObject>

-(void)didUpdateTask;

@end

@interface EditTaskViewController : UIViewController <UITextViewDelegate,UITextFieldDelegate>

@property(strong, nonatomic) Task *task;
@property(weak, nonatomic) id <EditTaskViewControllerDelegate> delegate;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)saveBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
