//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SBLockScreenNotificationCell;

@interface SBLockScreenNotificationScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    SBLockScreenNotificationCell *_associatedCell;
}

+ (double)scrollThresholdForPasscodeScroll;
@property(nonatomic) __weak SBLockScreenNotificationCell *associatedCell; // @synthesize associatedCell=_associatedCell;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

