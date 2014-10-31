/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CNAutocompleteResultTracing : NSObject
{
    unsigned long long _countOfRecentsResults;
    unsigned long long _countOfContactsResults;
    unsigned long long _countOfServerResults;
    double _startTime;
    double _localLatency;
    double _serverLatency;
    BOOL _waitingForRecentsResults;
    BOOL _waitingForContactsResults;
    BOOL _waitingForServerResults;
}

+ (id)resultTracer;
- (void)sendServerResultsTracer;
- (void)sendLocalResultsTracer;
- (void)sendMessageTracers;
- (void)sendMessageTracersIfReady;
- (void)logServerLatency;
- (void)logLocalLatencyIfReady;
@property unsigned long long countOfServerResults;
@property unsigned long long countOfContactsResults;
@property unsigned long long countOfRecentsResults;
- (void)expectServerResults:(BOOL)arg1;
- (void)expectContactsResults:(BOOL)arg1;
- (void)expectRecentsResults:(BOOL)arg1;
- (id)init;

@end
