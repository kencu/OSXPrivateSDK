/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISDialogDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>;

@interface ISDialogDelegateProxy : NSObject <ISDialogDelegate>
{
    id <ISDialogDelegate> _delegate;
}

@property(retain) id <ISDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dialog:(id)arg1 shouldDismissWithReturnCode:(long long)arg2 replyBlock:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
- (id)initWithDelegate:(id)arg1;

@end
