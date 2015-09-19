/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSStackView.h"

@class NSButton, NSMutableArray, NSTextField, NSView;

@interface PKPassPageDotView : NSStackView
{
    NSView *_enclosingView;
    NSMutableArray *_dotButtons;
    NSButton *_selectedButton;
    NSTextField *_overflowLabel;
}

- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)dotClicked:(id)arg1;
- (void)selectPassIndex:(unsigned long long)arg1 withCount:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property __weak id <PKPassPageDotViewDelegate><NSStackViewDelegate> delegate;

@end
