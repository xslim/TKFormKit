//
//  TKForm.h
//  TKForm
//
//  Created by Taras Kalapun on 9/17/14.
//  Copyright (c) 2014 Taras Kalapun. All rights reserved.
//


#import <Foundation/Foundation.h>

@class TKFormSection, TKFormRow;
@class TKFormViewController;

@protocol TKFormDelegate <NSObject>
@optional
- (void)formDidSelectRow:(TKFormRow *)row;
@end

@interface TKForm : NSObject

@property (nonatomic, weak) id<TKFormDelegate> delegate;
@property (nonatomic, weak) TKFormViewController *viewController;

+ (instancetype)form;


- (TKFormSection *)addSectionWithTitle:(nonnull NSString *)title;
- (TKFormSection *)addSection:(nonnull TKFormSection *)section;
- (void)addSection:(TKFormSection *)section afterSection:(TKFormSection *)afterSection;
//- (void)addSection:(TKFormSection *)section beforeSection:(TKFormSection *)beforeSection;
- (void)removeSectionAtIndex:(NSUInteger)index;
- (void)removeSection:(TKFormSection *)section;

// helper
- (void)addRow:(nonnull TKFormRow *)row;

- (NSDictionary *)formValues;

- (TKFormSection *)sectionWithTag:(NSString *)tag;
- (TKFormRow *)rowWithTag:(NSString *)tag;
- (TKFormRow *)rowAtIndexPath:(NSIndexPath *)indexPath;

- (NSUInteger)visibleSectionsCount;
- (TKFormSection *)visibleSectionAtIndex:(NSUInteger)index;
- (TKFormRow *)visibleRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSIndexPath *)indexPathForRow:(TKFormRow *)row;
- (NSIndexPath *)indexPathForVisibleRow:(TKFormRow *)row;

//- (void)hideSectionTags:(NSArray *)sectionTags rowTags:(NSArray *)rowTags;
- (void)toggleSectionTags:(NSArray *)sectionTags rowTags:(NSArray *)rowTags;

- (void)sectionHasBeenRemoved:(TKFormSection *)section atIndex:(NSUInteger)index;
- (void)sectionHasBeenAdded:(TKFormSection *)section atIndex:(NSUInteger)index;
- (void)rowHasBeenAdded:(TKFormRow *)formRow atIndexPath:(NSIndexPath *)indexPath;
- (void)rowHasBeenRemoved:(TKFormRow *)formRow atIndexPath:(NSIndexPath *)indexPath;
- (void)rowValueHasChanged:(TKFormRow *)row oldValue:(id)oldValue newValue:(id)newValue;

@end
