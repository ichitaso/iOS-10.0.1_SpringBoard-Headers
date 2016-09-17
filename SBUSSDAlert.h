//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert
{
    unsigned int _receivedString:1;
    unsigned int _dismissOnActivate:1;
    NSTimer *_delayedDismissTimer;
}

+ (void)_newSIM:(id)arg1;
+ (void)_daemonRestart:(id)arg1;
+ (id)errorStringForCode:(id)arg1;
+ (void)test;
+ (void)registerForAlerts;
+ (void)registerForSettingsAlerts;
- (void).cxx_destruct;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (long long)statusBarStyle;
- (void)deactivate;
- (void)activate;
- (void)_delayedDismiss;
- (void)setDismissOnActivate:(_Bool)arg1;
- (_Bool)receivedString;
- (_Bool)sentResponse;
- (_Bool)allowsResponse;
- (void)USSDStringAvailable:(id)arg1 allowsResponse:(_Bool)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)dealloc;

@end

