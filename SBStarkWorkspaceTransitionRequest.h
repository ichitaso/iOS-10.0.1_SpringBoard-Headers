//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransitionRequest.h"

@class SBStarkScreenController;

@interface SBStarkWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    SBStarkScreenController *_screenController;
}

+ (id)requestWithScreenController:(id)arg1;
@property(retain, nonatomic) SBStarkScreenController *screenController; // @synthesize screenController=_screenController;
- (void).cxx_destruct;
- (id)initWithScreenController:(id)arg1;
- (id)initWithWorkspace:(id)arg1 display:(id)arg2;

@end

