//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPSingleClientOperation.h>

@class NSString;

@interface IMAPClientLoginOperation : IMAPSingleClientOperation
{
    NSString *_username;
    NSString *_quotedUsername;
    NSString *_password;
}

@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *quotedUsername; // @synthesize quotedUsername=_quotedUsername;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)handlesAllUntaggedResponses;
- (id)debugCommandString;
- (id)activityString;
- (id)commandTypeString;
- (void)dealloc;
- (id)init;
- (id)initWithUsername:(id)arg1 password:(id)arg2;

@end
