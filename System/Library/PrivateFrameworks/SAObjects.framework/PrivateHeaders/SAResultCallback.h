//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSArray;

@interface SAResultCallback : AceObject <SAAceSerializable>
{
}

+ (id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)resultCallback;
@property(copy, nonatomic) NSArray *commands;
@property(nonatomic) long long code;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
