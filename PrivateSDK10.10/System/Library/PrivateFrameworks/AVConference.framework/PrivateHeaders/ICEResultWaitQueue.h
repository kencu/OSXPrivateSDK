/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableArray;

// Not exported
@interface ICEResultWaitQueue : NSObject
{
    NSMutableArray *queryList;
    NSLock *queryLock;
    struct _opaque_pthread_cond_t resCond;
    struct _opaque_pthread_mutex_t resMutex;
}

- (void)addResult:(struct tagCONNRESULT *)arg1 forCallID:(unsigned int)arg2;
- (id)copyResultForCallID:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
