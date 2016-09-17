//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

@class CAShapeLayer, NSObject<OS_dispatch_queue>, SBAppSwitcherSettings, SBApplication, SBDisplayItem, SBFakeStatusBarView, SBZoomableCrossfadeView, UIView, _SBAppSwitcherSnapshotContext;

@interface SBAppSwitcherSnapshotView : SBSwitcherWallpaperPageContentView
{
    SBDisplayItem *_displayItem;
    SBApplication *_application;
    UIView *_containerView;
    SBAppSwitcherSettings *_settings;
    _SBAppSwitcherSnapshotContext *_snapshotContext;
    SBFakeStatusBarView *_fakeStatusBar;
    double _cornerRadius;
    CAShapeLayer *_solidColorBackstopLayer;
    SBZoomableCrossfadeView *_updateCrossfadeView;
    SBZoomableCrossfadeView *_zoomUpCrossfadeView;
    _SBAppSwitcherSnapshotContext *_zoomUpSnapshotContext;
    _SBAppSwitcherSnapshotContext *_deferredUpdateSnapshotContext;
    _Bool _isVisible;
    _Bool _presenting;
    _Bool _interactive;
    _Bool _invalidated;
    _Bool _loadedImage;
    _Bool _needsZoomUpImage;
    _Bool _needsTwoAppZoomUpBackground;
    _Bool _preferDownscaledSnapshot;
    long long _appSnapshotUpdatedSequenceID;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    _Bool _shouldTransitionToDefaultPng;
    struct CGRect _statusBarLayoutFrame;
}

+ (id)_fallbackDefaultBackgroundColor;
+ (id)appSwitcherSnapshotViewForDisplayItem:(id)arg1 orientation:(long long)arg2 preferringDownscaledSnapshot:(_Bool)arg3 loadAsync:(_Bool)arg4 withQueue:(id)arg5;
@property(nonatomic) struct CGRect statusBarLayoutFrame; // @synthesize statusBarLayoutFrame=_statusBarLayoutFrame;
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) SBZoomableCrossfadeView *updateCrossfadeView; // @synthesize updateCrossfadeView=_updateCrossfadeView;
@property(nonatomic) _Bool shouldTransitionToDefaultPng; // @synthesize shouldTransitionToDefaultPng=_shouldTransitionToDefaultPng;
@property(readonly, copy, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
- (void).cxx_destruct;
- (void)_prepareStatusBarIfNeededForTransitionRequest:(id)arg1 initialProgress:(double)arg2;
- (void)_createStatusBarIfNeeded;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateTranslucency;
- (struct CGAffineTransform)_rotationTransformForOrientation;
- (long long)_transformOrientation;
- (long long)_containerOrientation;
- (struct CGRect)_snapshotImageFrameForContext:(id)arg1;
- (void)_snapshotImageLoaded:(struct CGImage *)arg1 forSnapshotContext:(id)arg2 downscaled:(_Bool)arg3;
- (void)_loadImageAsyncFromSnapshotContext:(id)arg1;
- (void)_loadImageAsyncFromSnapshotContext:(id)arg1 displayItem:(id)arg2;
- (_Bool)_queue_keepGoing;
- (struct CGImage *)_queue_createDecodedImageIfPossible:(struct CGImage *)arg1;
- (id)_contextForAvailableSnapshotWithLayoutState:(id)arg1 preferringDownscaled:(_Bool)arg2 defaultImageOnly:(_Bool)arg3;
- (void)_loadSnapshotAsyncPreferringDownscaled:(_Bool)arg1;
- (void)_loadZoomUpSnapshotSyncForTransitionRequest:(id)arg1;
- (void)_loadSnapshotSyncPreferringDownscaled:(_Bool)arg1;
- (id)_syncImageFromSnapshot:(id)arg1;
- (void)_layoutContainer;
- (struct CGRect)_frameForBackstopLayer;
- (void)_crossfadeToNewSnapshotImage:(id)arg1 withSnapshotContext:(id)arg2;
- (void)_crossfadeToZoomUpViewIfNecessaryForTransitionRequest:(id)arg1;
- (_Bool)_needsDifferentSnapshotForMedusaForLayoutState:(id)arg1;
- (void)_setCornerRadiusIfNecessaryForSnapshotImageView:(id)arg1;
- (void)_configureSnapshotImageView:(id)arg1;
- (void)_snapshotChanged:(id)arg1;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
- (void)_layoutFakeStatusBar;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)invalidate;
- (void)setOrientation:(long long)arg1 orientationBehavior:(int)arg2 preferringDownscaledSnapshot:(_Bool)arg3;
- (void)layoutSubviews;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithDisplayItem:(id)arg1 application:(id)arg2 orientation:(long long)arg3 preferringDownscaledSnapshot:(_Bool)arg4 async:(_Bool)arg5 withQueue:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end

