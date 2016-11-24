#import <UIKit/UIKit.h>
#import "UnityAppController.h"
#import "UI/UnityView.h"
#import "UI/UnityViewControllerBase.h"
#import "ViewController.h"
#import "JoystickViewController.h"

@interface TNAppController : UnityAppController<UnityCallProtocol,JoysctickUnityCallProtocol,TNAppControllerProtocol>

- (void)willStartWithViewController:(UIViewController*) controller;

@end

@implementation TNAppController{
    ViewController* firstViewController;
    UIView* initalView;
}

- (void)willStartWithViewController:(UIViewController*) controller {
    
    _rootController	= [[ViewController alloc] init];
    [((ViewController*)_rootController) initialConfiguration];
    ((ViewController*)_rootController).unityCallDelegate = self;
    ((ViewController*)_rootController).tnAppControllerDelegate = self;
    firstViewController=(ViewController*)_rootController;
    
	_rootView		= [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    //_rootController.view = _rootView;
    
    initalView = [[UIView alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    UIImageView* imv = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"appBackground"]];
    [imv setContentMode:UIViewContentModeScaleToFill];
    [imv setFrame:initalView.frame];
    [initalView addSubview:imv];
    
    UIButton *btnNext = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    btnNext.backgroundColor = [UIColor whiteColor];
    [btnNext setTitle:@"Conectarse" forState:UIControlStateNormal];
    btnNext.frame = CGRectMake(0, 0, 200, 44);
    btnNext.frame = CGRectMake(0.5*([UIScreen mainScreen].bounds.size.width-btnNext.frame.size.width),
                               0.5*([UIScreen mainScreen].bounds.size.height-btnNext.frame.size.height)-60, btnNext.frame.size.width, btnNext.frame.size.height);
    [btnNext addTarget:self action:@selector(switchScenesTapped:) forControlEvents:UIControlEventTouchUpInside];
    
    UIButton *btnJoystick = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    btnJoystick.backgroundColor = [UIColor whiteColor];
    [btnJoystick setTitle:@"Joystick" forState:UIControlStateNormal];
    btnJoystick.frame = CGRectMake(0, 0, 200, 44);
    btnJoystick.frame = CGRectMake(0.5*([UIScreen mainScreen].bounds.size.width-btnNext.frame.size.width),
                               0.5*([UIScreen mainScreen].bounds.size.height-btnNext.frame.size.height), btnNext.frame.size.width, btnNext.frame.size.height);
    [btnJoystick addTarget:self action:@selector(joystickTap:) forControlEvents:UIControlEventTouchUpInside];
    
    UIButton *btnProyector = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    btnProyector.backgroundColor = [UIColor whiteColor];
    [btnProyector setTitle:@"Proyector" forState:UIControlStateNormal];
    btnProyector.frame = CGRectMake(200, 0, 200, 44);
    btnProyector.frame = CGRectMake(0.5*([UIScreen mainScreen].bounds.size.width-btnNext.frame.size.width),
                                   0.5*([UIScreen mainScreen].bounds.size.height-btnNext.frame.size.height)+60, btnNext.frame.size.width, btnNext.frame.size.height);
    [btnProyector addTarget:self action:@selector(proyectorTapped:) forControlEvents:UIControlEventTouchUpInside];
 
    
    //logo
    UIImageView* logoImageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"logo_aplicacion"]];
    [logoImageView setFrame:CGRectMake(0, 0, 200, 100)];
    [logoImageView setContentMode:UIViewContentModeScaleAspectFit];
    [logoImageView setFrame:CGRectMake(0.5*([UIScreen mainScreen].bounds.size.width-logoImageView.frame.size.width),
                                       80,
                                       logoImageView.frame.size.width,
                                       logoImageView.frame.size.height)];

    [_rootView addSubview:_unityView];
    [_rootView addSubview:initalView];
    [initalView addSubview:btnNext];
    [initalView addSubview:btnJoystick];
    [initalView addSubview:btnProyector];
    [initalView addSubview:logoImageView];
}

- (void)switchScenesTapped:(id)sender {
    [_rootController presentViewController:firstViewController.browser animated:YES completion:nil];
    //[firstViewController openBrowser];
	//NSLog(@"[TNAppController] Switch scenes tapped");
    
    //[self callUnityObject:"FirstCube" Method:"34e" Parameter:""];
}

- (void)proyectorTapped:(id)sender {
    [initalView removeFromSuperview];
}

- (void)joystickTap:(id)sender {
    JoystickViewController* joytickViewController = [[JoystickViewController alloc] init];
    joytickViewController.unityCallDelegate=self;
    [_rootController presentViewController:joytickViewController animated:YES completion:nil];
}

- (void)callUnityObject:(const char*)object Method:(const char*)method Parameter:(const char*)parameter {
    UnitySendMessage(object, method, parameter);
}

#pragma mark - UnityCallProtocol

-(void) sendMesssageToUnity:(NSString*) sObject Method:(NSString*) sMethod Parameter:(NSString*) finalString{
    [self callUnityObject:[sObject UTF8String] Method:[sMethod UTF8String] Parameter:[finalString UTF8String]];
}

#pragma mark - JoysctickUnityCallProtocol

-(void) sendMesssageToUnityWithAction:(int) action String:(NSString*) finalString{
    [firstViewController sendDataWithAction:action String:finalString];
}

#pragma mark - TNAppControllerProtocol

-(void)dissmissBrowseViewController{
    [_rootController dismissViewControllerAnimated:YES completion:nil];
}

@end

IMPL_APP_CONTROLLER_SUBCLASS(TNAppController)