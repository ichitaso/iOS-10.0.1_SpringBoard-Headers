//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertViewAdapter.h"

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter
{
    _Bool _revealedContentBeneathForDismiss;
    _Bool _animatingOut;
}

- (void)setAlert:(id)arg1;
- (void)setShouldAnimateIn:(_Bool)arg1;
- (void)dismiss;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (void)viewAnimatedOut;
- (_Bool)isAnimatingOut;
- (_Bool)shouldAnimateIconsIn;
- (void)alertDisplayWillBecomeVisible;
- (_Bool)isReadyToBeRemovedFromView;
- (id)alert;

@end
