/* SBSystemLocalNotificationAlert.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSString, UILocalNotification, SBUISound, SBApplication;
@protocol SBSystemLocalNotificationAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBSystemLocalNotificationAlert : XXUnknownSuperclass {
	SBApplication<SBSystemLocalNotificationAlertDelegate>* _app;
	UILocalNotification* _localNotification;
	NSString* _bodyText;
	NSString* _actionLabel;
	NSString* _customLockLabel;
	unsigned _launchButtonIndex;
	unsigned _snoozeButtonIndex;
	SBUISound* _sound;
	NSTimer* _autoMuteTimer;
}
@property(readonly, assign, nonatomic) NSString* bodyText;
@property(readonly, assign, nonatomic) UILocalNotification* localNotification;
@property(readonly, assign, nonatomic) SBApplication* application;
+(void)snoozeAlertsAndDismiss:(BOOL)dismiss;
+(BOOL)isAnyAlertPlayingAnAVItem;
+(id)pathForSoundName:(id)soundName inApp:(id)app;
+(id)localizedStringFromKey:(id)key defaultValue:(id)value inBundle:(id)bundle arguments:(id)arguments;
+(id)alertMatchingLocalNotification:(id)notification;
+(id)alerts;
-(BOOL)isSystemLocalNotificationAlert;
-(void)dismiss:(int)dismiss;
-(void)willDeactivateForReason:(int)reason;
-(void)willActivate;
-(void)_autoMuteTimerFired;
-(void)_playPresentationSound;
-(id)sound;
-(void)performUnlockAction;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(int)alertPriority;
-(id)alertItemNotificationSender;
-(int)alertItemNotificationType;
-(int)unlockSource;
-(BOOL)isCriticalAlert;
-(BOOL)shouldShowInEmergencyCall;
-(float)lockLabelFontSize;
-(id)lockLabel;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(Class)alertSheetClass;
-(void)dealloc;
-(id)initWithLocalNotification:(id)localNotification forApplication:(id)application;
-(BOOL)isSnoozable;
@end
