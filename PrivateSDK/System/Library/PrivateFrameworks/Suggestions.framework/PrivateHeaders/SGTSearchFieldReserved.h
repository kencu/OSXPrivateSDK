//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSProgressIndicator, NSString, NSTimer, NSWindowController, SGTCompletionTableView, SGTCompletionWindow, SGTFadeWindowEffect, SGTInput, SGTQueryGenius, SGTSuggestion, _SGTQueryScopeMenuOverride;

__attribute__((visibility("hidden")))
@interface SGTSearchFieldReserved : NSObject
{
    NSArray *suggesters;
    SGTInput *currentInput;
    NSMutableArray *categories;
    NSMapTable *suggestionsByCategory;
    NSMutableSet *categoriesWithIntermediateResults;
    NSArray *displayCategories;
    NSMapTable *displaySuggestionsByCategory;
    SGTCompletionWindow *completionWindow;
    SGTCompletionTableView *completionTableView;
    BOOL settingValue;
    NSString *userTypedString;
    NSMutableArray *suggestions;
    SGTSuggestion *currentSuggestion;
    BOOL abortSearchWhenEmptyString;
    BOOL textChangingProgrammatically;
    BOOL open;
    BOOL isDisplayingStaticSuggestions;
    BOOL observingApplicationState;
    BOOL interactingWithButton;
    BOOL textIsMarked;
    BOOL ignoreNextTextValidation;
    unsigned long long textChangedID;
    long long typingScope;
    BOOL acceptsScopeSuggestion;
    SGTQueryGenius *genius;
    id eventMonitor;
    NSTimer *autocloseTimer;
    SGTFadeWindowEffect *autocloseFadeEffect;
    double lastInputStartTime;
    id debugEventMonitor;
    NSWindowController *debugWindowController;
    long long savedSelectionIndex;
    BOOL currentSelectionIsAutofirst;
    BOOL selectingBestSuggestion;
    BOOL ignoreWindowResizeNotifications;
    id <SGTSearchFieldQueryScopeDelegate> queryScopeDelegate;
    _SGTQueryScopeMenuOverride *queryScopeMenuOverride;
    NSProgressIndicator *spinner;
    long long currentRequest;
    double queryScopeMenuSpinTime;
    NSDictionary *searchDelegateUserInfo;
    BOOL queryStringChangesAreTransient;
}

- (void)dealloc;
- (id)init;

@end
