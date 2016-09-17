//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SBDisplaySettings.h"

@class SBDisplaySettings, UIStatusBarStyleRequest;

@protocol SBDisplay <NSObject, SBDisplaySettings>
- (SBDisplaySettings *)copyDisplaySettings;
- (void)deactivate;
- (void)activate;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesBanners;
- (_Bool)allowsEventOnlySuspension;
- (UIStatusBarStyleRequest *)effectiveStatusBarStyleRequest;
- (UIStatusBarStyleRequest *)statusBarStyleRequest;
- (long long)starkStatusBarStyle;
- (long long)statusBarStyle;
@end
