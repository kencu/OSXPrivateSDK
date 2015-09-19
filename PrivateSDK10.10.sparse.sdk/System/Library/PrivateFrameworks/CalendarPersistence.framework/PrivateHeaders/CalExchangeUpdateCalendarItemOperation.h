/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalExchangeAbstractWriteCalendarItemOperation.h>

#import "CalMessageTraceableOpearation-Protocol.h"
#import "CalRevertableOperation-Protocol.h"
#import "CalWriteEventOperation-Protocol.h"

@class NSDictionary, NSManagedObjectID;

@interface CalExchangeUpdateCalendarItemOperation : CalExchangeAbstractWriteCalendarItemOperation <CalWriteEventOperation, CalRevertableOperation, CalMessageTraceableOpearation>
{
    NSManagedObjectID *_eventID;
    NSDictionary *_changedValues;
    BOOL _shouldSendInvitation;
}

@property(readonly) NSManagedObjectID *eventID; // @synthesize eventID=_eventID;
- (id)messageTracerUUID;
- (id)messageTracerName;
- (id)debugDescription;
- (id)debugTitle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldDeletePendingOperation:(id)arg1;
- (id)createRevertOperationInContext:(id)arg1 inSession:(id)arg2;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)objectID;
- (id)initWithSessionID:(id)arg1 eventID:(id)arg2 changedValues:(id)arg3 shouldSendInvitation:(BOOL)arg4;

@end
