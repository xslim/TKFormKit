//
//  TKFormDefines.h
//  ADYWallet
//
//  Created by Taras Kalapun on 9/10/14.
//  Copyright (c) 2014 Taras Kalapun. All rights reserved.
//

//#ifndef TKFormDefines
//#define TKFormDefines

typedef NS_ENUM(NSInteger, TKFormRowType) {
    TKFormRowTypeInfo,
    TKFormRowTypeInput,
    TKFormRowTypeSelector,
    TKFormRowTypeButton,
    TKFormRowTypeSwitch,
    TKFormRowTypeDate,
    TKFormRowTypeStepCounter
};

typedef NS_ENUM(NSInteger, TKFormRowInputType) {
    TKFormRowInputTypeText,
    TKFormRowInputTypePassword,
    TKFormRowInputTypeNumber,
    TKFormRowInputTypeInteger,
    TKFormRowInputTypeName,
    TKFormRowInputTypeEmail,
    TKFormRowInputTypePhone,
    TKFormRowInputTypePin
//    TKFormRowInputTypeMoney
};

typedef NS_ENUM(NSInteger, TKFormRowSwitchType) {
    TKFormRowSwitchTypeSwitch,
    TKFormRowSwitchTypeCheck
};

typedef NS_ENUM(NSInteger, TKFormRowSelectorType) {
    TKFormRowSelectorTypeSegmented,
    TKFormRowSelectorTypePush
};

//#endif