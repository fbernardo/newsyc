//
//  AppDelegate.h
//  newsyc
//
//  Created by Grant Paul on 3/3/11.
//  Copyright 2011 Xuzz Productions, LLC. All rights reserved.
//

#import "StatusDelegate.h"

@class NavigationController;
@interface AppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate, StatusDelegate> {
    UIWindow *window;
    NavigationController *navigationController;
}

@end
