/* AXCaptionColorController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AXCaptionStyleChooserController.h"
#import "AccessibilitySettings-Structs.h"


__attribute__((visibility("hidden")))
@interface AXCaptionColorController : AXCaptionStyleChooserController {
}
-(id)_videoOverrideText;
-(void)_setVideoOverridesStyle:(id)style specifier:(id)specifier;
-(id)_videoOverridesStyle:(id)style;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)specifiers;
-(int)colorType;
@end
