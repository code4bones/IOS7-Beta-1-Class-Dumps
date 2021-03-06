/* HearingAidTextSpinnerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilitySettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, PSSpecifier, UILabel;

__attribute__((visibility("hidden")))
@interface HearingAidTextSpinnerView : XXUnknownSuperclass {
@private
	UILabel* _text;
	UIActivityIndicatorView* _spinner;
	PSSpecifier* specifier;
}
@property(retain, nonatomic) PSSpecifier* specifier;
-(void)layoutSubviews;
-(CGSize)textSizeForWidth:(float)width;
-(void)hideSpinner;
-(void)showSpinner;
-(float)preferredHeightForWidth:(float)width;
-(void)dealloc;
-(id)initWithSpecifier:(id)specifier;
@end
