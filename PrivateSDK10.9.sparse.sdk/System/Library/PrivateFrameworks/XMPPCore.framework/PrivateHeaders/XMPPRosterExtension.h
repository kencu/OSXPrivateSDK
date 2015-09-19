//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XMPPCore/XMPPExtension.h>

@class NSMutableDictionary, NSMutableSet;

@interface XMPPRosterExtension : XMPPExtension
{
    id <XMPPRosterExtensionDelegate> _delegate;
    NSMutableDictionary *_rosterItems;
    NSMutableDictionary *_cachedUpdateItems;
    NSMutableSet *_cachedSubscriptions;
    NSMutableSet *_cachedUnsubscriptions;
    NSMutableSet *_cachedUnsubscriptionsToReply;
    NSMutableSet *_cachedSubscriptionsToReply;
    int _cachedLevels;
}

- (void)_rosterReceivedFullResetYes:(id)arg1;
- (void)_rosterReceivedFullResetNo:(id)arg1;
- (BOOL)_rosterReceived:(id)arg1 fullReset:(BOOL)arg2;
- (int)_setSubscriptionStatusForSubscriptionType:(id)arg1 askState:(id)arg2;
- (BOOL)_rosterInfoSet:(id)arg1;
- (void)endRosterChanges;
- (void)startRosterChanges;
- (BOOL)removeGroup:(id)arg1 forRosterItem:(id)arg2;
- (void)addGroup:(id)arg1 forRosterItem:(id)arg2;
- (void)setGroups:(id)arg1 forRosterItem:(id)arg2;
- (id)groupsForRosterItem:(id)arg1;
- (id)rosterItemsInGroup:(id)arg1;
- (void)removeRosterItemNamed:(id)arg1;
- (void)addRosterItemNamed:(id)arg1;
- (BOOL)itemIsInRoster:(id)arg1;
- (void)cancelSubscriptionFromItem:(id)arg1;
- (void)requestSubscriptionFromItem:(id)arg1;
- (void)rejectSubscriptionRequestFromItem:(id)arg1;
- (void)acceptSubscriptionRequestFromItem:(id)arg1;
- (void)_addRejectSubscriptionItem:(id)arg1;
- (void)_addAcceptSubscriptionItem:(id)arg1;
- (void)_addSubscriptionItem:(id)arg1 subscribe:(BOOL)arg2 reply:(BOOL)arg3;
- (int)subscriptionStatusForRosterItem:(id)arg1;
- (void)setNickname:(id)arg1 forRosterItem:(id)arg2;
- (id)nicknameForRosterItem:(id)arg1;
- (void)handlePresenceNode:(id)arg1;
- (void)_updateRosterByChangingProperty:(id)arg1 toValue:(id)arg2 forRosterItem:(id)arg3;
- (id)_latestPropertiesForRosterItem:(id)arg1;
- (BOOL)isRosterItem:(id)arg1;
- (id)_propertiesForRosterItem:(id)arg1;
- (void)_sendRosterUpdateWithProperties:(id)arg1;
- (void)_sendRosterUpdatesWithProperties:(id)arg1;
- (id)allItems;
- (void)requestRoster;
- (void)loggedOut;
- (void)loggedIn;
- (void)clearDelegate;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end
