//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBReusableView.h"

@class NSArray, SBIcon;

@protocol SBIconAccessoryView <SBReusableView>
+ (NSArray *)checkoutAccessoryImagesForIcon:(SBIcon *)arg1 location:(int)arg2;
- (void)setAccessoryBrightness:(double)arg1;
- (_Bool)displayingAccessory;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)arg1;
- (void)configureForIcon:(SBIcon *)arg1 location:(int)arg2 highlighted:(_Bool)arg3;
- (void)configureAnimatedForIcon:(SBIcon *)arg1 location:(int)arg2 highlighted:(_Bool)arg3 withPreparation:(void (^)(void))arg4 animation:(void (^)(void))arg5 completion:(void (^)(_Bool))arg6;
@end

