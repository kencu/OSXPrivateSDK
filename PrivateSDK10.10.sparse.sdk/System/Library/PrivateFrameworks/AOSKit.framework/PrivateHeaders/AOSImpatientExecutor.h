/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AOSImpatientExecutor : NSObject
{
    id _targetBlock;
    double _timeout;
    id _timeoutBlock;
}

+ (BOOL)executeBlock:(id)arg1 withTimeout:(void)arg2 timeoutBlock:(double)arg3;
@property(copy) id timeoutBlock; // @synthesize timeoutBlock=_timeoutBlock;
@property double timeout; // @synthesize timeout=_timeout;
@property(copy) id targetBlock; // @synthesize targetBlock=_targetBlock;
- (BOOL)fire;
- (void)dealloc;

@end
