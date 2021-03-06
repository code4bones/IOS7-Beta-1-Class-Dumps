/* SBLockScreenViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBLockScreenViewDelegate.h"
#import "SBLockScreenTimerViewControllerDelegate.h"
#import "SBLockScreenNotificationListDelegate.h"
#import "SBLockScreenBatteryChargingViewControllerDelegate.h"
#import "SBLockScreenInfoOverlayDelegate.h"
#import "SBWallpaperObserver.h"
#import "SBWallpaperColorObserver.h"
#import "SBUIPasscodeLockViewDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBLockScreenViewControllerBase.h"

@class SBLockOverlayContext, SBLockScreenCameraController, SBLockScreenFullscreenBulletinViewController, SBLockScreenTemperatureWarningViewController, NSMutableArray, SBLockScreenEmergencyCallViewController, SBLockScreenBatteryChargingViewController, MPUSystemMediaControlsViewController, SBLockScreenDateViewController, SBLockScreenBuddyViewController, SBLockScreenTimerViewController, SBLockScreenModalAlertViewController, SBLockScreenNowPlayingPluginController, SBLockScreenPersonalHotspotViewController, SBLockScreenPluginController, SBAdaptiveColorProvider, SBLockScreenInfoOverlayViewController, SBLockScreenDeviceBlockViewController, SBLockScreenSystemAlertFullscreenViewController, SBLockScreenNotificationListController, SBLockScreenLegalViewController;

__attribute__((visibility("hidden")))
@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperColorObserver, SBWallpaperObserver> {
	BOOL _isInScreenOffMode;
	SBLockScreenDeviceBlockViewController* _blockedController;
	SBLockScreenDateViewController* _dateViewController;
	SBLockScreenLegalViewController* _legalViewController;
	SBLockScreenTimerViewController* _timerViewController;
	SBLockScreenNotificationListController* _notificationController;
	SBLockScreenCameraController* _cameraController;
	MPUSystemMediaControlsViewController* _mediaControlsViewController;
	SBLockScreenModalAlertViewController* _modalAlertController;
	SBLockScreenSystemAlertFullscreenViewController* _fullscreenSystemAlertController;
	NSMutableArray* _pendingFullscreenSystemAlerts;
	SBLockScreenBatteryChargingViewController* _chargingViewController;
	SBLockScreenPersonalHotspotViewController* _personalHotspotController;
	BOOL _attemptingPasscodeUnlock;
	BOOL _chargingViewControllerVisible;
	BOOL _wasAutoUnlocked;
	BOOL _forcePasscodeWhileInCall;
	SBLockScreenPluginController* _pluginController;
	SBLockScreenNowPlayingPluginController* _nowPlayingController;
	SBLockScreenBuddyViewController* _buddyController;
	SBLockOverlayContext* _buddyOverlayContext;
	BOOL _hasShownBuddyEver;
	NSMutableArray* _prioritizedOverlays;
	SBLockOverlayContext* _fullScreenOverlayContext;
	SBLockOverlayContext* _blockedOverlayContext;
	SBLockScreenFullscreenBulletinViewController* _fullscreenBulletinController;
	SBLockOverlayContext* _fullScreenBulletinOverlayContext;
	SBLockScreenInfoOverlayViewController* _infoOverlayController;
	SBLockOverlayContext* _infoOverlayContext;
	SBLockScreenTemperatureWarningViewController* _thermalWarningController;
	SBLockOverlayContext* _thermalWarningContext;
	SBLockScreenEmergencyCallViewController* _emergencyCallController;
	BOOL _mediaControlsVisible;
	SBAdaptiveColorProvider* _colorProvider;
	BOOL _suppressWallpaperAlphaChangeOnScroll;
}
@property(readonly, assign, nonatomic) SBLockScreenPluginController* pluginController;
-(void)wallpaperDidChange;
-(void)_setAdaptiveColorInfo;
-(void)wallpaperColorDidChange:(id)wallpaperColor;
-(void)_removeBuddyBackground;
-(void)_addOrRemoveBuddyBackgroundIfNecessary;
-(BOOL)isShowingMediaControls;
-(void)_setMediaControlsVisible:(BOOL)visible;
-(void)_toggleMediaControls;
-(id)_notificationController;
-(void)_setNowPlayingControllerEnabled:(BOOL)enabled;
-(void)_removeActivePluginView;
-(void)_resetActivePlugin;
-(CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
-(void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
-(void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(void)deactivateCardItem:(id)item;
-(void)updateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(void)noteAlertSheetWasReplaced:(id)replaced withAlertSheet:(id)alertSheet;
-(id)allPendingAlertItems;
-(BOOL)hasSuperModalAlertItems;
-(id)dequeueAllPendingSuperModalAlertItems;
-(id)currentAlertItem;
-(void)cleanupAlertItemsForDeactivation;
-(void)deactivateAlertItem:(id)item;
-(BOOL)activateAlertItem:(id)item;
-(void)pendOrDeactivateFullscreenSystemAlert:(id)alert;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(BOOL)shouldPendAlertItemsWhileActive;
-(void)chargingViewControllerFadedOutContent:(id)content;
-(void)_cleanupBatteryChargingViewWithAnimationDuration:(double)animationDuration;
-(void)_fadeViewsForChargingViewVisible:(BOOL)chargingViewVisible;
-(void)_acStatusChanged:(id)changed;
-(void)dismissFullscreenBulletinAlertWithItem:(id)item;
-(void)modifyFullscreenBulletinAlertWithItem:(id)item;
-(void)presentFullscreenBulletinAlertWithItem:(id)item;
-(void)_removeFullscreenBulletinViewAnimated:(BOOL)animated;
-(void)_addFullscreenBulletinViewWithItem:(id)item;
-(id)lockScreenScrollView;
-(double)lastSlideToUnlockAnimationStartTime;
-(void)notificationListBecomingVisible:(BOOL)visible;
-(void)attemptToUnlockUIFromNotification;
-(void)_dismissNotificationCenterToRevealPasscode;
-(void)bannerEnablementChanged;
-(void)timerControllerDidStopTimer:(id)timerController;
-(void)timerControllerDidStartTimer:(id)timerController;
-(void)_updateDateTimerStatusBarAndLockSlider;
-(BOOL)_shouldShowDate;
-(float)_effectiveVisibleStatusBarAlpha;
-(id)_effectiveCustomSlideToUnlockText;
-(float)_effectiveOpacityForVisibleDateView;
-(BOOL)isMakingEmergencyCall;
-(void)emergencyDialerExitedWithError:(id)error;
-(void)exitEmergencyDialerAnimated:(BOOL)animated;
-(void)_destroyEmergencyDialerAnimated:(BOOL)animated;
-(void)launchEmergencyDialer;
-(void)_adjustIdleTimerForEmergencyDialerActive:(BOOL)emergencyDialerActive;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)pressed;
-(void)passcodeLockViewCancelButtonPressed:(id)pressed;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
-(void)passcodeLockViewPasscodeEntered:(id)entered;
-(void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
-(void)_passcodeStateChanged;
-(BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(BOOL)isPasscodeLockVisible;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
-(void)noteNetworkTetheringStatusUpdated;
-(void)_handlePasscodePolicyChanged;
-(void)_handlePasscodeLockStateChanged;
-(void)_handleBacklightFadeEnded;
-(void)_handleBacklightChanged;
-(void)_handleDisplayTurnedOn;
-(void)_handleDisplayTurnedOff;
-(void)noteDeviceBlockedStatusUpdated;
-(void)_unsupportedChargingAccessoryStateChanged:(id)changed;
-(void)infoOverlayWantsDismissal;
-(void)_removeInfoOverlayViewAnimated:(BOOL)animated;
-(void)_addInfoOverlayViewWithTitle:(id)title;
-(void)removeOverlay:(id)overlay animated:(BOOL)animated completion:(id)completion;
-(void)addOverlay:(id)overlay animated:(BOOL)animated completion:(id)completion;
-(void)__transitionOverlayAnimated:(BOOL)animated from:(id)from to:(id)to completion:(id)completion;
-(void)_removeAllOverlays;
-(BOOL)hasTranslucentBackground;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesBanners;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(int)statusBarStyle;
-(void)alertDisplayWillBecomeVisible;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(void)_notificationCenterDidPresent:(id)_notificationCenter;
-(void)_notificationCenterWillPresent:(id)_notificationCenter;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)displayDidDisappear;
-(void)deactivate;
-(void)activate;
-(void)_startFadeInAnimationForBatteryView:(BOOL)batteryView;
-(void)startLockScreenFadeInAnimation;
-(void)prepareToEnterLostMode;
-(BOOL)isShowingOverheatUI;
-(void)prepareToReturnToCameraFromCall;
-(void)cancelReturnToCameraAfterCall;
-(BOOL)shouldReturnToCameraAfterCall;
-(void)handlePhoneAppExitedIfNecessary;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)activateCamera;
-(BOOL)cameraIsVisible;
-(BOOL)cameraIsActive;
-(void)finishUIUnlockFromSource:(int)source;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
-(BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
-(id)_effectiveUnlockActionContext;
-(void)setForcesPasscodeViewDuringCall:(BOOL)call;
-(BOOL)_shouldIgnorePasscodeForActiveCall;
-(void)prepareForExternalUIUnlock;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(BOOL)isInScreenOffMode;
-(BOOL)isLockScreenVisible;
-(void)lockScreenView:(id)view didChangeTopLegibleColor:(id)color;
-(void)lockScreenView:(id)view didEndScrollingOnPage:(int)page;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)lockScreenView percentScrolledVelocity:(float)velocity targetScrollPercentage:(float)percentage;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(float)lockScreenView tracking:(BOOL)tracking;
-(void)lockScreenViewDidBeginScrolling:(id)lockScreenView;
-(void)lockScreenView:(id)view didScrollToPage:(int)page;
-(BOOL)wasAutoUnlocked;
-(void)_removeMediaControls;
-(void)_addMediaControls;
-(id)_cameraView;
-(id)viewToAnimateForAlertTransition;
-(void)_removePersonalHotspotView;
-(void)_addPersonalHotspotViewIfNecessary;
-(void)_removeBatteryChargingView;
-(void)_addBatteryChargingView;
-(void)_removeFullscreenSystemAlertViewAnimated:(BOOL)animated;
-(void)_addFullscreenSystemAlertViewForSystemNotification:(id)systemNotification withTitle:(id)title andSubtitle:(id)subtitle;
-(void)_removeNotificationView;
-(void)_addNotificationView;
-(void)_removeModalAlertView;
-(void)_addModalAlertView;
-(void)_removeTimerView;
-(void)_addTimerView;
-(void)_removeLegalView;
-(void)_addLegalView;
-(void)_removeDateView;
-(void)_addDateView;
-(void)_addRemoveOrChangePasscodeViewIfNecessary;
-(void)_addOrRemoveThermalTrapViewIfNecessary:(BOOL)necessary;
-(void)_addOrRemoveBlockedViewIfNecessary:(BOOL)necessary;
-(void)_addCameraGrabberIfNecessary;
-(id)_lockScreenViewCreatingIfNecessary;
-(id)lockScreenView;
-(void)_releaseLockScreenView;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
