//
//  TKFormSection.h
//  ADYWallet
//
//  Created by Taras Kalapun on 9/10/14.
//  Copyright (c) 2014 Taras Kalapun. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TKForm, TKFormRow;
@interface TKFormSection : NSObject

@property (nonatomic, weak) TKForm *form;

@property (nonatomic, strong) NSString *tag;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *footerTitle;

@property (nonatomic, assign) BOOL hidden;

@property (nonatomic, readonly) NSMutableArray *rows;


@property (nonatomic, assign) BOOL isMultivaluedSection;
@property (nonatomic, strong) NSString *multiValuedTag;


+ (instancetype)section;
+ (instancetype)sectionWithTitle:(nullable NSString *)title;
+ (nonnull instancetype)sectionWithTitle:(nullable NSString *)title tag:(nullable NSString *)tag;

- (TKFormRow *)addRow:(TKFormRow *)row;
- (void)addRow:(TKFormRow *)row afterRow:(TKFormRow *)afterRow;
- (void)addRow:(TKFormRow *)row beforeRow:(TKFormRow *)beforeRow;
- (void)removeRowAtIndex:(NSUInteger)index;
- (void)removeRow:(TKFormRow *)row;

- (CGFloat)estimatedMaxRowTitleWidth;

- (NSUInteger)visibleRowsCount;
- (TKFormRow *)visibleRowAtIndex:(NSUInteger)index;

@end
