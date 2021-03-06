/* MFArrowControlsView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;
@protocol MFArrowControlsViewDelegate;

__attribute__((visibility("hidden")))
@interface MFArrowControlsView : XXUnknownSuperclass {
	UIButton* _upButton;
	UIButton* _downButton;
	id<MFArrowControlsViewDelegate> _delegate;
	int _interfaceOrientation;
}
@property(assign, nonatomic) int interfaceOrientation;
@property(readonly, assign, nonatomic) UIButton* upButton;
@property(readonly, assign, nonatomic) UIButton* downButton;
@property(assign, nonatomic) id<MFArrowControlsViewDelegate> delegate;
+(float)defaultWidthForOrientation:(int)orientation;
+(float)defaultHeightForOrientation:(int)orientation;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)_arrowButtonWasTapped:(id)tapped;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
