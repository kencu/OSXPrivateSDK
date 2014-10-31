//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSXPCConnection, SFAuthorization, WriteConfigOnewayMessageDispatcher;

@interface WriteConfigClient : NSObject
{
    SFAuthorization *_authorization;
    NSXPCConnection *_connection;
    WriteConfigOnewayMessageDispatcher *_onewayMessageDispatcher;
}

+ (id)sharedClient;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) SFAuthorization *authorization; // @synthesize authorization=_authorization;
- (void)runBlockSync:(CDUnknownBlockType)arg1;
@property(readonly) NSData *authorizationData; // @dynamic authorizationData;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (id)syncProxyWithSemaphore:(struct dispatch_semaphore_s *)arg1;
@property(readonly) id <XPCWriteConfigOneway> remoteProxy; // @dynamic remoteProxy;
- (void)disconnect;
- (BOOL)isAuthenticated;
- (BOOL)authenticateUsingAuthorizationSync:(id)arg1;
- (void)authenticateUsingAuthorization:(id)arg1;
- (void)dealloc;
- (void)_connectionDidInvalidate;

@end
