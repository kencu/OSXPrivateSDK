/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/CalUITextView.h>

@class CalUILocationDelegate;

@interface CalUILocationSubtextField : CalUITextView
{
    CalUILocationDelegate *_delegate;
}

@property __weak CalUILocationDelegate *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textDidChange:(id)arg1;
- (void)setTitleWithAttributedString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)updateFromLocation:(id)arg1;
- (void)sizeToFit;
- (id)initWithLocationDelegate:(id)arg1;

@end

