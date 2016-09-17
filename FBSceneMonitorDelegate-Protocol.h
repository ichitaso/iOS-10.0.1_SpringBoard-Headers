//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSSceneClientSettingsDiff, FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, FBScene, FBSceneMonitor, FBSceneUpdateContext, NSSet;

@protocol FBSceneMonitorDelegate <NSObject>

@optional
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneDidCommitUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneWillCommitUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneClientSettingsDidChangeWithDiff:(FBSSceneClientSettingsDiff *)arg2 transitionContext:(FBSSceneTransitionContext *)arg3;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 pairingStatusDidChangeForExternalSceneIDs:(NSSet *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 effectiveSceneSettingsDidChangeWithDiff:(FBSSceneSettingsDiff *)arg2 previousSettings:(FBSSceneSettings *)arg3;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneSettingsDidChangeWithDiff:(FBSSceneSettingsDiff *)arg2 previousSettings:(FBSSceneSettings *)arg3;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneWasDestroyed:(FBScene *)arg2;
- (void)sceneMonitor:(FBSceneMonitor *)arg1 sceneWasCreated:(FBScene *)arg2;
@end

