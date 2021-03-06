/* RemindersSearchListController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UISearchBarDelegate.h"
#import "Reminders-Structs.h"
#import "RemindersStandardListController.h"

@class EKEventStore, NSMutableArray, RemindersSearchViewController, UILabel, NSString;

__attribute__((visibility("hidden")))
@interface RemindersSearchListController : RemindersStandardListController <UISearchBarDelegate> {
	EKEventStore* _eventStore;
	NSMutableArray* _incompleteSearchResults;
	NSMutableArray* _completedSearchResults;
	id _lastReminderFetch;
	NSString* _lastSearchQuery;
	UILabel* _noResultsLabel;
	RemindersSearchViewController* _searchViewController;
}
@property(assign, nonatomic) __weak RemindersSearchViewController* searchViewController;
-(void).cxx_destruct;
-(void)_setNoResultsLabelEnabled:(BOOL)enabled;
-(void)performSearchWithText:(id)text;
-(void)_cancelLastFetch;
-(void)_refreshSearchResultsWithItems:(id)items;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)setCellProperties:(id)properties fromReminder:(id)reminder ignoringTitle:(BOOL)title;
-(void)checkboxTappedForCell:(id)cell;
-(id)indexPathForNewReminderInSection:(int)section;
-(BOOL)canAccessPropertiesOfReminderAtIndexPath:(id)indexPath;
-(BOOL)hasReminderAtIndexPath:(id)indexPath;
-(id)reminderAtIndexPath:(id)indexPath;
-(BOOL)displaysCalendarNameInCells;
-(BOOL)isDisplayingCompleted;
-(BOOL)hasNoDataYet;
-(void)setHighlightedReminder:(id)reminder;
-(void)viewDidLoad;
-(id)initWithEventStore:(id)eventStore;
@end
