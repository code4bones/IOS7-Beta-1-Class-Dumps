/* ADSActionViewControllerManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ADSActionViewControllerManager : XXUnknownSuperclass {
	NSMutableDictionary* _pendingAdSpaceControllers;
}
@property(retain, nonatomic) NSMutableDictionary* pendingAdSpaceControllers;
+(id)sharedManager;
-(void)_cancelRequestForActionViewControllerForAdSpaceController:(id)adSpaceController;
-(void)_actionViewController:(id)controller readyForControllerIdentifier:(id)controllerIdentifier;
-(void)_requestActionViewControllerForAdSpaceController:(id)adSpaceController;
-(void)_checkForTimedOutRequests;
-(id)init;
@end
