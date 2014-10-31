/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

// Not exported
@interface VKPShieldIndexTextEntry : PBCodable <NSCopying>
{
    NSString *_artworkIdentifier;
    NSMutableArray *_shieldTexts;
    int _shieldType;
    struct {
        unsigned int shieldType:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *shieldTexts; // @synthesize shieldTexts=_shieldTexts;
@property(nonatomic) int shieldType; // @synthesize shieldType=_shieldType;
@property(retain, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)shieldTextAtIndex:(unsigned long long)arg1;
- (unsigned long long)shieldTextsCount;
- (void)addShieldText:(id)arg1;
- (void)clearShieldTexts;
@property(nonatomic) BOOL hasShieldType;
@property(readonly, nonatomic) BOOL hasArtworkIdentifier;
- (void)dealloc;

@end
