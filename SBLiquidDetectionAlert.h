//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBWorkspaceAlertAnimationProviding.h"

@class NSString, SBDashBoardDisconnectAccessoryViewController;

@interface SBLiquidDetectionAlert : SBAlert <SBWorkspaceAlertAnimationProviding>
{
    SBDashBoardDisconnectAccessoryViewController *_disconnectViewController;
    _Bool _wantsToHandleItsOwnAnimation;
}

@property(nonatomic) _Bool wantsToHandleItsOwnAnimation; // @synthesize wantsToHandleItsOwnAnimation=_wantsToHandleItsOwnAnimation;
- (void).cxx_destruct;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (id)legibilitySettings;
- (_Bool)suppressesSiri;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (_Bool)hasTranslucentBackground;
- (void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(_Bool)arg2;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (void)displayDidDisappear;
- (void)displayWillAppear;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
