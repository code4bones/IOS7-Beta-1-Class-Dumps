/* MailStatusBarViewDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol MailStatusBarViewDelegate
-(void)statusBarView:(id)view stateDidChange:(unsigned)state;
-(int)interfaceOrientation;
-(unsigned)unsentCount;
-(id)lastUpdated;
-(id)statusWithCount:(int*)count total:(int*)total progress:(float*)progress state:(unsigned*)state;
@end
