/* TVOutController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Preferences-Structs.h"

@class TVOutManager;

__attribute__((visibility("hidden")))
@interface TVOutController : XXUnknownSuperclass {
	TVOutManager* _tvOutManager;
}
-(void)setTVSignal:(id)signal specifier:(id)specifier;
-(id)tvSignal:(id)signal;
-(void)setWidescreen:(id)widescreen specifier:(id)specifier;
-(id)isWidescreen:(id)widescreen;
-(void)writeValue:(CFStringRef)value forKey:(CFStringRef)key;
-(void)handleTVOutChange;
-(id)specifiers;
-(void)dealloc;
-(id)init;
@end
