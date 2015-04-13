//
//  Task.h
//  Overdue TaskList
//
//  Created by Victor  Adu on 4/12/15.
//  Copyright (c) 2015 Victor  Adu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

@property(nonatomic,strong) NSString *title;
@property(nonatomic,strong) NSString *taskdescription;
@property(nonatomic,strong) NSDate *date;
@property(nonatomic) BOOL isCompleted;

-(id)initWithData:(NSDictionary *)data;

@end
