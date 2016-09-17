//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBDateLabelDelegate.h"

@class NSAttributedString, NSString, UIImage, UILabel, UILabel<NCNotificationDateLabel>;

@interface SBDefaultBannerTextView : UIView <SBDateLabelDelegate>
{
    NSAttributedString *_primaryTextAttributedString;
    NSAttributedString *_primaryTextAttributedStringComponent;
    UIImage *_primaryTextAccessoryImageComponent;
    NSAttributedString *_subtitleTextAttributedString;
    NSAttributedString *_secondaryTextAttributedString;
    NSAttributedString *_alternateSecondaryTextAttributedString;
    UILabel<NCNotificationDateLabel> *_relevanceDateLabel;
    double _secondaryTextAlpha;
    double _alternateSecondaryTextAlpha;
}

+ (id)_defaultRelevanceDateFont;
+ (id)_secondaryItalicTextFont;
+ (id)_secondaryTextFont;
+ (id)_primaryTextFont;
@property(copy, nonatomic) NSAttributedString *alternateSecondaryTextAttributedString; // @synthesize alternateSecondaryTextAttributedString=_alternateSecondaryTextAttributedString;
@property(copy, nonatomic) NSAttributedString *secondaryTextAttributedString; // @synthesize secondaryTextAttributedString=_secondaryTextAttributedString;
@property(copy, nonatomic) NSAttributedString *subtitleTextAttributedString; // @synthesize subtitleTextAttributedString=_subtitleTextAttributedString;
@property(readonly, nonatomic) UILabel *relevanceDateLabel; // @synthesize relevanceDateLabel=_relevanceDateLabel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_hasSecondaryText;
- (struct CGSize)_primaryTextSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)_maximumSecondaryTextRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_secondaryTextRectForBounds:(struct CGRect)arg1 attributedString:(id)arg2;
- (struct CGRect)_subtitleTextRectForBounds:(struct CGRect)arg1 attributedString:(id)arg2;
- (struct CGRect)_primaryTextRectForBounds:(struct CGRect)arg1;
- (double)_secondaryTextOriginYForBounds:(struct CGRect)arg1;
- (double)_subtitleTextOriginYForBounds:(struct CGRect)arg1;
- (double)_primaryTextBaselineForBounds:(struct CGRect)arg1;
- (id)_primaryTextAttributedString;
- (void)_invalidatePrimaryTextAttributedString;
- (_Bool)_isItalicizedAttributedString:(id)arg1;
- (id)_attributedStringForSecondaryText:(id)arg1 italicized:(_Bool)arg2;
- (void)setAlternateSecondaryTextAlpha:(double)arg1;
- (void)setSecondaryTextAlpha:(double)arg1;
- (void)dateLabelDidChange:(id)arg1;
- (_Bool)textWillWrapForWidth:(double)arg1;
- (void)setRelevanceDate:(id)arg1;
- (void)setAlternateSecondaryText:(id)arg1 italicized:(_Bool)arg2;
@property(copy, nonatomic) NSString *alternateSecondaryText;
- (void)setSecondaryText:(id)arg1 italicized:(_Bool)arg2;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *subtitleText;
@property(retain, nonatomic) UIImage *primaryTextAccessoryImage;
@property(copy, nonatomic) NSString *primaryText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

