/* ASNearMeOptInView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AppStore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UILabel, UIControl, UIImageView;

__attribute__((visibility("hidden")))
@interface ASNearMeOptInView : XXUnknownSuperclass {
	UILabel* _disclaimerLabel;
	UILabel* _featureDescriptionLabel;
	UIImageView* _logoImageView;
	UIButton* _turnOnNearMeButton;
}
@property(readonly, assign, nonatomic) UIControl* turnOnNearMeButton;
-(void).cxx_destruct;
-(void)setBackgroundColor:(id)color;
-(void)layoutSubviews;
-(void)setTurnOnNearMeButtonTitle:(id)title;
-(void)setFeatureDescription:(id)description;
-(void)setDisclaimerText:(id)text;
-(id)initWithFrame:(CGRect)frame;
@end