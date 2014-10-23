//
//  TKFormStyle.m
//  ADYWallet
//
//  Created by Taras Kalapun on 9/10/14.
//  Copyright (c) 2014 Taras Kalapun. All rights reserved.
//

#import "TKFormStyle.h"

@implementation TKFormStyle

+ (UIColor *)lightGreyColor {
    return [UIColor colorWithWhite:0.75 alpha:1];
}

+ (UIColor *)darkGreyColor {
    return [UIColor colorWithRed:121.0f/255.0f green:124/255.0f blue:131/255.0f alpha:1.0f];
}

+ (UIColor *)textColor {
    return [UIColor blackColor];
}

+ (UIColor *)disabledTextColor {
    return [UIColor grayColor];
}

+ (UIColor *)tintColor {
    UIWindow *w = [UIApplication sharedApplication].keyWindow;
    return w.rootViewController.view.tintColor;
}

#pragma mark - Font

+ (UIFont *)textFont {
    return [UIFont systemFontOfSize:16];
}

@end
