//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockScreenNowPlayingController.h"

@class MPULockScreenMediaControlsViewController, NSArray, SBDashBoardNowPlayingViewController;

@interface SBDashBoardNowPlayingController : SBLockScreenNowPlayingController
{
    MPULockScreenMediaControlsViewController *_mediaPlayerViewController;
    SBDashBoardNowPlayingViewController *_controlsViewController;
    SBDashBoardNowPlayingViewController *_artworkViewController;
}

@property(readonly, nonatomic) SBDashBoardNowPlayingViewController *artworkViewController; // @synthesize artworkViewController=_artworkViewController;
@property(readonly, nonatomic) SBDashBoardNowPlayingViewController *controlsViewController; // @synthesize controlsViewController=_controlsViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *viewControllers;
- (id)initWithMediaController:(id)arg1;

@end

