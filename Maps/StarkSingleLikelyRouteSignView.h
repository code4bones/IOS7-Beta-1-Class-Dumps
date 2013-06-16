/* StarkSingleLikelyRouteSignView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, NSString, NSDate;

__attribute__((visibility("hidden")))
@interface StarkSingleLikelyRouteSignView : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _timeLabel;
	UILabel* _timeSubtitleLabel;
	NSString* _title;
	NSDate* _arrivalDate;
	int _interactionModel;
}
@property(assign, nonatomic) int interactionModel;
@property(copy, nonatomic) NSDate* arrivalDate;
@property(copy, nonatomic) NSString* title;
-(id)_attributedTimeText;
-(id)_attributedTimeTextLargeFont;
-(id)_attributedTimeTextSmallFont;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end