//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationController.h"

@class SBStarkScreenController;

@interface SBUIStarkScreenAnimationController : SBUIAnimationController
{
    SBStarkScreenController *_starkScreenController;
}

@property(readonly, nonatomic) SBStarkScreenController *starkScreenController; // @synthesize starkScreenController=_starkScreenController;
- (void).cxx_destruct;
- (id)__waitForAppActivationTransactionForApplication:(id)arg1;
- (void)_cleanupAnimation;
- (void)__startAnimation;
- (_Bool)__wantsInitialProgressStateChange;
- (id)_getTransitionWindow;
- (id)initWithTransitionContextProvider:(id)arg1 starkScreenController:(id)arg2;

@end

