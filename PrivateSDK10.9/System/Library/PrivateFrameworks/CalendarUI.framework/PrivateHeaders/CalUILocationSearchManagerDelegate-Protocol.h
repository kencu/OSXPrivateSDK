//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalUILocationSearchManager;

@protocol CalUILocationSearchManagerDelegate <NSObject>
- (void)startProgressIndicatorFromSearchManager:(CalUILocationSearchManager *)arg1;
- (void)stopProgressIndicatorFromSearchManager:(CalUILocationSearchManager *)arg1;
- (void)searchResultsShouldDisplayFromSearchManager:(CalUILocationSearchManager *)arg1;
@end
