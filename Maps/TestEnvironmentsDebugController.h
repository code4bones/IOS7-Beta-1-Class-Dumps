/* TestEnvironmentsDebugController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AuxiliaryDebugViewController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface TestEnvironmentsDebugController : AuxiliaryDebugViewController {
	NSArray* _environments;
	NSArray* _environmentNames;
	BOOL isLoadedFromServer;
}
@property(retain, nonatomic) NSArray* environmentNames;
@property(retain, nonatomic) NSArray* environments;
+(id)navigationDestinationTitle;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)_resetDefaultsFromCurrentEnvironment;
-(void)_loadEnvironmentsIfNeeded;
-(void)_loadEnvironmentsFromDictionary:(id)dictionary;
-(void)dealloc;
@end
