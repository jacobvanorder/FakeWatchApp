//
//  main.m
//  FakeWatchApp
//
//  Created by mrJacob on 1/10/15.
//  Copyright (c) 2015 SushiGrass. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "dlfcn.h"
#import "AppDelegate.h"

int main(int argc, char * argv[]) {
    @autoreleasepool {
        dlopen("/System/Library/PrivateFrameworks/PepperUICore.framework", RTLD_LAZY);
        Class PUICApplication = NSClassFromString(@"PUICApplication");
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([PUICApplication class]));
    }
}