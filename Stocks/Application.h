/* Application.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Stocks-Structs.h"
#import "UIApplicationDelegate.h"

@class StocksController, UIWindow, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface Application : XXUnknownSuperclass <UIApplicationDelegate> {
	BOOL _isLocked;
	BOOL _isLocaleValid;
	NSString* _testName;
	int _testIterationCount;
	StocksController* _controller;
	id _backgroundFetchCompletion;
	NSTimer* _backgroundFetchTimer;
}
@property(retain, nonatomic) UIWindow* window;
@property(retain, nonatomic) NSTimer* backgroundFetchTimer;
@property(copy, nonatomic) id backgroundFetchCompletion;
-(void).cxx_destruct;
-(BOOL)runTest:(id)test options:(id)options;
-(void)finishedExtendedLaunchTask:(int)task;
-(id)_extendLaunchTest;
-(BOOL)shouldRecordExtendedLaunchTime;
-(void)pptTest_scrollStocks:(id)stocks;
-(void)pptTest_flipWidget;
-(void)_didFlipWidget:(id)widget;
-(void)pptTest_swipeDetailPortrait:(BOOL)portrait;
-(void)pptTest_rotation;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)prepareForDefaultImageSnapshotForScreen:(id)screen;
-(void)resetLocale;
-(BOOL)isLocaleEnglish;
-(void)backgroundFetchTimedOut:(id)anOut;
-(void)application:(id)application performFetchWithCompletionHandler:(id)completionHandler;
-(BOOL)application:(id)application openURL:(id)url sourceApplication:(id)application3 annotation:(id)annotation;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillTerminate:(id)application;
-(void)applicationDidFinishLaunching:(id)application;
@end