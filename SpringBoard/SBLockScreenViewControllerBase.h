/* SBLockScreenViewControllerBase.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBShowcaseControllerOwner.h"
#import "SpringBoard-Structs.h"
#import "SBAlert.h"

@class SBUnlockActionContext;
@protocol SBLockScreenViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenViewControllerBase : SBAlert <SBShowcaseControllerOwner> {
	id<SBLockScreenViewControllerDelegate> _delegate;
	SBUnlockActionContext* _customUnlockActionContext;
}
@property(assign, nonatomic) id<SBLockScreenViewControllerDelegate> delegate;
-(void)setShowingOverheatUI:(BOOL)ui;
-(BOOL)isShowingNewBulletin;
-(void)lockBarStoppedTracking:(id)tracking;
-(void)lockBarStartedTracking:(id)tracking;
-(BOOL)toggleMediaControls;
-(void)setChargingViewHasFadedOut:(BOOL)anOut;
-(BOOL)chargingViewHasFadedOut;
-(id)restoreFromSavedBulletinController;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password lockViewOwner:(id)owner;
-(BOOL)willAllowOtherLockBarsToUnlock;
-(void)updateNowPlayingInfo:(id)info app:(id)app;
-(id)activationBlockAnimated:(BOOL)animated;
-(BOOL)shouldShowInCallUI;
-(id)nameOfPluginController:(id)pluginController;
-(id)interfaceControllingLockScreenPluginController;
-(id)highestPriorityLockScreenPluginController;
-(void)noteAlertSheetWasReplaced:(id)replaced withAlertSheet:(id)alertSheet;
-(id)allPendingAlertItems;
-(BOOL)hasSuperModalAlertItems;
-(id)currentAlertItem;
-(id)dequeueAllPendingSuperModalAlertItems;
-(void)deactivateAlertItem:(id)item;
-(BOOL)activateAlertItem:(id)item;
-(BOOL)wantsToHandleAlert:(id)handleAlert;
-(BOOL)handleExternalKeyDownEvent;
-(void)noteNetworkTetheringStatusUpdated;
-(void)noteDeviceBlockedStatusUpdated;
-(BOOL)isLockScreenVisible;
-(BOOL)isShowingOverheatUI;
-(void)updateInterfaceIfNecessary;
-(BOOL)isShowingMediaControls;
-(void)updateOrientationForUndim;
-(BOOL)lockScreenBulletinControllerIsActive;
-(void)setCustomUnlockActionContext:(id)context;
-(id)_customUnlockActionContext;
-(id)currentUnlockActionContext;
-(BOOL)lockScreenIsShowingBulletins;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)shouldShowSlideshowButton;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleMenuButtonTap;
-(void)prepareToEnterLostMode;
-(void)updateCardItem:(id)item;
-(void)deactivateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(CGRect)defaultContentRegionForPluginController:(id)pluginController withOrientation:(int)orientation;
-(void)disableLockScreenBundleWithName:(id)name deactivationContext:(id)context;
-(void)enableLockScreenBundleWithName:(id)name activationContext:(id)context;
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(void)showcase:(id)showcase didTransferOwnershipToOwner:(id)owner;
-(void)assumeShowcaseOwnership:(id)ownership;
-(void)showcaseWantsToBeDismissed:(id)beDismissed animated:(BOOL)animated;
-(void)showcase:(id)showcase updateRevealMode:(int)mode withBlock:(id)block;
-(BOOL)presentShowcaseViewController:(id)controller revealMode:(int)mode completion:(id)completion;
-(BOOL)hasActiveUIAccessories;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(BOOL)isInScreenOffMode;
-(void)startLockScreenFadeInAnimation;
-(BOOL)canRelockForAutoDimTimer;
-(BOOL)wantsScreenToAutoDim;
-(void)setForcesPasscodeViewDuringCall:(BOOL)call;
-(void)prepareToReturnToCameraFromCall;
-(void)cancelReturnToCameraAfterCall;
-(BOOL)shouldReturnToCameraAfterCall;
-(void)handlePhoneAppExitedIfNecessary;
-(void)noteStartingPhoneCallWhileUILocked;
-(BOOL)isMakingEmergencyCall;
-(void)emergencyDialerExitedWithError:(id)error;
-(void)exitEmergencyDialerAnimated:(BOOL)animated;
-(void)launchEmergencyDialer;
-(void)activateCamera;
-(BOOL)cameraIsVisible;
-(BOOL)cameraIsActive;
-(void)prepareForExternalUIUnlock;
-(void)deactivate;
-(void)activate;
-(BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(void)finishUIUnlockFromSource:(int)source;
-(void)attemptToUnlockUIFromNotification;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)source;
-(void)prepareForUIUnlock;
-(BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)source withOptions:(id)options;
-(BOOL)isPasscodeLockVisible;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated withUnlockSource:(int)unlockSource andOptions:(id)options;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated completion:(id)completion;
-(void)setPasscodeLockVisible:(BOOL)visible animated:(BOOL)animated;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
@end
