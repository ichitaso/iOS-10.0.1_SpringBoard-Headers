//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBLockScreenMesaFailureSettings : SBUISettings
{
    _Bool _jiggleLock;
    _Bool _vibrate;
    _Bool _showPasscode;
    _Bool _waitUntilButtonUp;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool waitUntilButtonUp; // @synthesize waitUntilButtonUp=_waitUntilButtonUp;
@property(nonatomic) _Bool showPasscode; // @synthesize showPasscode=_showPasscode;
@property(nonatomic) _Bool vibrate; // @synthesize vibrate=_vibrate;
@property(nonatomic) _Bool jiggleLock; // @synthesize jiggleLock=_jiggleLock;
- (void)setDefaultValues;

@end

