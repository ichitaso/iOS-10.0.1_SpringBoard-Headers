//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBLockScreenPasscodeSettings : SBUISettings
{
    int _scrollBehavior;
    double _fixedHysteresis;
    double _percentOfNextButtonIncluded;
}

+ (id)settingsControllerModule;
@property(nonatomic) double percentOfNextButtonIncluded; // @synthesize percentOfNextButtonIncluded=_percentOfNextButtonIncluded;
@property(nonatomic) double fixedHysteresis; // @synthesize fixedHysteresis=_fixedHysteresis;
@property(nonatomic) int scrollBehavior; // @synthesize scrollBehavior=_scrollBehavior;
- (void)setDefaultValues;

@end

