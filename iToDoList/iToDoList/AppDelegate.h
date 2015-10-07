//
//  AppDelegate.h
//  iToDoList
//
//  Created by Jose Luis Castillo on 10/6/15.
//  Copyright © 2015 Jose Luis Castillo. All rights reserved.
//

#import <UIKit/UIKit.h>

/* Helper function that will be used to get a path fo the location on disk where the to-do list can be saved. */
NSString *DockPath(void);

@interface AppDelegate : UIResponder
        <UIApplicationDelegate, UITableViewDataSource> // It conforms to  UITableViewDataSource

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic) UITableView *taskTable;
@property (nonatomic) UITextField *taskField;
@property (nonatomic) UIButton *insertButton;

@property (nonatomic) NSMutableArray *tasks;

- (void)addTask:(id)sender;


@end

