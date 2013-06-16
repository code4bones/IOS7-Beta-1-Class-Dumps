/* RootViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FocusedTableViewController.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface RootViewController : FocusedTableViewController {
	BOOL _rowEnabled[13];
	UIView* noContentView;
}
@property(retain, nonatomic) UIView* noContentView;
-(void).cxx_destruct;
-(id)_getNoContentView;
-(int)restoreWithPathComponent:(id)pathComponent;
-(void)writeCurrentPositionIntoNavigationPathComponent:(id)component;
-(int)rowWithIdentifier:(unsigned long long)identifier;
-(void)_setNowPlayingRowVisible:(BOOL)visible;
-(void)_nowPlayingPIDChanged;
-(int)_logicalRowFromPhysicalRow:(unsigned)physicalRow;
-(void)reloadData;
-(void)selectAction:(BOOL)action transition:(int)transition;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(unsigned)minimumRowHeight;
-(id)statusBarTitle;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
@end