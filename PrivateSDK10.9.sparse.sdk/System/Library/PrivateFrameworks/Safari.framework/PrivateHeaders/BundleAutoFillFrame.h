//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSFormAutoFillFrame.h"

__attribute__((visibility("hidden")))
@interface BundleAutoFillFrame : NSObject <WBSFormAutoFillFrame>
{
    struct BundleFrame _frame;
}

+ (id)autoFillFrameWithWKBundleFrame:(const struct BundleFrame *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)containsAnyFormElements;
- (void)enumerateChildFramesUsingBlock:(CDUnknownBlockType)arg1;
- (id)committedURL;
- (struct OpaqueJSValue *)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (struct OpaqueJSContext *)jsContextForMetadataControllerScriptWorld;
- (const struct BundleFrame *)wkBundleFrame;
- (struct OpaqueFormAutoFillFrame *)frameRef;
- (id)initWithWKBundleFrame:(const struct BundleFrame *)arg1;

@end
