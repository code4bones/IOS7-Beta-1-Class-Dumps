/* WATransitionCardLayout.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "WACardLayout.h"
#import "Weather-Structs.h"

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface WATransitionCardLayout : WACardLayout {
	float _pivotHeight;
	NSIndexPath* _pivotIndexPath;
}
@property(retain, nonatomic) NSIndexPath* pivotIndexPath;
-(CGRect)frameForItem:(int)item;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)proposedContentOffset withScrollingVelocity:(CGPoint)scrollingVelocity;
-(void)prepareLayout;
-(void)dealloc;
@end
