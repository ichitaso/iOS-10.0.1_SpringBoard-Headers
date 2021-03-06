//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBBrightnessController : NSObject
{
    _Bool _debounce;
    struct BKSDisplayBrightnessTransaction *_brightnessDownTransaction;
    struct BKSDisplayBrightnessTransaction *_brightnessUpTransaction;
}

+ (id)sharedBrightnessController;
- (void)cancelBrightnessEvent;
- (void)handleBrightnessEvent:(struct __IOHIDEvent *)arg1;
- (void)decreaseBrightnessAndRepeat;
- (void)increaseBrightnessAndRepeat;
- (void)setBrightnessLevel:(float)arg1;
- (void)_setBrightnessLevel:(float)arg1 showHUD:(_Bool)arg2;
- (void)adjustBacklightLevel:(_Bool)arg1;
- (float)_calcButtonRepeatDelay;

@end

