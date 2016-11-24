//
//  ViewController.m
//  DemoGirocospe
//
//  Created by josue cadillo on 8/04/16.
//  Copyright © 2016 josue cadillo. All rights reserved.
//

#import "ViewController.h"
#define EPS 1

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

}

-(void) initialConfiguration{
    self.motionManager = [[CMMotionManager alloc] init];
    self.motionManager.accelerometerUpdateInterval = .2;
    self.motionManager.gyroUpdateInterval = .2;
    
    [self.motionManager startAccelerometerUpdatesToQueue:[NSOperationQueue currentQueue]
                                             withHandler:^(CMAccelerometerData  *accelerometerData, NSError *error) {
                                                 [self outputAccelertionData:accelerometerData.acceleration];
                                                 if(error){
                                                     
                                                     NSLog(@"%@", error);
                                                 }
                                             }];
    
    [self.motionManager startGyroUpdatesToQueue:[NSOperationQueue currentQueue]
                                    withHandler:^(CMGyroData *gyroData, NSError *error) {
                                        [self outputRotationData:gyroData.rotationRate];
                                    }];
    
    self.serviceType = @"multipeer-chat";
    self.peerID = [[MCPeerID alloc] initWithDisplayName:[UIDevice currentDevice].name];
    self.session = [[MCSession alloc] initWithPeer:self.peerID];
    self.session.delegate = self;
    
    //create the browser ViewController with a unique service name
    self.browser = [[MCBrowserViewController alloc] initWithServiceType:self.serviceType
                                                                session:self.session];
    self.browser.delegate = self;
    
    self.assistant = [[MCAdvertiserAssistant alloc] initWithServiceType:self.serviceType
                                                          discoveryInfo:nil
                                                                session:self.session];
    [self.assistant start];
}


#pragma mark - Out Methods

-(void)sendDataWithAction:(int) action String:(NSString*) string{
    string = [string copy];
    
    NSString* finalString;
    if (action==0) {
        finalString = [NSString stringWithFormat:@"%@ %@",@"Joystick",string];
    }
    else if (action==1){
        finalString = [NSString stringWithFormat:@"%@ %@",@"Shoot",string];
    }
    else if (action==2){
        finalString = [NSString stringWithFormat:@"%@ %@",@"Pause",string];
    }
    else if (action==3){
        finalString = [NSString stringWithFormat:@"%@ %@",@"Salir",string];
    }
    
    NSError*error;
    NSData * data = [finalString dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:NO];
    @try {
        [self.session sendData:data
                       toPeers:self.session.connectedPeers
                      withMode:MCSessionSendDataUnreliable
                         error:&error];
    } @catch (NSException *exception) {
        NSLog(@"Error ocurred");
    }
}

-(void)outputAccelertionData:(CMAcceleration)acceleration
{
    double fy = acceleration.y*5;
    //NSLog(@"Fy: %lf",fy);
    if (fy>(-1)*EPS && fy<EPS) {
        fy = 0;
    }
    
    
    if (fy<0) {
        fy = -1;
    }
    else if (fy>0){
        fy = 1;
    }
    
    NSString* xString = [NSString stringWithFormat:@"%.2f",acceleration.x*5];
    NSString* yString = [NSString stringWithFormat:@"%.2f",(-1)*fy];
    NSString* zString = [NSString stringWithFormat:@"%.2f",acceleration.z*5];
    xString=@"0.0";
    zString=@"0.0";
    //NSString* finalString = [NSString stringWithFormat:@"%@ %@ %@ %@",@"Accelerometer",yString,xString,zString];
 
    fy*=-1;
    yString = [NSString stringWithFormat:@"%d",(int)fy];
    NSString* finalString = [NSString stringWithFormat:@"%@ %@",@"Accelerometer",yString];
    
    //NSLog(@"Acceleration data: %@",finalString);
    //[self.unityCallDelegate sendMesssageToUnity:finalString];
    NSError*error;
    NSData * data = [finalString dataUsingEncoding:NSUTF8StringEncoding allowLossyConversion:NO];
    
    @try {
        [self.session sendData:data
                       toPeers:self.session.connectedPeers
                      withMode:MCSessionSendDataUnreliable
                         error:&error];
    } @catch (NSException *exception) {
        NSLog(@"Error ocurred");
    }
    
    
    
}
-(void)outputRotationData:(CMRotationRate)rotation
{
    return;
}

#pragma mark - Session

