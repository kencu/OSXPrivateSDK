/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ExchangeWebServices/EWSRecurrencePatternBaseType.h>

@interface EWSRelativeYearlyRecurrencePatternType : EWSRecurrencePatternBaseType
{
    int _DaysOfWeek;
    long long _DayOfWeekIndex;
    int _Month;
}

+ (id)definition;
@property(nonatomic) int Month; // @synthesize Month=_Month;
@property(nonatomic) long long DayOfWeekIndex; // @synthesize DayOfWeekIndex=_DayOfWeekIndex;
@property(nonatomic) int DaysOfWeek; // @synthesize DaysOfWeek=_DaysOfWeek;
- (id)description;

@end

