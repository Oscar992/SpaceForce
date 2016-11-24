//
//  ViewController.h
//  DemoGirocospe
//
//  Created by josue cadillo on 8/04/16.
//  Copyright © 2016 josue cadillo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMotion/CoreMotion.h>

@protocol UnityCallProtocol <NSObject>

-(void) sendMesssageToUnity:(NSString*) sObject Method:(NSString*) sMethod Parameter:(NSString*) finalString;

@end


@protocol TNAppControllerProtocol <NSObject>

-(void) dissmissBrowseViewController;

@end

@interface ViewController : UIViewController<UIAccelerometerDelegate,MCBrowserViewControllerDelegate,MCSessionDelegate>{
}

@property (nonatomic,strong) NSString* serviceType;
@property (nonatomic,strong) MCBrowserViewController* browser;
@property (nonatomic,strong) MCAdvertiserAssistant* assistant;
@property (nonatomic,strong) MCSession* session;
@property (nonatomic,strong) MCPeerID* peerID;
@property SystemSoundID* systemSoundID;


@property (strong, nonatomic) CMMotionManager *motionManager;
@property id<UnityCallProtocol> unityCallDelegate;
@property id<TNAppControllerProtocol> tnAppControllerDelegate;

-(void) initialConfiguration;
-(void)sendDataWithAction:(int) action String:(NSString*) string;
- (IBAction)resetMaxValues:(id)sender;


@end

