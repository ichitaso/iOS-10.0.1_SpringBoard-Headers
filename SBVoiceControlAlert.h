//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBDashBoardExternalBehaviorProviding.h"

@class NSString;

@interface SBVoiceControlAlert : SBAlert <SBDashBoardExternalBehaviorProviding>
{
    struct {
        unsigned int shouldBeActivated:1;
        unsigned int isReadyToBeActivated:1;
        unsigned int hasBeenActivated:1;
    } _voiceControlFlags;
}

+ (void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(_Bool)arg2;
+ (void)setNextRecognitionAudioInputPaths:(id)arg1;
+ (void)_configureSession:(id)arg1 forAlert:(id)arg2;
+ (_Bool)_bluetoothDevicesPickable;
+ (void)bluetoothDeviceTerminatedVoiceControl:(id)arg1;
+ (void)bluetoothDeviceRequestedVoiceControl:(id)arg1;
+ (_Bool)resetVoiceControlIfNecessary:(_Bool)arg1;
+ (_Bool)shouldEnterVoiceControl;
+ (void)unregisterForAlerts;
+ (void)registerForAlerts;
+ (id)pendingOrActiveAlert;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (double)autoDimTime;
- (_Bool)handleMenuButtonTap;
- (void)handleHeadsetButtonUpFromActivation:(_Bool)arg1;
- (void)_proximityChanged:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)cancelIfNotActivated;
- (void)activateWhenReady;
- (id)initFromMenuButton;
- (void)activate;
- (void)deactivate;
- (_Bool)allowsEventOnlySuspension;
- (id)initFromBluetoothDevice:(id)arg1;
- (id)initFromWiredHeadsetButton;
- (id)init;
- (void)_setRoutingAttributesForWiredHeadset:(_Bool)arg1;
- (_Bool)recognitionSessionWillBeginAction:(id)arg1;
- (void)_workspaceActivate;
- (id)_session;
- (void)_makeActive;
- (void)_resign;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

