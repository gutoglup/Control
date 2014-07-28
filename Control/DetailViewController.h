//
//  DetailViewController.h
//  Control
//
//  Created by Augusto Reis on 28/07/14.
//  Copyright (c) 2014 Augusto Reis. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
