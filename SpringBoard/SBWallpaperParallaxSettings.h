/* SBWallpaperParallaxSettings.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBParallaxSettings.h"


__attribute__((visibility("hidden")))
@interface SBWallpaperParallaxSettings : SBParallaxSettings {
	float _overhangX;
	float _overhangY;
	float _perspectiveTransform;
}
@property(assign) float perspectiveTransform;
@property(assign) float overhangY;
@property(assign) float overhangX;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end