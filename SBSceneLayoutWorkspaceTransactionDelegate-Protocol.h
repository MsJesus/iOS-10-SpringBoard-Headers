//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBSceneLayoutWorkspaceTransaction;

@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
- (void)transaction:(SBSceneLayoutWorkspaceTransaction *)arg1 didEndLayoutTransitionWithContinuation:(void (^)(SBWorkspaceApplicationTransitionContext *, unsigned long long))arg2;
- (void)transaction:(SBSceneLayoutWorkspaceTransaction *)arg1 performTransitionWithCompletion:(void (^)(void))arg2;
- (void)transactionWillBeginLayoutTransition:(SBSceneLayoutWorkspaceTransaction *)arg1;

@optional
- (_Bool)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(SBSceneLayoutWorkspaceTransaction *)arg1;
@end

