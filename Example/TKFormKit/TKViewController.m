//
//  TKViewController.m
//  TKFormKit
//
//  Created by Taras Kalapun on 10/23/2014.
//  Copyright (c) 2014 Taras Kalapun. All rights reserved.
//

#import "TKViewController.h"

@interface TKViewController ()

@end

@implementation TKViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    
    TKForm *form = self.form;
    TKFormSection *section;
    TKFormRow *row;
    
    section = [form addSectionWithTitle:@"Frameworks"];
    [section addRow:[TKFormRow switchWithTag:@"f.nodejs" title:@"NodeJS" value:YES]];
    
    row = [section addRow:[TKFormRow switchWithTag:@"f.jscBindings" title:@"JS Core Bindings" value:YES]];
    row.details = @"JSCore to iOS Framework bindings";
    
    
    section = [form addSectionWithTitle:@"Presentation"];
    [section addRow:[TKFormRow switchWithTag:@"p.keyWindow" title:@"Inject keyWindow" value:YES]];
    [section addRow:[TKFormRow switchWithTag:@"p.nc" title:@"Inject current NC" value:YES]];
    
    section = [form addSectionWithTitle:@"Running"];
    [section addRow:[TKFormRow switchWithTag:@"r.main" title:@"run main()" value:NO]];
}

- (IBAction)runAction:(id)sender {
    NSDictionary *d = self.formValues;
    
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Values" message:d.description delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
    [alert show];
}

@end
