//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError;

@protocol D2DInquiryDelegate

@optional
- (void)inquiryComplete:(id <D2DInquiry>)arg1 error:(NSError *)arg2;
- (void)inquiry:(id <D2DInquiry>)arg1 deviceNameUpdated:(id <D2DPeer>)arg2 devicesRemaining:(unsigned long long)arg3;
- (void)inquiry:(id <D2DInquiry>)arg1 startedUpdatingDeviceNames:(unsigned long long)arg2;
- (void)inquiry:(id <D2DInquiry>)arg1 updatedDevice:(id <D2DPeer>)arg2;
- (void)inquiry:(id <D2DInquiry>)arg1 foundDevice:(id <D2DPeer>)arg2;
- (void)inquiryStarted:(id <D2DInquiry>)arg1;
@end
