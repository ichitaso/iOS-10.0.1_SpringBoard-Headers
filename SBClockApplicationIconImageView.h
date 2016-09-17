//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLiveIconImageView.h"

#import "SBDateTimeOverrideObserver.h"

@class CALayer, NSString;

@interface SBClockApplicationIconImageView : SBLiveIconImageView <SBDateTimeOverrideObserver>
{
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_blackDot;
    CALayer *_redDot;
    NSString *_currentNumberingSystem;
}

+ (id)systemNumberingSystem;
+ (id)generateProcessedMappedIconImageWithName:(id)arg1 iconOptions:(int)arg2;
+ (void)_iconEditingStateChanged:(id)arg1;
+ (void)_handleTimeChange:(id)arg1;
+ (void)_timerFired:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) NSString *currentNumberingSystem; // @synthesize currentNumberingSystem=_currentNumberingSystem;
- (void).cxx_destruct;
- (void)localeDidChange:(id)arg1;
- (void)_timerFiredWithComponents:(id)arg1 flags:(unsigned long long)arg2;
- (void)updateUnanimated;
- (void)_updateUnanimatedWithComponents:(id)arg1;
- (void)dealloc;
- (_Bool)isAnimationAllowed;
- (void)_setAnimating:(_Bool)arg1;
- (void)updateAnimatingState;
- (id)_generateSquareContentsImage;
- (id)contentsImage;
- (id)backgroundImageName;
- (void)layoutSubviews;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

