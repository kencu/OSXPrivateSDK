/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MMServiceFactory : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedServiceFactory;
- (id)_initWithServiceID:(id)arg1 forAccount:(id)arg2;
- (id)serviceWithServiceID:(id)arg1 forAccount:(id)arg2;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
