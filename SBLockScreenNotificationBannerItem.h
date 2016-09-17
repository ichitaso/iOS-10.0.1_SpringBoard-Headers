//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIBannerItem.h"

#import "SBDefaultBannerViewSource.h"
#import "SBUIQuietModePlayability.h"

@class NSString, SBAwayListItem;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability>
{
    SBAwayListItem *_listItem;
    id <SBLockScreenActionHandler> _lockedActionHandler;
    id <SBLockScreenNotificationBannerItemDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLockScreenNotificationBannerItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SBLockScreenActionHandler> unlockActionHandler; // @synthesize unlockActionHandler=_lockedActionHandler;
@property(readonly, nonatomic) SBAwayListItem *listItem; // @synthesize listItem=_listItem;
- (void).cxx_destruct;
- (id)lockScreenActionContext;
- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (_Bool)shouldPlayLightsAndSirens;
- (id)accessoryIconMask;
- (_Bool)showMessagePreview;
- (id)attachmentImage;
- (id)attachmentText;
- (id)iconImage;
- (id)sourceDate;
- (id)suppressedMessage;
- (id)message;
- (id)subtitle;
- (id)title;
- (id)sortDate;
- (_Bool)canShowWhileLocked;
- (CDUnknownBlockType)action;
- (id)initWithListItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

