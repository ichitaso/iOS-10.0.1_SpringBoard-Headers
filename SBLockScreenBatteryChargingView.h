//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

@class _UILegibilitySettings;

@interface SBLockScreenBatteryChargingView : SBDashBoardViewBase
{
    _UILegibilitySettings *_legibilitySettings;
    double _alignmentPercent;
}

+ (id)maskImageNameForExternalChargingBattery;
+ (id)maskImageNameForInternalChargingBattery;
+ (id)maskImageNameForChargingBattery;
+ (id)batteryChargingViewWithDoubleBattery;
+ (id)batteryChargingViewWithSingleBattery;
@property(nonatomic) double alignmentPercent; // @synthesize alignmentPercent=_alignmentPercent;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
- (void).cxx_destruct;
- (id)_chargePercentFont;
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2;
@property(nonatomic) _Bool batteryVisible;
@property(readonly, nonatomic) double desiredVisibilityDuration;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

