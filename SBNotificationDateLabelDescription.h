//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimeZone;

@interface SBNotificationDateLabelDescription : NSObject
{
    NSDate *_startDate;
    NSTimeZone *_startDateTimeZone;
    NSDate *_endDate;
    NSTimeZone *_endDateTimeZone;
}

@property(copy, nonatomic) NSTimeZone *endDateTimeZone; // @synthesize endDateTimeZone=_endDateTimeZone;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSTimeZone *startDateTimeZone; // @synthesize startDateTimeZone=_startDateTimeZone;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;

@end
