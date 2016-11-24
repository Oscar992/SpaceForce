//
//  CustomView.h
//  Unity-iPhone
//
//  Created by josue cadillo on 17/06/16.
//
//

#import <UIKit/UIKit.h>

@protocol CustomButtonDelegate <NSObject>

-(void) canceledButton;

@end

@interface CustomButton : UIButton

@property id<CustomButtonDelegate> customButtonDelegate;

@end
