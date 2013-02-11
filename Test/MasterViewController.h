//
//  MasterViewController.h
//  Test
//
//  Created by Maxime Levesque on 2013-02-11.
//  Copyright (c) 2013 Maxime Levesque. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
