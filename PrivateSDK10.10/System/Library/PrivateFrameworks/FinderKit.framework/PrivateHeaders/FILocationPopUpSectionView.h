/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSString;

// Not exported
@interface FILocationPopUpSectionView : NSView
{
    NSString *_title;
}

+ (id)menuItemAttributes;
+ (id)sectionViewWithTitle:(const struct TString *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (struct CGSize)menuSize;

@end
