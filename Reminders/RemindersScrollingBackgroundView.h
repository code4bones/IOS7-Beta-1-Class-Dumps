/* RemindersScrollingBackgroundView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Reminders-Structs.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface RemindersScrollingBackgroundView : XXUnknownSuperclass {
	UIImage* _textureImage;
}
@property(retain) UIImage* textureImage;
+(id)kitPaperTextureImage;
-(void).cxx_destruct;
-(void)setContentOffset:(CGPoint)offset;
-(void)resizeForRect:(CGRect)rect;
-(void)drawRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame;
@end
