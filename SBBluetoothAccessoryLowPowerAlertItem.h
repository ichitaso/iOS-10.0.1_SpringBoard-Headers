//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString;

@interface SBBluetoothAccessoryLowPowerAlertItem : SBAlertItem
{
    long long _batteryLevel;
    NSString *_accessoryName;
}

- (void).cxx_destruct;
- (_Bool)unlocksScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccessory:(id)arg1 batteryLevel:(long long)arg2;

@end

