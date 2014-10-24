//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SOSystemIdleMonitor : NSObject
{
    id _globalEventMonitor;
    id _localEventMonitor;
    NSMutableDictionary *_listenerLookup;
    NSMutableDictionary *_timerLookup;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)listenForNextSystemActivity;
- (void)_receivedEvent;
- (double)idleTime;
- (void)_timerActionOnSystemBecameActive;
- (void)_timeoutTimerFired:(id)arg1;
- (id)_createTimerWithInterval:(double)arg1 originalInterval:(double)arg2;
- (void)removeTimeoutListener:(id)arg1;
- (void)addTimeoutListener:(id)arg1 seconds:(unsigned long long)arg2;
- (void)dealloc;

@end
