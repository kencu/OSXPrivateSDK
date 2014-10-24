//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMChat.h"

@class NSMutableArray;

@interface IMChat (SocialAppsCoreAdditions)
- (id)recentChatParticipants;
- (void)clearDisplayMessageContents;
@property BOOL shouldDisplayMessageContents; // @dynamic shouldDisplayMessageContents;
- (BOOL)shouldDisplayMessageContents:(id)arg1;
- (id)_chatKeyForKey:(id)arg1;
- (BOOL)isKnockKnock;
- (BOOL)_hasReadMessage;
- (id)firstInterestingMessage;
- (id)firstInterestingItem;
- (BOOL)canSendFilesAtURLs:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL canSendFiles; // @dynamic canSendFiles;
@property(nonatomic, getter=isSilent) BOOL silent; // @dynamic silent;
@property(retain, nonatomic) NSMutableArray *myAddressableNames;
- (id)_myAddressableNames;
@end
