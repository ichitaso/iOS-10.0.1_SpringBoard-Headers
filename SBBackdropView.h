//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIBackdropView.h"

@interface SBBackdropView : _UIBackdropView
{
    double _transitionProgress;
    double _initialScale;
    double _finalScale;
}

- (void)transitionComplete;
- (void)applySettings:(id)arg1;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;

@end

