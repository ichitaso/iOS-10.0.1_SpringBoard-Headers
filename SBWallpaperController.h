//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "SBDashBoardWallpaperOverlayHosting.h"
#import "SBFLegibilitySettingsProviderDelegate.h"
#import "SBFWallpaperConfigurationManagerDelegate.h"
#import "SBFWallpaperViewInternalObserver.h"
#import "SBUIActiveOrientationObserver.h"
#import "SBWallpaperServerDelegate.h"
#import "UIWindowDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSHashTable, NSMutableSet, NSString, SBComposedWallpaperSpecification, SBFFileCache, SBFWallpaperConfigurationManager, SBFWallpaperView, SBWallpaperAggdLogger, SBWallpaperControllerCoordinator, SBWallpaperPreviewSnapshotCache, SBWallpaperStyleInfo, UIImage, UIView, UIView<SBDashBoardWallpaperOverlay>, UIWindow;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBFWallpaperConfigurationManagerDelegate, BSDescriptionProviding, SBWallpaperServerDelegate, UIWindowDelegate, SBDashBoardWallpaperOverlayHosting>
{
    UIWindow *_wallpaperWindow;
    UIView *_wallpaperContainerView;
    UIView *_wallpaperOverlayContainerView;
    long long _orientation;
    SBFWallpaperView *_lockscreenWallpaperView;
    SBFWallpaperView *_homescreenWallpaperView;
    SBFWallpaperView *_sharedWallpaperView;
    NSHashTable *_lockscreenObservers;
    NSHashTable *_homescreenObservers;
    NSMutableSet *_suspendColorSamplingReasons;
    NSMutableSet *_suspendWallpaperAnimationReasons;
    NSMutableSet *_requireWallpaperReasons;
    NSMutableSet *_hideHomescreenWallpaperReasons;
    NSMutableSet *_hideLockscreenWallpaperReasons;
    long long _displayedVariant;
    double _lockscreenOnlyWallpaperAlpha;
    NSHashTable *_lockscreenBlurViews;
    NSHashTable *_homescreenBlurViews;
    long long _disallowRasterizationBlockCount;
    NSMutableSet *_disallowRasterizationReasonsHomeVariant;
    NSMutableSet *_disallowRasterizationReasonsLockVariant;
    UIImage *_homescreenLightForegroundBlurImage;
    struct CGRect _homescreenLightForegroundBlurImageDisplayRect;
    _Bool _creatingHomescreenLightForegroundBlurImage;
    _Bool _isSuspendingMotionEffectsForBlur;
    SBWallpaperPreviewSnapshotCache *_previewCache;
    long long _activeOrientationSource;
    _Bool _coalescingGeometryChanges;
    long long _locationsWithCoalescedGeometryChanges;
    SBWallpaperControllerCoordinator *_coordinator;
    NSMutableSet *_homescreenStyleChangeDelayReasons;
    SBFFileCache *_downloadedWallpaperCache;
    SBFWallpaperConfigurationManager *_wallpaperConfigurationManager;
    UIView<SBDashBoardWallpaperOverlay> *_wallpaperOverlay;
    double _homescreenWallpaperScale;
    double _lockscreenWallpaperScale;
    SBComposedWallpaperSpecification *_overriddenComposedWallpaperSpecification;
    SBWallpaperStyleInfo *_homescreenStyleInfo;
    SBWallpaperStyleInfo *_lockscreenStyleInfo;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBWallpaperAggdLogger *wallpaperAggdLogger; // @synthesize wallpaperAggdLogger=_wallpaperAggdLogger;
@property(readonly, nonatomic) SBWallpaperStyleInfo *lockscreenStyleInfo; // @synthesize lockscreenStyleInfo=_lockscreenStyleInfo;
@property(readonly, nonatomic) SBWallpaperStyleInfo *homescreenStyleInfo; // @synthesize homescreenStyleInfo=_homescreenStyleInfo;
@property(retain, nonatomic) SBFWallpaperView *sharedWallpaperView; // @synthesize sharedWallpaperView=_sharedWallpaperView;
@property(retain, nonatomic) SBFWallpaperView *homescreenWallpaperView; // @synthesize homescreenWallpaperView=_homescreenWallpaperView;
@property(retain, nonatomic) SBFWallpaperView *lockscreenWallpaperView; // @synthesize lockscreenWallpaperView=_lockscreenWallpaperView;
@property(copy, nonatomic) SBComposedWallpaperSpecification *overriddenComposedWallpaperSpecification; // @synthesize overriddenComposedWallpaperSpecification=_overriddenComposedWallpaperSpecification;
@property(readonly, nonatomic) long long activeOrientationSource; // @synthesize activeOrientationSource=_activeOrientationSource;
@property(nonatomic) double lockscreenWallpaperScale; // @synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale;
@property(nonatomic) double homescreenWallpaperScale; // @synthesize homescreenWallpaperScale=_homescreenWallpaperScale;
- (void).cxx_destruct;
- (id)relinquishHostingOfWallpaperOverlay;
- (void)startHostingWallpaperOverlay:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2;
- (void)wallpaperViewDidChangeWantsRasterization:(id)arg1;
- (void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2;
- (void)wallpaperViewDidInvalidateGeometry:(id)arg1;
- (void)wallpaperViewDidInvalidateBlurs:(id)arg1;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)orientationSource:(long long)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)orientationSource:(long long)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)orientationSource:(long long)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (_Bool)_isAcceptingOrientationChangesFromSource:(long long)arg1;
- (void)setActiveOrientationSource:(long long)arg1 andUpdateToOrientation:(long long)arg2 usingCrossfadeToBlack:(_Bool)arg3;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (void)_saveWallpaperAggdKeysForLocations:(long long)arg1 withConfiguration:(id)arg2;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_reloadWallpaperAndFlushCaches:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRasterizationState;
- (void)_endDisallowRasterizationBlock;
- (void)_beginDisallowRasterizationBlock;
- (id)_getImageInRect:(struct CGRect)arg1 withZoomFactor:(double)arg2 forVariant:(long long)arg3 style:(inout long long *)arg4;
- (id)_newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3;
- (void)_createHomescreenLightForegroundBlurImageIfNecessary;
- (void)_updateBlurGeneration;
- (id)_sourceForFakeBlurView:(id)arg1;
- (void)_unregisterFakeBlurView:(id)arg1;
- (void)_registerFakeBlurView:(id)arg1;
- (void)_suspendOrResumeWallpaperAnimation;
- (void)_suspendOrResumeColorSampling;
- (id)_blurViewsForVariant:(long long)arg1;
- (id)_observersForVariant:(long long)arg1;
- (id)_activeWallpaperView;
- (id)_wallpaperViewForVariant:(long long)arg1;
- (void)_updateBlurImagesForVariant:(long long)arg1;
- (void)_reconfigureBlurViewsForVariant:(long long)arg1;
- (void)_handleWallpaperGeometryChangedForVariant:(long long)arg1;
- (void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2;
- (void)_handleWallpaperChangedForVariant:(long long)arg1;
- (_Bool)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2;
- (_Bool)_updateEffectViewForVariant:(long long)arg1 oldState:(CDStruct_059c2b36 *)arg2 newState:(CDStruct_059c2b36 *)arg3 oldEffectView:(id *)arg4 newEffectView:(id *)arg5;
- (void)_updateMotionEffectsForState:(CDStruct_059c2b36)arg1;
- (_Bool)_shouldSuspendMotionEffectsForState:(CDStruct_059c2b36)arg1;
- (void)_endSuspendingMotionEffectsForBlurIfNeeded;
- (void)_beginSuspendingMotionEffectsForBlurIfNeeded;
- (void)_updateScreenBlanked;
- (void)_accessibilityReduceTransparencyChanged:(id)arg1;
- (void)_motionEffectsChanged;
- (id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(CDStruct_059c2b36)arg2;
- (void)_clearWallpaperEffectView:(id)arg1;
- (void)_clearWallpaperView:(id)arg1;
- (id)_makeAndInsertWallpaperViewWithConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(_Bool)arg3 options:(unsigned long long)arg4;
- (void)_updateSeparateWallpaperForVariants:(long long)arg1 options:(unsigned long long)arg2;
- (void)_updateSharedWallpaperWithOptions:(unsigned long long)arg1;
- (_Bool)_isWallpaperView:(id)arg1 displayingWallpaperWithConfiguration:(id)arg2 forVariant:(long long)arg3;
- (void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (long long)variantsThatDarkenWallpaperToEnsureLegibilityForWallpaperType:(long long)arg1;
- (_Bool)variantsShareWallpaper;
@property(readonly, nonatomic) SBFWallpaperConfigurationManager *wallpaperConfigurationManager;
- (void)_checkForComposedWallpapersAtLaunch;
- (void)_background_setWallpaperForLocations:(long long)arg1 fromImage:(id)arg2 name:(id)arg3;
- (void)_rebuildComposedWallpapers;
- (id)_homeScreenWallpaperSpecificationFromProfile;
- (id)_lockScreenWallpaperSpecificationFromProfile;
- (void)_updateWallpaperParallax;
- (void)_batterySaverModeChanged:(id)arg1;
- (void)_updateWallpaperHidden;
- (_Bool)_isWallpaperHiddenForVariant:(long long)arg1;
- (void)_setWallpaperHidden:(_Bool)arg1 variant:(long long)arg2 reason:(id)arg3;
- (_Bool)_setDisallowRasterization:(_Bool)arg1 withReason:(id)arg2 reasons:(id)arg3;
- (_Bool)_isRasterizationDisallowedForCurrentVariant;
- (id)_window;
@property(readonly, nonatomic) SBFFileCache *downloadedWallpaperCache;
- (id)vendWallpaperViewForConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(_Bool)arg3 options:(unsigned long long)arg4;
- (unsigned long long)_bestStaticWallpaperViewInitializationOptionsForVariant:(long long)arg1 shared:(_Bool)arg2 options:(unsigned long long)arg3;
- (void)setDisallowsRasterization:(_Bool)arg1 forVariant:(long long)arg2 withReason:(id)arg3;
- (id)previewCache;
- (struct CGRect)homescreenLightForegroundBlurImageContentsRectForWallpaperRelativeRect:(struct CGRect)arg1;
- (id)homescreenLightForegroundBlurImage;
- (double)contrastInRect:(struct CGRect)arg1 contrastWithinBoxes:(double *)arg2 contrastBetweenBoxes:(double *)arg3 forVariant:(long long)arg4;
- (double)contrastForVariant:(long long)arg1;
- (double)contrastInRect:(struct CGRect)arg1 forVariant:(long long)arg2;
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3;
- (id)averageColorInRect:(struct CGRect)arg1 forVariant:(long long)arg2;
- (id)averageColorForVariant:(long long)arg1;
- (id)legibilitySettingsForVariant:(long long)arg1;
@property(readonly, nonatomic) id <SBFIrisWallpaperView> irisWallpaperView;
- (void)resumeWallpaperAnimationForReason:(id)arg1;
- (void)suspendWallpaperAnimationForReason:(id)arg1;
- (void)resumeColorSamplingForReason:(id)arg1;
- (void)suspendColorSamplingForReason:(id)arg1;
- (void)removeObserver:(id)arg1 forVariant:(long long)arg2;
- (void)addObserver:(id)arg1 forVariant:(long long)arg2;
- (_Bool)shouldDelayHomescreenStyleUpdates;
- (void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2;
- (void)beginDelayingHomescreenStyleChangesForReason:(id)arg1;
- (void)endRequiringWithReason:(id)arg1;
- (void)beginRequiringWithReason:(id)arg1;
- (_Bool)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;
- (_Bool)setWallpaperStyleTransitionState:(CDStruct_059c2b36)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (_Bool)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4;
- (id)wallpaperStyleInfoForVariant:(long long)arg1;
@property(readonly, nonatomic) CDStruct_059c2b36 currentHomescreenStyleTransitionState;
- (void)setLockscreenOnlyWallpaperAlpha:(double)arg1;
- (void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
- (void)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2;
@property(nonatomic) double windowLevel;
- (void)setLockscreenWallpaperContentsRect:(struct CGRect)arg1;
- (void)updateIrisWallpaperForLockedState;
- (_Bool)updateIrisWallpaperForUnlockedState;
- (void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(nonatomic) long long variant;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1 variant:(long long)arg2;
- (_Bool)removeHomescreenStyleForBundleIdentifier:(id)arg1 withPriority:(long long)arg2 animationFactory:(id)arg3;
- (_Bool)setHomescreenStyleTransitionState:(CDStruct_059c2b36)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4;
- (_Bool)setHomescreenStyle:(long long)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

