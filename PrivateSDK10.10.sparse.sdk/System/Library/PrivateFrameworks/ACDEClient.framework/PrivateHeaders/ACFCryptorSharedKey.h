/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData;

// Not exported
@interface ACFCryptorSharedKey : NSObject
{
    NSMutableData *_data;
}

+ (id)sharedKey;
@property(retain) NSMutableData *data; // @synthesize data=_data;
- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)finalize;

@end
