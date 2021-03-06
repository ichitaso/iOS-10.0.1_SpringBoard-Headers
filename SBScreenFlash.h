//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIScreen, UIView, UIWindow;

@interface SBScreenFlash : NSObject
{
    NSMutableArray *_flashCompletionBlocks;
    UIScreen *_screen;
    UIWindow *_flashWindow;
    UIView *_flashView;
    _Bool _windowVisible;
}

+ (id)mainScreenFlasher;
- (void).cxx_destruct;
- (void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)_createUIWithColor:(id)arg1;
- (void)flashColor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)flashWhiteWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithScreen:(id)arg1;

@end

