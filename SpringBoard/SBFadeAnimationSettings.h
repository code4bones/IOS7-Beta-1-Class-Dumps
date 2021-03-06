/* SBFadeAnimationSettings.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBAnimationSettings, NSValue;

__attribute__((visibility("hidden")))
@interface SBFadeAnimationSettings : XXUnknownSuperclass {
	float _backlightFadeDuration;
	SBAnimationSettings* _dateInSettings;
	SBAnimationSettings* _overlayInSettings;
	SBAnimationSettings* _contentInSettings;
	SBAnimationSettings* _wallpaperInSettings;
	NSValue* _wallpaperInContentsRect;
	SBAnimationSettings* _dateOutSettings;
	SBAnimationSettings* _overlayOutSettings;
	SBAnimationSettings* _wallpaperOutSettings;
	NSValue* _wallpaperOutContentsRect;
}
@property(retain, nonatomic) NSValue* wallpaperOutContentsRect;
@property(retain, nonatomic) SBAnimationSettings* wallpaperOutSettings;
@property(retain, nonatomic) SBAnimationSettings* overlayOutSettings;
@property(retain, nonatomic) SBAnimationSettings* dateOutSettings;
@property(retain, nonatomic) NSValue* wallpaperInContentsRect;
@property(retain, nonatomic) SBAnimationSettings* wallpaperInSettings;
@property(retain, nonatomic) SBAnimationSettings* contentInSettings;
@property(retain, nonatomic) SBAnimationSettings* overlayInSettings;
@property(retain, nonatomic) SBAnimationSettings* dateInSettings;
@property(assign, nonatomic) float backlightFadeDuration;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end
