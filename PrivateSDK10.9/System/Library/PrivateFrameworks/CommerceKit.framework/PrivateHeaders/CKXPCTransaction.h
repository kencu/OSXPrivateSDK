//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface CKXPCTransaction : NSObject
{
    NSLock *_lock;
    long long _transactionCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)endTransaction:(const char *)arg1;
- (void)beginTransaction:(const char *)arg1;
- (id)init;

@end
