//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBDashBoardIdleTimerFactory : NSObject
{
}

- (_Bool)updateSettingsForWarnInterval:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForFaceDown:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForBatterySaverMode:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForUnlockedWithMesa:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForWorkspace:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForDuration:(long long)arg1 settings:(CDStruct_94962e32 *)arg2 logBuilder:(id)arg3;
- (_Bool)sanitizeSettingsForLockscreenDefaults:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)sanitizeSettingsAfterSetup:(CDStruct_94962e32 *)arg1 duration:(long long)arg2 logBuilder:(id)arg3;
- (_Bool)sanitizeWarnInterval:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)sanitizeTotalDuration:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)sanitizeSettingsAfterInitialSetup:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForPrototypeSettings:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForDefaultWarnInterval:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForStore:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForProfile:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForSimDefaults:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (_Bool)updateSettingsForSecurityDefaults:(CDStruct_94962e32 *)arg1 logBuilder:(id)arg2;
- (CDStruct_94962e32)idleTimerSettingsForProvider:(id)arg1 logBuilder:(id)arg2;
- (id)idleTimerForSettings:(CDStruct_94962e32)arg1 logBuilder:(id)arg2;
- (id)_warnTimerForSettings:(CDStruct_94962e32)arg1 logBuilder:(id)arg2;
- (id)_concreteTimerForMode:(long long)arg1 interval:(double)arg2 reportUserEvents:(_Bool)arg3 logBuilder:(id)arg4;
- (id)disabledTimer;
- (id)idleTimerForProvider:(id)arg1 logBuilder:(id)arg2;

@end
