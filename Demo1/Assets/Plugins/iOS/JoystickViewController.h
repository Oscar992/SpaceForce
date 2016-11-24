//
//  ViewController.h
//  DemoJoystickiOS
//
//  Created by josue cadillo on 21/05/16.
//  Copyright © 2016 josue cadillo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomButton.h"

@protocol JoysctickUnityCallProtocol <NSObject>

-(void) sendMesssageToUnityWithAction:(int) action String:(NSString*) finalString;

@end

@interface JoystickViewController : UIViewController<CustomButtonDelegate>

-(void) initialConfiguration;
@property id<JoysctickUnityCallProtocol> unityCallDelegate;

@end

