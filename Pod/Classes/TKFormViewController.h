//
//  TKFormViewController.h
//  ADYWallet
//
//  Created by Taras Kalapun on 9/10/14.
//  Copyright (c) 2014 Taras Kalapun. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TKForm, TKFormRow;
@interface TKFormViewController : UITableViewController

@property (nonatomic, strong) TKForm *form;

- (NSDictionary *)formValues;

- (BOOL)shouldProceedWithActionForRow:(TKFormRow *)row;

- (void)formDidSelectRow:(TKFormRow *)row;
- (void)formDeselectRow:(TKFormRow *)row;
- (void)rowValueHasChanged:(TKFormRow *)row oldValue:(id)oldValue newValue:(id)newValue;

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;
- (void)popViewController:(UIViewController *)viewController animated:(BOOL)animated;

@end
