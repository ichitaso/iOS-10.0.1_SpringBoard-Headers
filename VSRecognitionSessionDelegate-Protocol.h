//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, VSRecognitionSession;

@protocol VSRecognitionSessionDelegate <NSObject>

@optional
- (void)recognitionSession:(VSRecognitionSession *)arg1 didCompleteActionWithError:(NSError *)arg2;
- (void)recognitionSession:(VSRecognitionSession *)arg1 didFinishSpeakingFeedbackStringWithError:(NSError *)arg2;
- (NSError *)recognitionSession:(VSRecognitionSession *)arg1 openURL:(NSURL *)arg2;
- (void)recognitionSessionDidBeginAction:(VSRecognitionSession *)arg1;
- (_Bool)recognitionSessionWillBeginAction:(VSRecognitionSession *)arg1;
@end

