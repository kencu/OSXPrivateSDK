/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

// Not exported
@interface FI_TAnimationLayer : NSView
{
    _Bool _selected;
    int _actionKind;
    struct CGRect _clipRect;
}

@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 action:(int)arg2;

@end
