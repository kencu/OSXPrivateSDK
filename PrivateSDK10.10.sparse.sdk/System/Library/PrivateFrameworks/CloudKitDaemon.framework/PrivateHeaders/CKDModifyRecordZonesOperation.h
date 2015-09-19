/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

// Not exported
@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation
{
    BOOL _allowDefaultZoneSave;
    BOOL _markZonesAsUserPurged;
    int _numZoneSaveAttempts;
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    NSMutableArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_pcsOplockFailureCountByZoneID;
}

@property(nonatomic) int numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(nonatomic) BOOL markZonesAsUserPurged; // @synthesize markZonesAsUserPurged=_markZonesAsUserPurged;
@property(nonatomic) BOOL allowDefaultZoneSave; // @synthesize allowDefaultZoneSave=_allowDefaultZoneSave;
@property(retain, nonatomic) NSMutableDictionary *pcsOplockFailureCountByZoneID; // @synthesize pcsOplockFailureCountByZoneID=_pcsOplockFailureCountByZoneID;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSMutableArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) id deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) id saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)arg1;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(BOOL)arg2;
- (BOOL)_saveZonesToServer;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
