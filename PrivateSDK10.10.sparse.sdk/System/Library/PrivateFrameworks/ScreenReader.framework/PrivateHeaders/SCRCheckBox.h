/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRButton.h>

// Not exported
@interface SCRCheckBox : SCRButton
{
}

- (BOOL)isCheckbox;
- (BOOL)isControlElement;
- (BOOL)alwaysAllowDrag;
- (void)addActionDescription:(id)arg1 toRequest:(id)arg2;
- (id)statusDescriptionWithOptionsMask:(int)arg1;
- (id)valueDescription;
- (id)defaultActionDescription;
- (id)roleDescription;
- (BOOL)toggleSingleSelectionWithRequest:(id)arg1;
- (BOOL)isSelected;
- (void)echoValueChangeToRequest:(id)arg1;
- (BOOL)canHandleValueChange;

@end
