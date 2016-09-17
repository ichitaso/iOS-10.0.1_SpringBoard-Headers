//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BBSectionInfo, NSArray, NSDate, NSMutableArray, NSMutableSet, NSSet, NSString, UIImage;

@interface SBBulletinListSection : NSObject
{
    NSString *_sectionID;
    long long _sectionType;
    id _widget;
    NSMutableArray *_bulletins;
    NSMutableSet *_bulletinIDs;
    NSArray *_sortDescriptors;
    NSString *_displayName;
    UIImage *_iconImage;
    _Bool _showsInLockScreen;
    _Bool _showsMessagePreview;
    unsigned long long _messageNumberOfLines;
    _Bool _displaysCriticalBulletins;
    NSDate *_lastSortDate;
    NSMutableSet *_subsections;
    UIImage *_largeIconImage;
    BBSectionInfo *_sectionInfo;
}

@property(retain, nonatomic) BBSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) unsigned long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) _Bool showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(nonatomic) _Bool showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(retain, nonatomic) UIImage *largeIconImage; // @synthesize largeIconImage=_largeIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) id widget; // @synthesize widget=_widget;
@property(readonly, nonatomic) NSArray *bulletins; // @synthesize bulletins=_bulletins;
- (void).cxx_destruct;
- (void)setShowsMessagePreview:(_Bool)arg1 forSubsectionID:(id)arg2;
- (_Bool)showsMessagePreviewForBulletinsInSubsectionID:(id)arg1;
- (_Bool)showsMessagePreviewForBulletinID:(id)arg1;
- (void)setShowsInLockScreen:(_Bool)arg1 forSubsectionID:(id)arg2;
- (_Bool)showsBulletinsInSubsectionIDInLockScreen:(id)arg1;
- (_Bool)showsBulletinIDInLockScreen:(id)arg1;
- (id)_subsectionWithIDCreatingIfNecessary:(id)arg1;
@property(readonly, nonatomic) __weak NSSet *subsectionIDs;
- (_Bool)hasBulletinWithID:(id)arg1;
- (id)bulletinWithBulletinID:(id)arg1;
- (id)bulletinAtIndex:(unsigned long long)arg1;
- (unsigned long long)replaceBulletin:(id)arg1 withBulletin:(id)arg2;
- (unsigned long long)removeBulletin:(id)arg1;
- (unsigned long long)_removeBulletin:(id)arg1;
- (unsigned long long)addBulletin:(id)arg1;
- (id)_sortDateForBulletin:(id)arg1;
- (unsigned long long)indexOfBulletinID:(id)arg1;
- (unsigned long long)_indexForNewBulletin:(id)arg1;
- (long long)compareSection:(id)arg1 forOrder:(long long)arg2;
- (long long)compare:(id)arg1;
- (void)_updateWithSectionInfo:(id)arg1;
- (void)updateWithSectionInfo:(id)arg1;
- (id)initWithSectionInfo:(id)arg1;
- (_Bool)displaysCriticalBulletins;
- (id)lastSortDate;
- (_Bool)hasClearableBulletins;
- (unsigned long long)bulletinCount;
- (_Bool)isBulletinSection;
- (_Bool)isWidgetSection;
- (id)description;

@end

