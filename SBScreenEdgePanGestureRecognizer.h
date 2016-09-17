//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScreenEdgePanGestureRecognizer.h"

@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer
{
    _Bool _shouldUseGrapeFlags;
    double _grabberActiveZoneWidth;
}

@property(nonatomic) _Bool shouldUseGrapeFlags; // @synthesize shouldUseGrapeFlags=_shouldUseGrapeFlags;
@property(nonatomic) double grabberActiveZoneWidth; // @synthesize grabberActiveZoneWidth=_grabberActiveZoneWidth;
- (_Bool)isLocationWithinGrabberActiveZone;
- (_Bool)_shouldUseGrapeFlags;
- (long long)_touchInterfaceOrientation;
- (struct CGPoint)_locationForTouch:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;

// Remaining properties
@property(nonatomic) __weak id <SBSystemGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

