/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSAlert.h"

#import "NSAlertDelegate-Protocol.h"

@class NSString;

@interface MMAlert : NSAlert <NSAlertDelegate>
{
    id _completionHandler;
    id _helpHandler;
}

- (BOOL)alertShowHelp:(id)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(id)arg2 helpHandler:(void)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
