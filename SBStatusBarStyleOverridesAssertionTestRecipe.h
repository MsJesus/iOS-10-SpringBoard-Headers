//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBTestRecipe-Protocol.h"

@class NSMapTable, NSString;

@interface SBStatusBarStyleOverridesAssertionTestRecipe : NSObject <SBTestRecipe>
{
    NSMapTable *_assertionsByApp;
}

+ (id)title;
- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

