//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/XMOperation.h>

@class NSDictionary, NSMutableDictionary, NSString, XMSandbox;

@interface XMCommitSandboxOperation : XMOperation
{
    XMSandbox *_sandbox;
    NSDictionary *_userNamesMap;
    NSString *_destination;
    unsigned long long _size;
    NSMutableDictionary *_resolvedUserInfo;
}

- (void)_fakeProgress:(id)arg1;
- (id)_uniqueLongnameForUserWithName:(id)arg1;
- (id)_uniqueShortnameForUserWithName:(id)arg1;
- (id)_uniqueHomeDirectoryForUserWithName:(id)arg1;
- (BOOL)_deleteTemporaryFilesAtPath:(id)arg1 error:(id *)arg2;
- (id)_addCommitTimeParameters:(id)arg1;
- (BOOL)_importDataForUsername:(id)arg1 userID:(long long)arg2 homeDirectory:(id)arg3 parameters:(id)arg4 error:(id *)arg5;
- (BOOL)_shoveRoot:(id)arg1 toDestination:(id)arg2 forUser:(id)arg3 error:(id *)arg4;
- (BOOL)_prepareRoot:(id)arg1 withOwner:(id)arg2 group:(id)arg3 error:(id *)arg4;
- (BOOL)_createUserAccount:(id)arg1 withShortname:(id)arg2 longname:(id)arg3 homeDirectory:(id)arg4 outUID:(long long *)arg5 error:(id *)arg6;
- (BOOL)_runImportersForUser:(id)arg1 error:(id *)arg2;
- (BOOL)_commitUser:(id)arg1 error:(id *)arg2;
- (void)run;
- (BOOL)isCancellable;
- (void)dealloc;
- (id)initWithSandbox:(id)arg1 userNamesMap:(id)arg2 destination:(id)arg3 size:(unsigned long long)arg4 delegate:(id)arg5;

@end
