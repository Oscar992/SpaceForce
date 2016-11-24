//
//  ViewController.m
//  DemoJoystickiOS
//
//  Created by josue cadillo on 21/05/16.
//  Copyright © 2016 josue cadillo. All rights reserved.
//

#import "JoystickViewController.h"
#import "CustomButton.h"

@interface JoystickViewController ()

@end

@implementation JoystickViewController{
    UIView* joystickBackgroundView;
    CustomButton* joystickCursorButton;
    
    UIImageView* logoImageView;
    UIButton* shootButton;
    UIButton* pausarButton;
    UIButton* salirButton;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self initialConfiguration];
    
}

-(void) initialConfiguration{
    
    UIImageView* imv;
    UIImage* image;
    
    for (UIView* v in self.view.subviews) {
        [v removeFromSuperview];
    }
    
    imv = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"appBackground"]];
    [imv setContentMode:UIViewContentModeScaleToFill];
    [imv setFrame:self.view.frame];
    [self.view addSubview:imv];
    
    double pSize = 371.0/2.0;
    
    joystickBackgroundView = [[UIView alloc] initWithFrame:CGRectMake(20,
                                                                      ([UIScreen mainScreen].bounds.size.height-pSize)*0.5,
                                                                      pSize,
                                                                      pSize)];
    joystickBackgroundView.backgroundColor = [UIColor clearColor];
    [joystickBackgroundView setClipsToBounds:YES];
    
    imv = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"joystickBackground"]];
    [imv setContentMode:UIViewContentModeScaleAspectFit];
    [imv setFrame:CGRectMake(0, 0, joystickBackgroundView.frame.size.width, joystickBackgroundView.frame.size.height)];
    [joystickBackgroundView addSubview:imv];
    
    //joystickCursorButton
    joystickCursorButton = [[CustomButton alloc] initWithFrame:CGRectMake(0, 0, 80, 80)];
    [joystickCursorButton addTarget:self action:@selector(dragHandler:withEvent:) forControlEvents:UIControlEventTouchDragInside];
    [joystickCursorButton addTarget:self action:@selector(dragHandler:withEvent:) forControlEvents:UIControlEventTouchDragOutside];
    [joystickCursorButton addTarget:self action:@selector(dragHandler:withEvent:) forControlEvents:UIControlEventTouchDragExit];
    joystickCursorButton.customButtonDelegate=self;
    
    image = [UIImage imageNamed:@"joystickCursorBackGround"];
    [joystickCursorButton setBackgroundImage:image forState:UIControlStateNormal];
    [joystickCursorButton setBackgroundImage:image forState:UIControlStateSelected];
    [joystickCursorButton setBackgroundImage:image forState:UIControlStateHighlighted];
    imv = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"joystickCursor"]];
    [imv setContentMode:UIViewContentModeScaleAspectFit];
    [imv setFrame:CGRectMake(0, 0, joystickCursorButton.frame.size.width, joystickCursorButton.frame.size.height)];
    [imv setUserInteractionEnabled:NO];
    [joystickCursorButton addSubview:imv];
    [joystickCursorButton addTarget:self action:@selector(cancelHandler:withEvent:) forControlEvents:UIControlEventTouchCancel];
    [joystickCursorButton addTarget:self action:@selector(cancelHandler:withEvent:) forControlEvents:UIControlEventTouchDragExit];
    [joystickCursorButton addTarget:self action:@selector(cancelHandler:withEvent:) forControlEvents:UIControlEventTouchUpOutside];
    
    //shootButton
    shootButton = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 120, 120)];
    image = [UIImage imageNamed:@"botonA"];
    [shootButton setBackgroundImage:image forState:UIControlStateNormal];
    [shootButton setContentMode:UIViewContentModeScaleAspectFit];
    shootButton.frame = CGRectMake([UIScreen mainScreen].bounds.size.width-shootButton.frame.size.width-100,
                                   [UIScreen mainScreen].bounds.size.height-shootButton.frame.size.height-240,
                                   shootButton.frame.size.width,
                                   shootButton.frame.size.height);
    [shootButton addTarget:self action:@selector(shootEvent:) forControlEvents:UIControlEventTouchUpInside];
    
    //pausarButton
    pausarButton = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 200, 50)];
    image = [UIImage imageNamed:@"botonPausa"];
    [pausarButton setBackgroundImage:image forState:UIControlStateNormal];
    [pausarButton setContentMode:UIViewContentModeScaleAspectFit];
    pausarButton.frame = CGRectMake(
                                    shootButton.frame.origin.x+
                                    shootButton.frame.size.width/2-
                                    pausarButton.frame.size.width/2,
                                    
                                   shootButton.frame.origin.y-100,
                                   pausarButton.frame.size.width,
                                   pausarButton.frame.size.height);
    [pausarButton addTarget:self action:@selector(pauseEvent:) forControlEvents:UIControlEventTouchUpInside];
    
    
    //salirButton
    salirButton = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 200, 50)];
    image = [UIImage imageNamed:@"botonSalir"];
    [salirButton setBackgroundImage:image forState:UIControlStateNormal];
    [salirButton setContentMode:UIViewContentModeScaleAspectFit];
    salirButton.frame = CGRectMake(
                                    0.5*([UIScreen mainScreen].bounds.size.width-salirButton.frame.size.width),
                                    [UIScreen mainScreen].bounds.size.height-salirButton.frame.size.height-80,
                                    salirButton.frame.size.width,
                                    salirButton.frame.size.height);
    [salirButton addTarget:self action:@selector(salirEvent:) forControlEvents:UIControlEventTouchUpInside];
    
    
    [joystickBackgroundView addSubview:joystickCursorButton];
    [joystickCursorButton setCenter:CGPointMake(joystickBackgroundView.frame.size.width/2,
                                                joystickBackgroundView.frame.size.height/2)];
    [self.view addSubview:shootButton];
    [self.view addSubview:pausarButton];
    [self.view addSubview:salirButton];
    [self.view addSubview:joystickBackgroundView];
    
    
    pSize = 380;
    //logoImageView
    logoImageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"logo_aplicacion"]];
    [logoImageView setFrame:CGRectMake(0, 0, pSize, pSize)];
    [logoImageView setContentMode:UIViewContentModeScaleAspectFit];
    [logoImageView setFrame:CGRectMake(0.5*([UIScreen mainScreen].bounds.size.width-logoImageView.frame.size.width),
                                       0.5*([UIScreen mainScreen].bounds.size.height-logoImageView.frame.size.height),
                                       logoImageView.frame.size.width,
                                       logoImageView.frame.size.height)];
    
    [self.view addSubview:logoImageView];
}

