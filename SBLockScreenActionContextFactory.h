//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBLockScreenActionContextFactory : NSObject
{
}

+ (id)sharedInstance;
- (id)lockScreenActionContextForAction:(id)arg1 fromPlugin:(id)arg2;
- (id)lockScreenActionContextForPlugin:(id)arg1;
- (id)lockScreenActionContextForActivityBlock:(CDUnknownBlockType)arg1;
- (id)lockScreenActionContextForContinuityApp:(id)arg1 withUniqueIdentifier:(id)arg2 andActivityTypeIdentifier:(id)arg3 appSuggestion:(id)arg4;
- (id)lockScreenActionContextForWidgetRequest:(CDUnknownBlockType)arg1;
- (id)lockScreenActionContextForSnoozedAlarmItem:(id)arg1;
- (id)lockScreenActionContextForCardItem:(id)arg1;
- (id)lockScreenActionContextForAlertItem:(id)arg1;
- (id)lockScreenActionContextForFullScreenBulletinViewController:(id)arg1;
- (id)lockScreenActionContextForBulletin:(id)arg1 action:(id)arg2 origin:(int)arg3 pluginActionsAllowed:(_Bool)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)lockScreenActionContextForBulletin:(id)arg1 withOrigin:(int)arg2 pluginActionsAllowed:(_Bool)arg3;

@end

