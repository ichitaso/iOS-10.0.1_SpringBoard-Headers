//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate.h"
#import "SBLockScreenActionProvider.h"

@class NSString, SBAwayBulletinListItem, SBLockOverlayView;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate, SBLockScreenActionProvider>
{
    SBLockOverlayView *_bulletinView;
    _Bool _performedAction;
    SBAwayBulletinListItem *_bulletinItem;
}

@property(retain, nonatomic) SBAwayBulletinListItem *bulletinItem; // @synthesize bulletinItem=_bulletinItem;
- (void).cxx_destruct;
- (id)_lockScreenActionContext;
- (id)slideToUnlockText;
- (void)performUnlockAction;
- (void)performSnoozeAction;
- (id)_snoozeAction;
- (_Bool)_hasSnoozeAction;
- (id)_dismissAction;
- (void)performDismissAction;
- (id)_alternateAction;
- (_Bool)_hasAlternateAction;
- (void)performAlternateAction;
- (void)performAction:(id)arg1;
- (id)_titleForAlternateActionButton;
- (id)_calculatedTitleForAlternateActionButton;
- (id)_customTitleForAlternateActionButton;
- (id)lockScreenActionContext;
- (void)handleTapGestureFromView:(id)arg1;
- (void)lockButtonPressed:(id)arg1;
- (_Bool)handleVolumeButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleVolumeDownButtonPressed;
- (void)volumeChanged:(id)arg1;
- (void)updateContent;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

