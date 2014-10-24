//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSInputStream;

@interface PBMessageStreamReader : NSObject
{
    NSInputStream *_stream;
    Class _classOfNextMessage;
    unsigned long long _position;
}

@property(readonly) unsigned long long position; // @synthesize position=_position;
@property Class classOfNextMessage; // @synthesize classOfNextMessage=_classOfNextMessage;
- (id)nextMessage;
- (void)dealloc;
- (id)initWithStream:(id)arg1;

@end
