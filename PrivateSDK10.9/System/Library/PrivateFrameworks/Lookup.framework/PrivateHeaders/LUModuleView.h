//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class LUModule;

@interface LUModuleView : NSView
{
    LUModule *_module;
}

@property LUModule *module; // @synthesize module=_module;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)mouseUp:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 module:(id)arg2;
- (BOOL)isFlipped;

@end
