/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface BlockedInvitersManager : NSObject
{
}

+ (id)sharedBlockedInvitersManager;
- (void)clearAllBlockedInviterIDs;
- (void)clearBlockedInviterID:(id)arg1;
- (BOOL)addBlockedInviterID:(id)arg1;
- (BOOL)isInviterIDBlocked:(id)arg1;
- (BOOL)isInviterIDInBlockedInvitersList:(id)arg1;
- (BOOL)isInviterIDInContacts:(id)arg1;
- (id)uniqueIDSForLinkedABPerson:(id)arg1;
- (id)getABPersonWithInviterID:(id)arg1;
- (id)getABPersonWithUniqueID:(id)arg1;
@property BOOL allowOnlyContacts;
@property BOOL blockAllInviters;
- (void)setBlockedInviters:(id)arg1;
- (id)getBlockedInviters;

@end
