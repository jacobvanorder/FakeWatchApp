//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplicationDelegate.h"

@class PUICApplication, PUICApplicationStatusBarItem, UINavigationController;

@protocol PUICApplicationDelegate <UIApplicationDelegate>

@optional
@property(readonly, nonatomic, getter=puic_applicationStatusBarItem) PUICApplicationStatusBarItem *applicationStatusBarItem;
- (_Bool)statusBarShouldPopForBackButtonPressed:(UINavigationController *)arg1;
- (_Bool)statusBarShoulPopForBackButtonPressed:(UINavigationController *)arg1;
- (void)application:(PUICApplication *)arg1 didChangeZoomLevel:(double)arg2;
@end

