//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconImageCrossfadeView.h"

@class UIView;

@interface SBIconImageAppCrossfadeView : SBIconImageCrossfadeView
{
    UIView *_imageViewParentView;
    UIView *_crossfadeViewParentView;
    unsigned long long _crossfadeType;
}

@property(nonatomic) unsigned long long crossfadeType; // @synthesize crossfadeType=_crossfadeType;
- (void).cxx_destruct;
- (void)setCornerRadiusEnabled:(_Bool)arg1;
- (void)cleanup;
- (void)setAppSnapshotCornerRadiusFraction:(double)arg1;
- (void)setCrossfadeFraction:(double)arg1;
@property(readonly, nonatomic) UIView *crossfadeViewParentView;
@property(readonly, nonatomic) UIView *imageViewParentView;
- (void)layoutSubviews;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;

@end

