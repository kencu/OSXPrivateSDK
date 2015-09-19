/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MRAction, NSDictionary;

@interface MRAnimationTrigger : NSObject
{
    MRAction *_action;
    double _startValue;
    double _lastValue;
    NSDictionary *_animationAttributes;
}

@property(readonly) NSDictionary *animationAttributes; // @synthesize animationAttributes=_animationAttributes;
@property double lastValue; // @synthesize lastValue=_lastValue;
@property double startValue; // @synthesize startValue=_startValue;
@property(retain, nonatomic) MRAction *action; // @synthesize action=_action;
- (double)rearmIfNeededWithDefaultValue:(double)arg1;
- (void)disarm;
@property(readonly) BOOL isArmed;
- (void)dealloc;
- (id)initWithAction:(id)arg1;

@end
