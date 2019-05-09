//
//  DataViewController.m
//  cs441_assignment7
//
//  Created by Kevin Wu on 5/7/19.
//  Copyright © 2019 Kevin Wu. All rights reserved.
//

#import "DataViewController.h"

@interface DataViewController ()

@end

@implementation DataViewController

@synthesize label;
@synthesize image;
@synthesize toggle;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.dataLabel.text = [self.dataObject description];
}


@end
