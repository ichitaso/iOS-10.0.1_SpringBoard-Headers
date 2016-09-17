//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBMesaUnlockBehavior.h"
#import "SBMesaUnlockTriggerDelegate.h"

@class NSString, SBHomeHardwareButton, SBLockScreenMesaSettings, SBMesaUnlockTrigger;

@interface SBDashBoardMesaUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBMesaUnlockBehavior>
{
    long long _failedMesaUnlockAttempts;
    SBLockScreenMesaSettings *_mesaSettings;
    SBHomeHardwareButton *_homeHardwareButton;
    id <SBMesaUnlockBehaviorDelegate> _mesaUnlockBehaviorDelegate;
    SBMesaUnlockTrigger *_trigger;
}

@property(nonatomic) __weak id <SBMesaUnlockBehaviorDelegate> mesaUnlockBehaviorDelegate; // @synthesize mesaUnlockBehaviorDelegate=_mesaUnlockBehaviorDelegate;
@property(retain, nonatomic, getter=_getHomeHardwareButton, setter=_setHomeHardwareButton:) SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(readonly, nonatomic, getter=_mesaSettings) SBLockScreenMesaSettings *mesaSettings; // @synthesize mesaSettings=_mesaSettings;
@property(retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger; // @synthesize trigger=_trigger;
- (void).cxx_destruct;
- (id)_failureSettingsForFailAttempt:(long long)arg1;
- (void)_handleMesaFailure;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(_Bool)arg1;
- (id)_feedbackForPasscodeEvent;
- (id)_feedbackForFailureSettings:(id)arg1;
- (id)_homeHardwareButton;
- (void)significantUserInteractionDidOccur;
- (void)screenOff;
- (void)menuButtonUp;
- (void)menuButtonDown;
- (id)initWithMesaSettings:(id)arg1 andUnlockTrigger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

