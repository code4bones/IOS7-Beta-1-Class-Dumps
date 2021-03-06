/* SBSoftwareUpdateUnableToInstallAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateAlertItem {
	NSError* _error;
}
@property(retain, nonatomic) NSError* error;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)shouldShowInLockScreen;
-(BOOL)undimsScreen;
-(BOOL)reappearsAfterLock;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)buildDefaultSheetWithBody:(id)body isLocked:(BOOL)locked;
-(void)buildUnavailableSheet;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
@end
