//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBInfoOperand;

@interface SBCompoundInfoOperand : NSObject
{
    SBInfoOperand *_activeOperand;
    SBInfoOperand *_referenceOperand;
}

+ (id)compoundOperandWithOperand:(id)arg1 referenceOperand:(id)arg2;
@property(readonly, nonatomic) SBInfoOperand *referenceOperand; // @synthesize referenceOperand=_referenceOperand;
@property(readonly, nonatomic) SBInfoOperand *activeOperand; // @synthesize activeOperand=_activeOperand;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic, getter=isSectionOperand) _Bool sectionOperand;
- (id)initWithOperand:(id)arg1 operand:(id)arg2;

@end

