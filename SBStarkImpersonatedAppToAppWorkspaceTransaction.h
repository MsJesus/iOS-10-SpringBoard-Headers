//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBAlertChangeTransaction;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlertChangeTransaction *_deactivateAlertTransaction;
    SBAlert *_deactivatingAlert;
    _Bool _animatedAppActivation;
}

- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_deactivateAlertIfPossible;
- (void)_handleFailureToLaunch;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromAppToApp;
- (void)_didComplete;
- (void)_doCommit;
- (id)initWithTransitionRequest:(id)arg1;

@end

