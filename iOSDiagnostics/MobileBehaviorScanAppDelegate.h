/* MobileBehaviorScanAppDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UINavigationController, NSString, MainViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface MobileBehaviorScanAppDelegate : XXUnknownSuperclass {
	UIWindow* window;
	UINavigationController* navigationController;
	MainViewController* mainViewController;
	NSString* launchingApp;
}
@property(retain, nonatomic) MainViewController* mainViewController;
@property(retain, nonatomic) UINavigationController* navigationController;
@property(retain, nonatomic) UIWindow* window;
@property(retain) NSString* launchingApp;
-(void)dealloc;
-(void)closeApplication;
-(void)applicationWillTerminate:(id)application;
-(BOOL)application:(id)application didFinishLaunchingWithOptions:(id)options;
@end
