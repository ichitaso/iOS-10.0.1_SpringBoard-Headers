//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBRestartManager, SBRestartTransitionRequest;

@protocol SBRestartManagerDelegate <NSObject>

@optional
- (void)restartManagerExitImminent:(SBRestartManager *)arg1;
- (void)restartManager:(SBRestartManager *)arg1 willRestartWithTransitionRequest:(SBRestartTransitionRequest *)arg2;
- (void)restartManagerWillReboot:(SBRestartManager *)arg1;
- (void)restartManagerWillShutdown:(SBRestartManager *)arg1;
@end

