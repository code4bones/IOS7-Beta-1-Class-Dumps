/* DirectionsStartEndTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, DirectionsStartEndPinView;

__attribute__((visibility("hidden")))
@interface DirectionsStartEndTableViewCell : XXUnknownSuperclass {
	UILabel* _overviewLabel;
	DirectionsStartEndPinView* _circleView;
	BOOL _isDimmedStep;
	BOOL _isNightMode;
}
@property(assign, nonatomic) BOOL isNightMode;
+(id)reuseIdentifier;
-(void)setIsDimmedStep:(BOOL)step;
-(void)layoutSubviews;
-(CGRect)_stepRect;
-(void)setEndCell:(BOOL)cell;
-(void)setDirectionsText:(id)text;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end