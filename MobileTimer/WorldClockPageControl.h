/* WorldClockPageControl.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface WorldClockPageControl : XXUnknownSuperclass {
	UIImage* _indicator;
	UIImage* _currentIndicator;
}
-(id)_pageIndicatorCurrentImageForPage:(int)page;
-(id)_pageIndicatorImageForPage:(int)page;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame useNeutralColor:(BOOL)color;
@end
