//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAlertObserver.h"
#import "SBLogoutProgressDataSource.h"
#import "UMCriticalUserSwitchStakeholder.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, SBLogoutProgressAlertViewController, SBPolicyAggregator, UMUser, UMUserManager, UMUserSwitchBlockingTask;

@interface SBUserSessionController : NSObject <SBLogoutProgressDataSource, SBAlertObserver, UMCriticalUserSwitchStakeholder>
{
    UMUserManager *_userManager;
    UMUser *_lazy_user;
    SBPolicyAggregator *_lazy_policyAggregator;
    SBLogoutProgressAlertViewController *_progressAlert;
    NSMutableArray *_displayApplications;
    NSMutableSet *_terminatingApplications;
    UMUserSwitchBlockingTask *_terminateApplicationsTask;
    NSDictionary *_debugBlockingTasks;
    _Bool _loginSession;
    _Bool _loggingOut;
}

@property(retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBPolicyAggregator *policyAggregator; // @synthesize policyAggregator=_lazy_policyAggregator;
@property(nonatomic, getter=isLoggingOut) _Bool loggingOut; // @synthesize loggingOut=_loggingOut;
- (void).cxx_destruct;
- (struct CGPoint)_portraitOrientedProgressLocationForOrientation:(long long)arg1;
- (id)_massageApplicationListForDisplay:(id)arg1;
- (void)_displayProgressAlertIfNeeded;
- (void)_evaluateRunningApplications;
- (void)_noteApplicationDidExit:(id)arg1;
- (id)policyAggregator;
- (void)userSwitchBlockingTasksDidUpdate:(id)arg1;
- (void)readyToSwitchToUser:(id)arg1;
- (void)willSwitchToUser:(id)arg1;
- (void)alertDidDeactivate:(id)arg1;
- (id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1;
- (id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)disableCurrentUser;
- (void)logoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)logout;
@property(readonly, nonatomic) long long sessionType;
@property(readonly, nonatomic) _Bool canLogout;
@property(readonly, nonatomic, getter=isLoginSession) _Bool loginSession; // @synthesize loginSession=_loginSession;
@property(readonly, nonatomic) _Bool isMultiUserSupported;
@property(readonly, retain, nonatomic) UMUser *user;
- (void)dealloc;
- (id)_initWithUserManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
