//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString, SBApplication;

@protocol SBApplicationRestrictionDataSource <NSObject>
- (NSSet *)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)noteNeedsToRefreshVisiblityOverrides;
- (NSArray *)alwaysAvailableApplicationBundleIdentifiers;
- (NSArray *)allBundleIdentifiers;
- (NSArray *)allApplications;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)arg1;
@end

