/* SBLegacySIMLockPUKEntryAlertDisplay.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLegacySIMLockEntryAlertDisplay.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBLegacySIMLockPUKEntryAlertDisplay : SBLegacySIMLockEntryAlertDisplay {
	int _state;
	NSString* _enteredPUKCode;
	NSString* _newPIN;
}
-(void)unlock;
-(void)_attemptPUKUnlock;
-(id)label;
-(void)setupFailureState;
-(id)titleText;
-(void)setupSuccess;
-(id)_pukAttemptsRemainingLabel;
-(void)dealloc;
@end
