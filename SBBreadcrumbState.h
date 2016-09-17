//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSArray, NSString;

@interface SBBreadcrumbState : NSObject <BSDescriptionProviding>
{
    NSArray *_breadcrumbIdentifiers;
}

+ (id)initialState;
@property(readonly, nonatomic) NSArray *breadcrumbIdentifiers; // @synthesize breadcrumbIdentifiers=_breadcrumbIdentifiers;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (_Bool)containsIdentifer:(id)arg1;
- (id)breadcrumbStateAfterPoppingIdentifier:(id)arg1;
- (id)breadcrumbStateAfterPoppingLastIdentifier;
- (id)breadcrumbStateAfterPushingIdentifier:(id)arg1;
- (id)_stateWithIdentifiers:(id)arg1;
- (id)_initWithIdentifiers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

