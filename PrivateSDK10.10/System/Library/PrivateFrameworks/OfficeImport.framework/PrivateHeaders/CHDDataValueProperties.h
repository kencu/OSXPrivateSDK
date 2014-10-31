/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDKeyedObject-Protocol.h"

@class CHDDataLabel, CHDMarker, NSString, OADGraphicProperties;

// Not exported
@interface CHDDataValueProperties : NSObject <EDKeyedObject>
{
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned long long mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataValueProperties;
- (void)setMarker:(id)arg1;
- (id)marker;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setDataValueIndex:(unsigned long long)arg1;
- (unsigned long long)dataValueIndex;
- (void)setDataLabel:(id)arg1;
- (id)dataLabel;
- (long long)key;
- (void)dealloc;
- (id)shallowCopyWithIndex:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
