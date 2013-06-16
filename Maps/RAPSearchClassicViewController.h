/* RAPSearchClassicViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ReportAProblemReporter.h"
#import "Maps-Structs.h"

@class ReportAProblemNavigationController, ReportAProblemCommentsViewController, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RAPSearchClassicViewController : XXUnknownSuperclass <ReportAProblemReporter> {
	NSMutableArray* _problemItems;
	NSMutableArray* _searchHistory;
	ReportAProblemCommentsViewController* _commentsViewController;
}
@property(readonly, assign, nonatomic) ReportAProblemNavigationController* navigationController;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)populateRPProblem:(id)problem;
-(void)populateProblem:(id)problem;
-(void)cancel:(id)cancel;
-(void)next:(id)next;
-(void)viewWillAppear:(BOOL)view;
-(void)updateEnabledState;
-(BOOL)canReportProblem;
-(unsigned)supportedInterfaceOrientations;
-(void)dealloc;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(id)initWithStyle:(int)style;
-(id)init;
@end