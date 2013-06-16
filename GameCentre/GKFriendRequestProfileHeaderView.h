/* GKFriendRequestProfileHeaderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCentre-Structs.h"
#import "GKPlayerProfileHeaderView.h"

@class GKTextBubbleControl, GKHorizontalBubbleControlsView;

__attribute__((visibility("hidden")))
@interface GKFriendRequestProfileHeaderView : GKPlayerProfileHeaderView {
	GKTextBubbleControl* _acceptBubble;
	GKTextBubbleControl* _ignoreBubble;
	GKHorizontalBubbleControlsView* _bubblesContainerView;
}
@property(retain, nonatomic) GKHorizontalBubbleControlsView* bubblesContainerView;
@property(retain, nonatomic) GKTextBubbleControl* ignoreBubble;
@property(retain, nonatomic) GKTextBubbleControl* acceptBubble;
-(void)pushLeftBubble;
-(void)pushRightBubble;
-(void)updatePlayerStatus;
-(CGSize)intrinsicContentSize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end