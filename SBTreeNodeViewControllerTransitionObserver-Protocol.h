//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBTreeNodeViewController;

@protocol SBTreeNodeViewControllerTransitionObserver <NSObject>

@optional
- (void)treeNodeViewController:(SBTreeNodeViewController *)arg1 willPerformOperation:(long long)arg2 fromViewController:(SBTreeNodeViewController *)arg3 fromTreeNode:(id <SBTreeNode>)arg4 toViewController:(SBTreeNodeViewController *)arg5 toTreeNode:(id <SBTreeNode>)arg6 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg7;
@end
