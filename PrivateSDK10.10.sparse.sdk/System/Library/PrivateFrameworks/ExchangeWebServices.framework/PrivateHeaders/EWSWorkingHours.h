/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EWSSerializableTimeZone, NSArray;

@interface EWSWorkingHours : NSObject
{
    EWSSerializableTimeZone *_TimeZone;
    NSArray *_WorkingPeriodArray;
}

+ (id)definition;
@property(copy, nonatomic) NSArray *WorkingPeriodArray; // @synthesize WorkingPeriodArray=_WorkingPeriodArray;
@property(retain, nonatomic) EWSSerializableTimeZone *TimeZone; // @synthesize TimeZone=_TimeZone;
- (void)dealloc;

@end
