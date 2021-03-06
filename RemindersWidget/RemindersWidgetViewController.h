/* RemindersWidgetViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "RemindersWidget-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "RemindersCheckboxCell.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, EKEventStore, UITableView;

@interface RemindersWidgetViewController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, RemindersCheckboxCell> {
	NSMutableArray* _reminders;
	EKEventStore* _eventStore;
	UITableView* _table;
	CGSize _preferredViewSize;
}
-(void).cxx_destruct;
-(id)locationStringForReminder:(id)reminder;
-(id)dueDateStringForReminder:(id)reminder;
-(void)checkboxCellDidTapCheckbox:(id)checkboxCell;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)heightForReminder:(id)reminder;
-(CGSize)preferredViewSize;
-(void)_recalculatePreferredViewSize;
-(float)_calculatePreferredHeight;
-(void)reloadReminders;
-(void)_significantTimeChange:(id)change;
-(void)eventStoreChanged;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(id)init;
@end
