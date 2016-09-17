//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkWorkspaceTransaction.h"

#import "SBMainScreenApplicationSceneTransactionObserver.h"
#import "SBSceneLayoutWorkspaceTransactionDelegate.h"

@class NSString, SBSceneLayoutWorkspaceTransaction, SBWorkspaceEntity;

@interface SBStarkToAppWorkspaceTransaction : SBStarkWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionDelegate, SBMainScreenApplicationSceneTransactionObserver>
{
    _Bool _fromAssistant;
    SBSceneLayoutWorkspaceTransaction *_layoutTransaction;
    _Bool _mainScenesDidCommit;
    CDUnknownBlockType _transitionCompletion;
}

- (void).cxx_destruct;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (void)mainScreenApplicationSceneDidCommit:(id)arg1;
- (void)mainScreenApplicationSceneWillCommit:(id)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;
- (void)mainScreenApplicationsDidCommitSceneUpdates:(id)arg1;
- (void)_begin;
- (id)_displayForDisplayEntity:(id)arg1;
- (id)_effectiveTopEntity;
- (void)_performTransition;
- (void)_completeTransition;
- (void)_evaluateShouldPerformTransition;
@property(readonly, nonatomic) SBWorkspaceEntity *toEntity;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

