//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconAnimationSettings.h"

@class SBAnimationSettings;

@interface SBIconZoomSettings : SBIconAnimationSettings
{
    _Bool _labelAlphaWithZoom;
    _Bool _useTwoPhases;
    double _phaseOneTargetFraction;
    double _phaseTwoDelay;
    SBAnimationSettings *_phaseOneSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *phaseOneSettings; // @synthesize phaseOneSettings=_phaseOneSettings;
@property double phaseTwoDelay; // @synthesize phaseTwoDelay=_phaseTwoDelay;
@property double phaseOneTargetFraction; // @synthesize phaseOneTargetFraction=_phaseOneTargetFraction;
@property _Bool useTwoPhases; // @synthesize useTwoPhases=_useTwoPhases;
@property _Bool labelAlphaWithZoom; // @synthesize labelAlphaWithZoom=_labelAlphaWithZoom;
- (void).cxx_destruct;
- (id)centralAnimationSettingsWithAdditionalDelays;
- (id)phaseTwoSettings;
- (void)setDefaultValues;

@end

