//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBUIAnimationController, SBWorkspaceAlert, SBWorkspaceApplication;

@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBWorkspaceAlert *_activatingAlert;
    SBWorkspaceApplication *_topApplication;
    SBUIAnimationController *_animation;
    _Bool _animatedAppDeactivation;
    _Bool _fromStarkLauncher;
}

@property(readonly, nonatomic) SBWorkspaceAlert *alert; // @synthesize alert=_activatingAlert;
- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_didComplete;
- (void)_begin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
