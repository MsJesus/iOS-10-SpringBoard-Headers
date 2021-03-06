//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BSDescriptionProviding-Protocol.h"
#import "SBApplicationHosting-Protocol.h"
#import "SBDisplay-Protocol.h"

@class FBDisplayLayoutElement, NSHashTable, NSMutableDictionary, NSString, SBActivationSettings, SBAlertManager, SBAlertView, SBDeactivationSettings, SBProcessSettings, SBStateSettings, UIScreen;
@protocol SBAlertDelegate;

@interface SBAlert : UIViewController <BSDescriptionProviding, SBDisplay, SBApplicationHosting>
{
    id <SBAlertDelegate> _alertDelegate;
    SBAlertView *_display;
    NSMutableDictionary *_dictionary;
    _Bool _isWallpaperTunnelActive;
    _Bool _backgroundStyleIsSet;
    long long _backgroundStyle;
    _Bool _isForcingBackgroundStyleUpdate;
    _Bool _suppressesBanners;
    _Bool _expectsFaceContact;
    _Bool _occluding;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    SBStateSettings *_stateSettings;
    SBProcessSettings *_processSettings;
    int _orientationChangedEventsEnabled;
    _Bool _requestedDismissal;
    UIScreen *_targetScreen;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSHashTable *_observers;
    SBAlertManager *_alertManager;
}

+ (void)test;
+ (void)registerForAlerts;
@property(retain, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(nonatomic) _Bool expectsFaceContact; // @synthesize expectsFaceContact=_expectsFaceContact;
@property(nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) _Bool requestedDismissal; // @synthesize requestedDismissal=_requestedDismissal;
- (void).cxx_destruct;
- (id)_displayLayoutElementIdentifier;
- (void)_deactivateLayoutElement;
@property(nonatomic, getter=_isOccluding, setter=_setOccluding:) _Bool _occluding;
- (_Bool)_isLockAlert;
- (void)_removeFromImpersonatedAppIfNecessary;
- (id)_impersonatesApplicationWithBundleID;
- (void)removeFromView;
- (void)alertViewIsReadyToDismiss:(id)arg1;
- (void)setDisplay:(id)arg1;
- (void)setAlertDelegate:(id)arg1;
- (id)alertDelegate;
- (_Bool)_shouldDismissSwitcherOnActivation;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
@property(readonly, nonatomic) long long whitePointAdaptivityStyle;
@property(readonly, nonatomic) _Bool activatedForSiri;
@property(readonly, nonatomic) _Bool suppressesSiri;
@property(readonly, nonatomic) _Bool suppressesControlCenter;
@property(readonly, nonatomic) _Bool suppressesNotificationCenter;
@property(nonatomic) _Bool suppressesBanners;
- (void)handleAutoLock;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)hasTranslucentBackground;
- (_Bool)shouldPendAlertItemsWhileActive;
- (void)handleSlideshowHardwareButton;
- (_Bool)handleMenuButtonHeld;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonTap;
- (void)animateDeactivation;
- (_Bool)currentlyAnimatingDeactivation;
- (void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(_Bool)arg2;
- (void)didFinishAnimatingOut;
- (void)didFinishAnimatingIn;
- (id)legibilitySettings;
- (id)effectiveStatusBarStyleRequest;
- (long long)effectiveStatusBarStyle;
- (id)statusBarStyleRequest;
- (long long)starkStatusBarStyle;
- (long long)statusBarStyle;
- (double)longPressDurationForHomeButton;
- (double)autoLockTime;
- (double)autoDimTime;
- (_Bool)managesOwnStatusBarAtActivation;
- (_Bool)allowsEventOnlySuspension;
- (_Bool)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (void)deactivate;
- (void)activate;
- (int)statusBarStyleOverridesToCancel;
- (void)displayDidDisappear;
- (void)displayWillAppear;
- (float)finalAlpha;
- (_Bool)wantsTimeInStatusBar;
- (_Bool)showsSpringBoardStatusBar;
- (_Bool)undimsDisplay;
- (void)didStackWithAlert:(id)arg1;
- (void)willStackWithAlert:(id)arg1;
- (_Bool)allowsStackingOfAlert:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)removeBackgroundStyleWithAnimationFactory:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1 withAnimationFactory:(id)arg2 force:(_Bool)arg3;
- (void)setBackgroundStyle:(long long)arg1 withAnimationFactory:(id)arg2;
- (long long)customBackgroundStyle;
- (_Bool)wantsCustomBackgroundStyleForAllWallpaperVariants;
- (_Bool)wantsCustomBackgroundStyle;
- (_Bool)isWallpaperTunnelActive;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)clearProcessSettings;
- (void)applyProcessSettings:(id)arg1;
- (id)copyProcessSettings;
- (id)objectForProcessSetting:(long long)arg1;
- (void)setObject:(id)arg1 forProcessSetting:(long long)arg2;
- (_Bool)boolForProcessSetting:(long long)arg1;
- (long long)flagForProcessSetting:(long long)arg1;
- (void)setFlag:(long long)arg1 forProcessSetting:(long long)arg2;
- (void)clearStateSettings;
- (void)applyStateSettings:(id)arg1;
- (id)copyStateSettings;
- (id)objectForStateSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (_Bool)boolForStateSetting:(unsigned int)arg1;
- (long long)flagForStateSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forStateSetting:(unsigned int)arg2;
- (void)clearDeactivationSettings;
- (void)applyDeactivationSettings:(id)arg1;
- (id)copyDeactivationSettings;
- (id)objectForDeactivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forDeactivationSetting:(unsigned int)arg2;
- (_Bool)boolForDeactivationSetting:(unsigned int)arg1;
- (long long)flagForDeactivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned int)arg2;
- (void)clearActivationSettings;
- (void)applyActivationSettings:(id)arg1;
- (id)copyActivationSettings;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (id)copyDisplaySettings;
- (void)dismissAlert;
- (void)clearDisplay;
- (id)display;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)wantsFullScreenLayout;
- (id)_screen;
- (void)_setTargetScreen:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)isRemote;
- (_Bool)matchesInCallUIService;
- (_Bool)matchesAnyInCallService;
- (_Bool)matchesRemoteAlertService:(id)arg1 options:(id)arg2;
- (id)effectiveViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

