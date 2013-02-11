//
//  DetailViewController.h
//  Test
//
//  Created by Maxime Levesque on 2013-02-11.
//  Copyright (c) 2013 Maxime Levesque. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
