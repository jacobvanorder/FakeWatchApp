//
//  ViewController.m
//  FakeWatchApp
//
//  Created by mrJacob on 1/10/15.
//  Copyright (c) 2015 SushiGrass. All rights reserved.
//

#import "ViewController.h"
#import "dlfcn.h"
#import <PepperUICore/PUICButton.h>
#import <PepperUICore/PUICActionButton.h>
#import <PepperUICore/PUICSlider.h>
#import <PepperUICore/PUICSwitch.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    PUICButton *button = [[PUICButton alloc] initWithFrame:CGRectMake(0.0f, 0.0f, 100.0f, 44.0f)];
    button.center = self.view.center;
    [button setTitle:@"Hello" forState:UIControlStateNormal];
    [self.view addSubview:button];
    
    PUICActionButton *actionButton = [[PUICActionButton alloc] initWithFrame:CGRectMake(0.0f, 0.0f, 100.0f, 44.0f)];
    actionButton.center = CGPointMake(self.view.center.x, self.view.center.y + 50.0f);
    [actionButton setTitle:@"Hello" forState:UIControlStateNormal];
    [self.view addSubview:actionButton];
    
    PUICSlider *slider = [[PUICSlider alloc] initWithFrame:CGRectMake(0.0f, 0.0f, 200.0f, 44.0f)];
    slider.center = CGPointMake(self.view.center.x, self.view.center.y + 100.0f);
    [self.view addSubview:slider];
    
    PUICSwitch *watchSwitch = [[PUICSwitch alloc] initWithFrame:CGRectMake(0.0f, 0.0f, 200.0f, 44.0f)];
    watchSwitch.center = CGPointMake(self.view.center.x, self.view.center.y + 200.0f);
    [self.view addSubview:watchSwitch];
    
    UISwitch *regularSwitch = [[UISwitch alloc] initWithFrame:CGRectMake(0.0f, 0.0f, 200.0f, 44.0f)];
    regularSwitch.center = CGPointMake(self.view.center.x, self.view.center.y + 300.0f);
    [self.view addSubview:regularSwitch];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