-(void)browserViewControllerWasCancelled:(MCBrowserViewController *)browserViewController{
    [self.tnAppControllerDelegate dissmissBrowseViewController];
    //[self dismissViewControllerAnimated:YES completion:nil];
}
-(void)browserViewControllerDidFinish:(MCBrowserViewController *)browserViewController{
    [self.tnAppControllerDelegate dissmissBrowseViewController];
    //[self dismissViewControllerAnimated:YES completion:nil];
}
-(void)session:(MCSession *)session didReceiveStream:(NSInputStream *)stream withName:(NSString *)streamName fromPeer:(MCPeerID *)peerID{
    
}
-(void)session:(MCSession *)session didReceiveData:(NSData *)data fromPeer:(MCPeerID *)peerID{
    //dispatch_async(dispatch_get_main_queue(),^{
        NSString* msg;
        msg = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
        NSArray* tempArray = [msg componentsSeparatedByString:@" "];
        NSString* tempns = [[NSString alloc] init];
        for (int i=1; i<[tempArray count]; i++) {
            if (i==1) {
                tempns = [tempns stringByAppendingString:[NSString stringWithFormat:@"%@",[tempArray objectAtIndex:i]]];
            }
            else{
                tempns = [tempns stringByAppendingString:[NSString stringWithFormat:@" %@",[tempArray objectAtIndex:i]]];
            }
        }
        if ([tempArray count]>0) {
            NSString* sAction = [tempArray objectAtIndex:0];
            if ([sAction isEqualToString:@"Accelerometer"]) {
                [self.unityCallDelegate sendMesssageToUnity:@"Jet" Method:@"moveSpaceDirection" Parameter:tempns];
            }
            else if ([sAction isEqualToString:@"Joystick"]) {
                [self.unityCallDelegate sendMesssageToUnity:@"Cube" Method:@"moveCursor" Parameter:tempns];
                [self.unityCallDelegate sendMesssageToUnity:@"Cursor" Method:@"moveCursorUI" Parameter:tempns];
            }
            else if ([sAction isEqualToString:@"Shoot"]) {
                
                //Jet
                [self.unityCallDelegate sendMesssageToUnity:@"Jet" Method:@"shootWithButton" Parameter:tempns];
                
                //Canvas
                [self.unityCallDelegate sendMesssageToUnity:@"Canvas" Method:@"StartMenu" Parameter:tempns];
                [self.unityCallDelegate sendMesssageToUnity:@"Canvas" Method:@"iniciarJuego" Parameter:tempns];
                [self.unityCallDelegate sendMesssageToUnity:@"CanvasPausa" Method:@"menu" Parameter:tempns];
                [self.unityCallDelegate sendMesssageToUnity:@"Canvas" Method:@"menu" Parameter:tempns];
                [self.unityCallDelegate sendMesssageToUnity:@"Canvas" Method:@"salir" Parameter:tempns];
                
            }
            
            else if ([sAction isEqualToString:@"Pause"]) {
                
                //Camara
                [self.unityCallDelegate sendMesssageToUnity:@"Camera" Method:@"pausa" Parameter:tempns];
            }
            else if ([sAction isEqualToString:@"Salir"]) {
                
                //Camara
                [self.unityCallDelegate sendMesssageToUnity:@"Camera" Method:@"salirEvent" Parameter:tempns];
            }
        }
        //[self updateChat:msg fromPeer:peerID];
        
    //});

}
-(void)session:(MCSession *)session peer:(MCPeerID *)peerID didChangeState:(MCSessionState)state{
    switch( state) {
        case MCSessionStateConnected:
            NSLog(@"Connected: \(peerID.displayName)");
            
        case MCSessionStateConnecting:
            NSLog(@"Connecting: \(peerID.displayName)");
            
        case MCSessionStateNotConnected:
            NSLog(@"Not Connected: \(peerID.displayName)");
    }
}
-(void)session:(MCSession *)session didStartReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID withProgress:(NSProgress *)progress{
    
}
-(void)session:(MCSession *)session didFinishReceivingResourceWithName:(NSString *)resourceName fromPeer:(MCPeerID *)peerID atURL:(NSURL *)localURL withError:(NSError *)error{
    
}


#pragma mark - Own Functions

-(void) updateChat:(NSString*) text fromPeer:(MCPeerID*) peerID{
    NSString* name;
    
    if (peerID!=nil) {
        if(self.peerID == peerID){
            name = @"Me";
        }
        else {
            name = peerID.displayName;
        }
        //NSString* message = [NSString stringWithFormat:@"%@: %@\n",name,text];
        //self.chatView.text = [NSString stringWithFormat:@"%@\n%@\n",self.chatView.text,message];
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
