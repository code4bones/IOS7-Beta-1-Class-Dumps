/* MailboxListViewControllerMail.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MailboxListViewControllerBase.h"
#import "MailboxEditingControllerDelegate.h"
#import "MobileMail-Structs.h"

@class NSMutableSet, MailboxContentViewController, NSArray;
@protocol MailboxListViewControllerMailDelegate;

__attribute__((visibility("hidden")))
@interface MailboxListViewControllerMail : MailboxListViewControllerBase <MailboxEditingControllerDelegate> {
	unsigned _showsDisclosure : 1;
	unsigned _hideInbox : 1;
	NSMutableSet* _disabledMailboxes;
	NSMutableSet* _disabledMailboxTypes;
	NSArray* _defaultToolbarItems;
	NSArray* _editingToolbarItems;
	MailboxContentViewController* _mailboxContentViewController;
	double _lastCheckedOutbox;
	BOOL _queuedOutboxCheck;
	id<MailboxListViewControllerMailDelegate> _mlvcmDelegate;
	BOOL _viewIsVisible;
	BOOL _alignAccessories;
	BOOL _showRefreshControl;
	BOOL _isRefreshing;
	unsigned _selectedSourceType;
}
@property(assign, nonatomic) BOOL isRefreshing;
@property(assign, nonatomic) unsigned selectedSourceType;
+(int)tableViewStyle;
-(int)propagateChangeDownwards:(id)downwards;
-(BOOL)shouldHideNotesForAccount:(id)account;
-(BOOL)shouldHideInbox;
-(void)shouldReloadMailboxesWithOutbox:(id)outbox;
-(id)_ntsMailboxesForAccount:(id)account;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)_defaultRowHeight;
-(void)contentSizeCategoryChanged:(id)changed;
-(void)pendingMailboxesChanged:(id)changed;
-(void)mailAccountsChanged:(id)changed;
-(void)accountDisplayNameChanged:(id)changed;
-(void)messageStoreChanged:(id)changed;
-(void)_queueReloadIfOutboxChanged:(id)changed;
-(void)_reloadIfOutboxChanged:(id)changed;
-(void)setHideInbox:(BOOL)inbox;
-(void)enableMailboxTypes:(id)types;
-(void)disableMailboxTypes:(id)types;
-(void)disableMailboxes:(id)mailboxes;
-(void)setShowsRefreshControl:(BOOL)control;
-(void)setShowsDisclosure:(BOOL)disclosure;
-(id)cellForMailbox:(id)mailbox;
-(CGRect)rectOfMailbox:(id)mailbox;
-(id)indexPathForSelection;
-(void)showMailboxEditingControllerWithMailbox:(id)mailbox;
-(void)mailboxEditingControllerDidFinish:(id)mailboxEditingController;
-(void)didSelectMailbox:(id)mailbox changed:(BOOL)changed animated:(BOOL)animated;
-(id)topMailboxContentViewController;
-(id)mailboxContentViewController;
-(id)indexPathForMailbox:(id)mailbox;
-(id)mailboxForIndexPath:(id)indexPath;
-(void)newMailboxClicked:(id)clicked;
-(void)dealloc;
-(void)applicationWillSuspend;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillReappear:(BOOL)view;
-(void)viewWillFirstAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)pulledToRefresh:(id)refresh;
-(void)statusBarProgressDidChange:(id)statusBarProgress;
-(void)updateIsRefreshing;
-(void)setAccount:(id)account;
-(void)updateTitle;
-(void)setMailboxListDelegate:(id)delegate;
-(void)clearAccount;
-(BOOL)shouldAutorotate;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(id)init;
@end