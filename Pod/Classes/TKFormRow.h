//
//  TKFormRow.h
//  ADYWallet
//
//  Created by Taras Kalapun on 9/10/14.
//  Copyright (c) 2014 Taras Kalapun. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "TKFormDefines.h"

@class TKFormSection, TKFormViewController, TKFormCell;
@interface TKFormRow : NSObject

@property (nonatomic, weak) TKFormSection *section;

@property (nonatomic, strong) NSString *tag;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *details;

@property (nonatomic, assign) BOOL hasImage;
@property (nonatomic, strong) NSString *image;
@property (nonatomic, strong) NSString *imagePath;

@property (nonatomic, assign) TKFormRowType type;
@property (nonatomic, assign) TKFormRowInputType inputType;
@property (nonatomic, assign) TKFormRowSelectorType selectorType;
@property (nonatomic, assign) TKFormRowSwitchType switchType;

@property (nonatomic, strong) id value;
@property (nonatomic, assign) SEL actionSelector;
@property (nonatomic, assign) BOOL disabled;
@property (nonatomic, assign) BOOL required;
@property (nonatomic, assign) BOOL hidden;

@property (nonatomic, strong) Class viewControllerClass;
@property (nonatomic, strong) Class customCellClass;

@property (nonatomic, strong) NSArray *selectorOptions;
@property (nonatomic, strong) NSDictionary *selectorOptionsDictionary;

@property (nonatomic, strong) NSArray *toggleSectionTags;
@property (nonatomic, strong) NSArray *toggleRowTags;

@property (nonatomic, strong) NSArray *toggleOffRowTags;

@property (nonatomic, strong) NSMutableDictionary *cellConfig;
//@property (nonatomic, strong) NSMutableDictionary *cellConfigAtConfigure;


+ (instancetype)rowWithTag:(nonnull NSString *)tag type:(TKFormRowType)type;
+ (instancetype)rowWithTag:(nonnull NSString *)tag type:(TKFormRowType)type title:(nonnull NSString *)title;

+ (instancetype)infoWithTag:(nonnull NSString *)tag title:(nonnull NSString *)title value:(nullable id)value;

+ (instancetype)inputWithTag:(nonnull NSString *)tag title:(nonnull NSString *)title value:(nullable id)value;
+ (instancetype)inputWithTag:(nonnull NSString *)tag type:(TKFormRowInputType)type title:(nonnull NSString *)title value:(nullable id)value;
+ (instancetype)inputWithTag:(nonnull NSString *)tag type:(TKFormRowInputType)type title:(nonnull NSString *)title placeholder:(nullable NSString *)placeholder value:(id)value;

+ (instancetype)switchWithTag:(nonnull NSString *)tag title:(nonnull NSString *)title value:(BOOL)value;
+ (instancetype)switchWithTag:(nonnull NSString *)tag type:(TKFormRowSwitchType)type title:(nonnull NSString *)title value:(BOOL)value;

+ (instancetype)buttonWithTitle:(nonnull NSString *)title vcClass:(Class)vcClass;

+ (instancetype)selectorWithTag:(nonnull NSString *)tag title:(nonnull NSString *)title value:(id)value;
+ (instancetype)selectorWithTag:(nonnull NSString *)tag type:(TKFormRowSelectorType)type title:(nonnull NSString *)title value:(nullable id)value;



//@property (nonatomic, strong, readonly) NSMutableDictionary *cellClassesForRowTypes;
//+ (void)registerCellClass:(Class)cellClass forRowType:(NSString *)type;

- (TKFormCell *)cellForFormController:(TKFormViewController *)formController;
- (CGFloat)estimatedTitleWidth;
- (CGFloat)estimatedMaxRowTitleWidthInSection;

- (void)updateCell;

@end
