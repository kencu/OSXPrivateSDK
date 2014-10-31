//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ReplicaFile : NSObject
{
    struct __CFDictionary *mReplicaDict;
    struct __CFArray *mFlatReplicaArray;
    BOOL mDirty;
    struct timespec mReplicaFileModDate;
    struct __CFString *mSelfName;
    BOOL mRunningAsParent;
}

- (struct __CFDictionary *)replicaDict;
- (struct __CFDictionary *)findMatchToKey:(struct __CFString *)arg1 withValue:(struct __CFString *)arg2;
- (struct __CFArray *)getArrayForKey:(struct __CFString *)arg1;
- (int)loadXMLData:(const char *)arg1;
- (int)statReplicaFile:(const char *)arg1 andGetModDate:(struct timespec *)arg2;
- (struct __CFString *)getNextReplicaName;
- (BOOL)isHappy;
- (void)runningAsParent:(BOOL)arg1;
- (void)updateFormat;
- (BOOL)isOldFormat;
- (void)setDirty:(BOOL)arg1;
- (BOOL)dirty;
- (BOOL)getCStringFromDictionary:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2 maxLen:(long long)arg3 result:(char *)arg4;
- (void)setSelfName:(struct __CFString *)arg1;
- (struct __CFString *)selfName;
- (void)setReplicaStatus:(unsigned char)arg1 forReplica:(struct __CFDictionary *)arg2;
- (unsigned char)getReplicaStatus:(struct __CFDictionary *)arg1;
- (unsigned char)getReplicaSyncPolicyForString:(struct __CFString *)arg1;
- (BOOL)setReplicaSyncPolicyWithString:(struct __CFString *)arg1 forReplica:(struct __CFDictionary *)arg2;
- (BOOL)setReplicaSyncPolicy:(unsigned char)arg1 forReplica:(struct __CFString *)arg2;
- (unsigned char)getReplicaSyncPolicy:(struct __CFDictionary *)arg1 defaultPolicy:(unsigned char)arg2;
- (unsigned char)getReplicaSyncPolicy:(struct __CFDictionary *)arg1;
- (struct __CFString *)getNameFromIPAddress:(const char *)arg1;
- (struct __CFString *)getNameOfReplica:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)getReplicaByName:(struct __CFString *)arg1;
- (void)setKey:(struct __CFString *)arg1 withDate:(struct __CFDate *)arg2 forReplica:(struct __CFDictionary *)arg3;
- (void)setKey:(struct __CFString *)arg1 withDate:(struct __CFDate *)arg2 forReplicaWithName:(struct __CFString *)arg3;
- (void)setSyncAttemptDateForReplica:(struct __CFString *)arg1;
- (void)setEntryModDateForReplica:(struct __CFDictionary *)arg1;
- (void)setSyncDate:(struct __CFDate *)arg1 andHighTID:(long long)arg2 forReplica:(struct __CFString *)arg3;
- (void)setSyncDate:(struct __CFDate *)arg1 forReplica:(struct __CFString *)arg2;
- (void)divorceAllReplicas;
- (void)stripDecommissionedArray;
- (BOOL)replicaHasBeenPromotedToMaster:(struct __CFDictionary *)arg1;
- (void)recommisionReplica:(const char *)arg1;
- (BOOL)replicaIsNotDecommissioned:(struct __CFString *)arg1;
- (BOOL)decommissionReplica:(struct __CFString *)arg1;
- (long long)highTID;
- (long long)lowTID;
- (long long)lowTIDForReplica:(struct __CFString *)arg1;
- (int)roleForReplica:(struct __CFString *)arg1;
- (struct __CFDate *)oldestSyncDate;
- (void)stripSyncDates;
- (int)saveXMLDataToFile:(const char *)arg1;
- (int)saveXMLData;
- (struct __CFArray *)getIPAddressesFromDict:(struct __CFDictionary *)arg1;
- (void)addIPAddress:(const char *)arg1 orReplaceIP:(const char *)arg2 inReplica:(struct __CFDictionary *)arg3;
- (BOOL)addIPAddress:(const char *)arg1 toReplica:(struct __CFDictionary *)arg2;
- (void)addReplicaToLegacyTigerList:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)addReplica:(struct __CFDictionary *)arg1 withParent:(struct __CFDictionary *)arg2;
- (struct __CFDictionary *)addReplicaWithIP:(const char *)arg1 andDNS:(const char *)arg2 withParent:(struct __CFDictionary *)arg3;
- (void)setParentWithDict:(struct __CFDictionary *)arg1;
- (void)setParentWithIP:(const char *)arg1 andDNS:(const char *)arg2;
- (void)addServerUniqueID:(const char *)arg1;
- (struct __CFString *)calcServerUniqueID:(const char *)arg1;
- (void)refreshIfNeeded;
- (BOOL)fileHasChanged;
- (struct __CFString *)xmlString;
- (struct __CFDictionary *)getParent;
- (struct __CFString *)currentServerForLDAP;
- (struct __CFString *)getUniqueID;
- (BOOL)isActive;
- (struct __CFDictionary *)getReplica:(unsigned long long)arg1;
- (unsigned long long)replicaCount:(struct __CFDictionary *)arg1;
- (unsigned long long)replicaCount;
- (void)emptyFlatReplicaArray;
- (void)setReplicaPolicy:(unsigned char)arg1;
- (unsigned char)getReplicaPolicy;
- (void)unlock;
- (void)lock;
- (BOOL)array:(struct __CFArray *)arg1 containsReplicaWithName:(struct __CFString *)arg2;
- (struct __CFDictionary *)getParentOfReplica:(struct __CFDictionary *)arg1;
- (BOOL)needsMergeFrom:(struct __CFDictionary *)arg1 to:(struct __CFDictionary *)arg2;
- (BOOL)mergeReplicaValuesFrom:(struct __CFDictionary *)arg1 to:(struct __CFDictionary *)arg2 parent:(BOOL)arg3;
- (void)mergeReplicaListLegacyTigerReplicaList:(id)arg1 changeStatus:(int *)arg2;
- (void)mergeReplicaListReplicas:(id)arg1 changeStatus:(int *)arg2;
- (void)mergeReplicaListParentRecords:(id)arg1 changeStatus:(int *)arg2;
- (void)mergeReplicaListDecommissionedList:(id)arg1 changeStatus:(int *)arg2;
- (int)mergeReplicaList:(id)arg1;
- (void)serverStruct:(struct PWSReplicaEntry *)arg1 forServerDict:(struct __CFDictionary *)arg2;
- (struct PWSReplicaEntry *)snapshotOfReplicasForServer:(struct __CFDictionary *)arg1;
- (id)free;
- (void)dealloc;
- (void)initCommon;
- (id)initWithXMLStr:(const char *)arg1;
- (id)initWithContentsOfFile:(const char *)arg1;
- (id)initWithPList:(struct __CFDictionary *)arg1;
- (id)init;

@end
