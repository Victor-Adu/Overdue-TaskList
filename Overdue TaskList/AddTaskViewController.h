//
//  AddTaskViewController.h
//  Overdue TaskList
//
//  Created by Victor  Adu on 4/12/15.
//  Copyright (c) 2015 Victor  Adu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@protocol AddTaskViewControllerDelegate <NSObject>

-(void)didCancel;
-(void)didAddTask:(Task *)task;

@end

@interface AddTaskViewController : UIViewController <UITextFieldDelegate, UITextViewDelegate>

@property (weak, nonatomic) id <AddTaskViewControllerDelegate> delegate;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)addTaskButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;

@end
