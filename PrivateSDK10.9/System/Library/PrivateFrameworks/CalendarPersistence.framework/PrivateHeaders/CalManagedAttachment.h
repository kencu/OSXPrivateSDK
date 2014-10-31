//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

#import "CalManagedICSPropertyProtocol.h"
#import "StoresUnrecognizedICS.h"

@class CalManagedCalendarItem, CalManagedICSElementProperties, NSData, NSString, NSURL;

@interface CalManagedAttachment : CalManagedObject <CalManagedICSPropertyProtocol, StoresUnrecognizedICS>
{
    NSData *_data;
    NSString *_filename;
}

+ (id)fetchRequestWithURL:(id)arg1 inGroup:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)fetchRequestWithURL:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (BOOL)_isManagedAttachmentCalendar:(id)arg1;
@property(retain) NSString *filename; // @synthesize filename=_filename;
@property(retain) NSData *data; // @synthesize data=_data;
- (id)uniqueKeyForObject;
- (void)dealloc;
- (void)willSave;
- (BOOL)isInDetachedEvent;
- (BOOL)isLocalAttachment;
@property(retain) NSURL *url;
- (void)willRefresh:(BOOL)arg1;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (void)importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4;
- (void)_importiCalendarProperty:(id)arg1 inComponent:(id)arg2 fromDocument:(id)arg3 inCalendar:(id)arg4 accumulatedAttachmentFilenames:(id)arg5;
- (id)_managediCalendarProperties;
- (Class)iCalendarElementClass;

// Remaining properties
@property(retain) NSString *attachmentID; // @dynamic attachmentID;
@property(retain) NSString *contentType; // @dynamic contentType;
@property(retain) NSString *filenameInCache; // @dynamic filenameInCache;
@property(retain) NSString *filenameSuggestedByServer; // @dynamic filenameSuggestedByServer;
@property BOOL isAutoArchived; // @dynamic isAutoArchived;
@property BOOL isCached; // @dynamic isCached;
@property(retain) CalManagedCalendarItem *item; // @dynamic item;
@property BOOL omitSyncRecord; // @dynamic omitSyncRecord;
@property(retain) CalManagedICSElementProperties *unrecognizedICSProperties; // @dynamic unrecognizedICSProperties;

@end
