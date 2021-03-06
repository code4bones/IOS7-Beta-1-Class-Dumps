/* MPVideoOverlayDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(void)overlay:(id)overlay didEndUserEvent:(int)event;
-(void)overlay:(id)overlay didBeginUserEvent:(int)event;
-(void)overlayTappedFullscreenButton:(id)button;
-(void)overlayDidDismissAlternateTracksPopover:(id)overlay;
-(void)overlayTappedScaleModeButton:(id)button;
-(void)overlayDidEndScrubbing:(id)overlay;
-(void)overlayDidBeginScrubbing:(id)overlay;
-(void)overlayTappedBackButton:(id)button;
@end
