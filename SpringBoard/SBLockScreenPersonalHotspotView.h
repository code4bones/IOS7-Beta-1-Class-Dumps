/* SBLockScreenPersonalHotspotView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface SBLockScreenPersonalHotspotView : XXUnknownSuperclass {
	UILabel* _clientCountLabel;
	unsigned _clientCount;
}
@property(assign, nonatomic) unsigned clientCount;
-(void)layoutSubviews;
-(void)_updateLabel;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
