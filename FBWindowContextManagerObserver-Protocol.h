//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBSceneLayerManagerObserver.h"

@class FBWindowContextManager;

@protocol FBWindowContextManagerObserver <FBSceneLayerManagerObserver>

@optional
- (void)windowContextManager:(FBWindowContextManager *)arg1 didRepositionContext:(struct FBSceneLayer *)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;
- (void)windowContextManagerDidStopTrackingContexts:(FBWindowContextManager *)arg1;
- (void)windowContextManagerWillStartTrackingContexts:(FBWindowContextManager *)arg1;
@end

