//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRApplication.h>

__attribute__((visibility("hidden")))
@interface SCRSystemApplication : SCRApplication
{
}

- (void)_announceWindowExists;
- (void)announceWindowExists;
- (void)elementWasDestroyed:(id)arg1;
- (id)fullNameDescription;
- (id)initWithPSN:(struct ProcessSerialNumber)arg1 pid:(int)arg2 name:(id)arg3 bundleIdentifier:(id)arg4 bundleVersion:(id)arg5 url:(id)arg6;
- (BOOL)isSystemApplication;

@end
