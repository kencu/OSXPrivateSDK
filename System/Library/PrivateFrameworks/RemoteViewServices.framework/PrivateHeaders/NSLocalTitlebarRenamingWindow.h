//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteViewServices/NSLocalWindowWrappingRemoteWindow.h>

@class NSRemoteTitlebarRenamingSession;

@interface NSLocalTitlebarRenamingWindow : NSLocalWindowWrappingRemoteWindow
{
    NSRemoteTitlebarRenamingSession *_session;
}

- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (void)resignKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (BOOL)_sharesParentKeyState;
- (void)_setSession:(id)arg1;

@end
