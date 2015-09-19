/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKShareID, NSArray, NSMutableDictionary;

// Not exported
@interface CKDModifyShareCommentsURLRequest : CKDURLRequest
{
    id _shareCommentSavedBlock;
    id _shareCommentDeletedBlock;
    NSArray *_commentsToSave;
    NSArray *_commentIDsToDelete;
    CKShareID *_shareID;
    NSMutableDictionary *_requestIDToComment;
    NSMutableDictionary *_requestIDToCommentID;
}

@property(retain, nonatomic) NSMutableDictionary *requestIDToCommentID; // @synthesize requestIDToCommentID=_requestIDToCommentID;
@property(retain, nonatomic) NSMutableDictionary *requestIDToComment; // @synthesize requestIDToComment=_requestIDToComment;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSArray *commentIDsToDelete; // @synthesize commentIDsToDelete=_commentIDsToDelete;
@property(retain, nonatomic) NSArray *commentsToSave; // @synthesize commentsToSave=_commentsToSave;
@property(copy, nonatomic) id shareCommentDeletedBlock; // @synthesize shareCommentDeletedBlock=_shareCommentDeletedBlock;
@property(copy, nonatomic) id shareCommentSavedBlock; // @synthesize shareCommentSavedBlock=_shareCommentSavedBlock;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithCommentsToSave:(id)arg1 commentIDsToDelete:(id)arg2 inShareWithID:(id)arg3;

@end
