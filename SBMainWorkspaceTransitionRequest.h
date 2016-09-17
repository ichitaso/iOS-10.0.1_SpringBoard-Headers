//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransitionRequest.h"

@class SBMainWorkspace;

@interface SBMainWorkspaceTransitionRequest : SBWorkspaceTransitionRequest
{
    long long _source;
    CDUnknownBlockType _transactionProvider;
}

@property(copy, nonatomic) CDUnknownBlockType transactionProvider; // @synthesize transactionProvider=_transactionProvider;
@property(nonatomic) long long source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)isMainWorkspaceTransitionRequest;
- (id)succinctDescriptionBuilder;
- (void)declineWithReason:(id)arg1;
- (id)initWithWorkspace:(id)arg1 display:(id)arg2;
- (id)initWithDisplay:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SBMainWorkspace *workspace; // @dynamic workspace;

@end

