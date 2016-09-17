//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

@class NSObject<OS_dispatch_group>, SBAutoPiPWorkspaceTransaction, SBUIAnimationController, UIView;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBUIAnimationController *_animation;
    _Bool _animatedActivation;
    _Bool _animatedDeactivation;
    _Bool _deactivatingAppFromAppToAppGesture;
    _Bool _appQuitFromSwitcher;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
    _Bool _performingDosidoWithPinnedSideSwitcherVisible;
    UIView *_homeScreenSnapshotForDismissToSwitcher;
    _Bool _didCancelAppDismissForDismissToSwitcher;
    _Bool _preventWhitePointAdaptationStrengthUpdateOnComplete;
}

@property(nonatomic) _Bool preventWhitePointAdaptationStrengthUpdateOnComplete; // @synthesize preventWhitePointAdaptationStrengthUpdateOnComplete=_preventWhitePointAdaptationStrengthUpdateOnComplete;
- (void).cxx_destruct;
- (id)_newHomeScreenSnapshotViewForDismissToSwitcherWithZoomDownTransitionContext:(id)arg1;
- (_Bool)_fromAppWantsLiveContentForDosido;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_cleanUpAfterAnimation;
- (void)_clearAnimation;
- (void)_animationDidFinish;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_performPostAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPostAnimationTasks;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPreAnimationTasks;
- (id)_setupAnimation;
- (_Bool)_willPerformAnimation;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (_Bool)_transitionWasCancelled;
- (void)_beginTransition;
- (void)_synchronizeWithSceneUpdates;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (_Bool)shouldRestoreSpringBoardContentOnCleanup;
- (void)performAdditionalTransition:(id)arg1;
- (void)cancelAdditionalTransition:(id)arg1;
- (void)prepareToPerformAdditionalTransition:(id)arg1;
- (_Bool)canPerformAdditionalTransition:(id)arg1;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)debugDescription;
- (void)dealloc;

@end

