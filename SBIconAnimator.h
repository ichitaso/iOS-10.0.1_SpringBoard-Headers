//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SBFolderController, SBFolderControllerAnimationContext, SBIconAnimationSettings, SBValueConvergenceAnimator, UIView;

@interface SBIconAnimator : NSObject
{
    double _fraction;
    double _hintFraction;
    _Bool _startAnimationAfterRotationEnds;
    _Bool _windowIsRotating;
    _Bool _cleanedUp;
    _Bool _animating;
    NSMutableArray *_pendedAnimationContexts;
    SBFolderControllerAnimationContext *_animationContext;
    NSString *_instanceIdentifier;
    _Bool _invalidated;
    id <SBIconAnimatorDelegate> _delegate;
    SBIconAnimationSettings *_settings;
    SBValueConvergenceAnimator *_hintAnimator;
    UIView *_backgroundDarkeningView;
    SBFolderController *_folderController;
}

@property(readonly, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(readonly, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(retain, nonatomic) UIView *backgroundDarkeningView; // @synthesize backgroundDarkeningView=_backgroundDarkeningView;
@property(retain, nonatomic) SBValueConvergenceAnimator *hintAnimator; // @synthesize hintAnimator=_hintAnimator;
@property(nonatomic) double hintFraction; // @synthesize hintFraction=_hintFraction;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) SBIconAnimationSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <SBIconAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_windowFinishedRotating;
- (void)_invalidateCompletions;
- (void)_allowRotationOnMainWindowIfNecessary:(_Bool)arg1;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (_Bool)_isDelayedForRotation;
- (void)_animateToFractionFromContext:(id)arg1;
- (void)_animateToFractionFromPendingContexts;
- (void)cleanup;
- (void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)hintToFraction:(double)arg1;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
@property(nonatomic) double fraction;
- (void)prepare;
- (id)centralAnimationFactory;
@property(readonly, nonatomic) UIView *referenceView;
@property(readonly, nonatomic, getter=isPastPointOfNoReturn) _Bool pastPointOfNoReturn;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1;

@end

