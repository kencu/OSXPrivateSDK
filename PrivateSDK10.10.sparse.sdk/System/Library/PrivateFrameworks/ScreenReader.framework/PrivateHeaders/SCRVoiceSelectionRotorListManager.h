/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

// Not exported
@interface SCRVoiceSelectionRotorListManager : NSObject
{
    NSMutableArray *_voicesList;
    unsigned long long _indexHighlighted;
    NSMutableSet *_allUsedVoicesSet;
}

+ (id)defaultManager;
- (id)description;
- (id)voicesArray;
- (void)saveToConfiguration;
- (void)selectObjectAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexHighlighted;
- (void)setIndexHighlighted:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)shortVoiceNameAtIndex:(unsigned long long)arg1;
- (id)voiceIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForVoiceIdentifier:(id)arg1;
- (void)removeObjectWithVoiceIdentifier:(id)arg1;
- (void)addVoiceWithVoiceIdentifier:(id)arg1 hasBeenSelected:(BOOL)arg2;
- (void)dealloc;
- (void)updateList;
- (id)_allVoicesUsedByPrefs;
- (id)init;

@end
