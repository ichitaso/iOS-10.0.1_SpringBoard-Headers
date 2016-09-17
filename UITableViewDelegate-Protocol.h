//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSIndexPath, NSString, UIFocusAnimationCoordinator, UITableView, UITableViewCell, UITableViewFocusUpdateContext, UIView;

@protocol UITableViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (NSIndexPath *)indexPathForPreferredFocusedViewInTableView:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didUpdateFocusInContext:(UITableViewFocusUpdateContext *)arg2 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg3;
- (_Bool)tableView:(UITableView *)arg1 shouldUpdateFocusInContext:(UITableViewFocusUpdateContext *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canFocusRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(NSIndexPath *)arg3 withSender:(id)arg4;
- (_Bool)tableView:(UITableView *)arg1 shouldShowMenuForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 indentationLevelForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 targetIndexPathForMoveFromRowAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 didEndEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 editActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 editingStyleForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didDeselectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 willDeselectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 willSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didUnhighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didHighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 shouldHighlightRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 accessoryTypeForRowWithIndexPath:(NSIndexPath *)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForFooterInSection:(long long)arg2;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 estimatedHeightForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)tableView:(UITableView *)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndDisplayingFooterView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 didEndDisplayingHeaderView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayFooterView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayHeaderView:(UIView *)arg2 forSection:(long long)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
@end

