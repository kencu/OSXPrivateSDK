//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCRemoteMessage.h"

#import "IMAPMessage.h"

@interface IMAPMessage : MCRemoteMessage <IMAPMessage>
{
    unsigned int _uid;
}

+ (void)initialize;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)account;
- (id)subject;
- (id)originalMailboxURLString;
- (id)remoteMailboxURLString;
- (id)remoteID;
- (id)mailboxName;
- (void)setHasTemporaryUid:(BOOL)arg1;
- (BOOL)hasTemporaryUid;
- (BOOL)isMessageContentsLocallyAvailable;
- (void)setUid:(unsigned int)arg1;
- (unsigned int)uid;
- (id)messageID;
- (id)description;
- (id)initWithFlags:(unsigned int)arg1 size:(unsigned long long)arg2 uid:(unsigned int)arg3;

@end
