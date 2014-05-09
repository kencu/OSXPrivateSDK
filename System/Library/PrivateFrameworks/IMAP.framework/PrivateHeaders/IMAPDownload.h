//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IMAPDownload : NSObject
{
    NSMutableArray *_pendingFetchResults;
    unsigned int _uid;
}

- (id)description;
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;
- (void)processResults;
- (void)handleFetchResult:(id)arg1;
- (void)setError:(id)arg1;
- (id)error;
- (id)data;
- (unsigned int)bytesFetched;
- (BOOL)isComplete;
- (unsigned int)expectedLength;
- (unsigned int)uid;
- (id)createCopy;
- (id)init;
- (id)initWithUid:(unsigned int)arg1;
- (void)dealloc;

@end
