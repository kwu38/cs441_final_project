//
//  DataViewController.h
//  cs441_assignment7
//
//  Created by Kevin Wu on 5/7/19.
//  Copyright © 2019 Kevin Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;
@interface ViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIButton *button;
@property (nonatomic, strong) IBOutlet UILabel *label;

@property (nonatomic, strong) IBOutlet UIImageView *image, *image2;
@property (nonatomic, assign) NSInteger toggle;
@end