-(void)dragHandler:(UIButton *)sender withEvent:(UIEvent *)event
{
    UITouch *touch = [[event allTouches] anyObject];
    CGPoint p1 = [touch locationInView:self.view];
    CGPoint p;
    
    p1.x -= joystickBackgroundView.frame.origin.x;
    p1.y -= joystickBackgroundView.frame.origin.y;
    
    p.x = p1.x-(joystickBackgroundView.center.x-joystickBackgroundView.frame.origin.x);
    p.y = p1.y-(joystickBackgroundView.center.y-joystickBackgroundView.frame.origin.y);
    
    double dif = sqrt(p.x*p.x+p.y*p.y);
    double maxDif = (joystickBackgroundView.frame.size.width-joystickCursorButton.frame.size.width-0)/2.0;
    if (dif < maxDif) {
        [joystickCursorButton setCenter:p1];
        p.y*=(-1);
        NSString* joystickString = [NSString stringWithFormat:@"%lf %lf",p.x/35.0,p.y/35.0];
        [self.unityCallDelegate sendMesssageToUnityWithAction:0 String:joystickString];
    }
    else if (dif>0){
        
        p.x/=dif;
        p.y/=dif;
        p.x*=maxDif;
        p.y*=maxDif;
        
        p1.y = p.y+(joystickBackgroundView.center.y-joystickBackgroundView.frame.origin.y);
        p1.x = p.x+(joystickBackgroundView.center.x-joystickBackgroundView.frame.origin.x);
        [joystickCursorButton setCenter:p1];
        
        p.y*=(-1);
        NSString* joystickString = [NSString stringWithFormat:@"%lf %lf",p.x/35.0,p.y/35.0];
        [self.unityCallDelegate sendMesssageToUnityWithAction:0 String:joystickString];
    }
}

-(void)cancelHandler:(UIButton *)sender withEvent:(UIEvent *)event
{
    
}


-(void) shootEvent:(id) sender{
    [self.unityCallDelegate sendMesssageToUnityWithAction:1 String:@""];
}

-(void) pauseEvent:(id) sender{
    [self.unityCallDelegate sendMesssageToUnityWithAction:2 String:@""];
}

-(void) salirEvent:(id) sender{
    [self.unityCallDelegate sendMesssageToUnityWithAction:3 String:@""];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - CustomButtonDelegate

-(void)canceledButton{
    joystickCursorButton.center= CGPointMake(joystickBackgroundView.center.x-joystickBackgroundView.frame.origin.x,joystickBackgroundView.center.y-joystickBackgroundView.frame.origin.y);
}

@end
