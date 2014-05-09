//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSAttributedString, NSError, NSString, NSURL, NSXPCConnection, SUUpdateProduct;

@interface SUAppStoreUpdate : NSObject <NSSecureCoding>
{
    SUUpdateProduct *_product;
    NSError *_updateError;
    long long _lastState;
    struct dispatch_queue_s *_q;
    NSString *_longDescriptionString;
    NSXPCConnection *_connection;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSString *longDescriptionString; // @synthesize longDescriptionString=_longDescriptionString;
@property(readonly) BOOL canRetry;
@property(readonly) NSError *updateError;
@property(readonly) NSArray *applicationIdentifiersToClose;
@property(readonly) NSURL *customURLForPostInstallNotification;
@property(readonly) NSString *customTextForPostInstallNotification;
@property(readonly) NSString *customTitleForPostInstallNotification;
@property(readonly) BOOL showPostInstallNotification;
@property(readonly) long long autoInstallWithDelayInHours;
@property(readonly) BOOL isCritical;
@property(readonly) BOOL allowedToUseInstallLater;
@property(readonly) BOOL isRamped;
@property(readonly) BOOL isRecommended;
@property(readonly) id auxInfo;
@property(readonly) NSArray *tags;
@property(readonly) NSString *productKey;
@property(readonly) NSAttributedString *firmwareWarning;
@property(readonly) NSAttributedString *licenseAgreement;
@property(readonly) NSString *currentLocalization;
@property(readonly) int action;
@property(readonly) NSString *longDescription;
- (BOOL)_connectToService;
@property(readonly) NSString *versionString;
@property(readonly) NSString *title;
- (id)description;
- (void)_setCurrentStatus:(id)arg1;
- (void)_setProduct:(id)arg1;
- (id)_product;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithProduct:(id)arg1;

@end
