//
//  Task.m
//  Overdue TaskList
//
//  Created by Victor  Adu on 4/12/15.
//  Copyright (c) 2015 Victor  Adu. All rights reserved.
//

#import "Task.h"

@implementation Task

-(id)initWithData:(NSDictionary *)data;
{
    self = [super init];
    
    if (self) {
        self.title = data[TASK_TITLE];
        self.taskdescription = data[TASK_DESCRIPTION];
        self.date = data[TASK_DATE];
        self.isCompleted = [data[TASK_COMPLETION] boolValue];
    }
    return self;
}

-(id)init
{
    self = [self initWithData:nil];
    return self;
}


@end
