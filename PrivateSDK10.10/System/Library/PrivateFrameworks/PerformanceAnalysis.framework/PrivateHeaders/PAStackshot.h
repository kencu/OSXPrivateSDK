/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, PAMicrostackshotData;

@interface PAStackshot : NSObject
{
    NSData *_traceBufData;
    double _machTimestamp;
    double _wallTimestamp;
    PAMicrostackshotData *_microstackshotData;
}

@property(readonly) PAMicrostackshotData *microstackshotData; // @synthesize microstackshotData=_microstackshotData;
@property(readonly) double wallTimestamp; // @synthesize wallTimestamp=_wallTimestamp;
@property(readonly) double machTimestamp; // @synthesize machTimestamp=_machTimestamp;
- (void)dealloc;
- (id)initWithGlobalTrace;
- (id)initWithPid:(int)arg1;
- (void)iterateTasks:(id)arg1;
- (id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3;
@property(readonly) BOOL isMicrostackshot;

@end
