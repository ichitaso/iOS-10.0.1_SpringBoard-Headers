//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBDisplayLayoutTransition, NSArray, NSString, SBUIAnimationController, SBWorkspaceAlert;

@interface SBAppsToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    NSArray *_topApplications;
    SBWorkspaceAlert *_activatingAlert;
    SBUIAnimationController *_animation;
    CDUnknownBlockType _alertActivationBlock;
    _Bool _animatedAppDeactivation;
    FBDisplayLayoutTransition *_layoutTransition;
    _Bool _deferAlertActivationForAnimationCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType alertActivationBlock; // @synthesize alertActivationBlock=_alertActivationBlock;
- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_updateSceneLayout;
- (_Bool)_isFromMainSwitcher;
- (void)_activateAlert;
- (void)_didComplete;
- (void)_begin;
- (void)_willBegin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

