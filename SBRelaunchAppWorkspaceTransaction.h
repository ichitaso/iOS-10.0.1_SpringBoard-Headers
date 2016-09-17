//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBStarkScreenController, SBWorkspaceApplication;

@interface SBRelaunchAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    _Bool _relaunchSuspended;
    _Bool _willBeOccluded;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    SBStarkScreenController *_starkScreenController;
    SBWorkspaceApplication *_toApp;
}

@property(retain, nonatomic) SBStarkScreenController *starkScreenController; // @synthesize starkScreenController=_starkScreenController;
- (void).cxx_destruct;
- (void)_handleAppRelaunch:(id)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_cleanUpAnimation;
- (id)_setupAnimation;
- (id)_animationForApp:(id)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end

