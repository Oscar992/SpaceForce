//
//  CustomView.m
//  Unity-iPhone
//
//  Created by josue cadillo on 17/06/16.
//
//

#import "CustomButton.h"

@implementation CustomButton

-(void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [self.customButtonDelegate canceledButton];
}

-(void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [self.customButtonDelegate canceledButton];
}


@end
