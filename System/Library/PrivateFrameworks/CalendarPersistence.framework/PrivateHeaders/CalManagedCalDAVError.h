//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedError.h>

@class CalManagedCalDAVPrincipal, CalManagedChangeRequest;

@interface CalManagedCalDAVError : CalManagedError
{
}

+ (void)deleteAndNotify:(id)arg1;
+ (id)entityName;
- (id)copyUnscrubbedUserInfoForError:(id)arg1;
- (id)copyScrubbedUserInfoForError:(id)arg1;

// Remaining properties
@property(retain) CalManagedChangeRequest *changeRequest; // @dynamic changeRequest;
@property(retain) CalManagedCalDAVPrincipal *principal; // @dynamic principal;

@end
