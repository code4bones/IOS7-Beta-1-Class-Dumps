/* VideosRootViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITabBarControllerDelegate.h"

@class NSArray, UITabBarController, UINavigationController, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface VideosRootViewController : XXUnknownSuperclass <UITabBarControllerDelegate> {
	UITabBarController* _portraitViewController;
	NSArray* _tabIdentifiers;
	UINavigationController* _singleTabController;
	_UIContentUnavailableView* _noContentView;
}
-(void).cxx_destruct;
-(id)_orderedIdentifiers;
-(void)_reloadTabs;
-(id)_navigationControllerForViewControllerIdentifier:(id)viewControllerIdentifier;
-(id)_navigationControllerForIdentifier:(id)identifier;
-(id)_identifierForNavigationIdentifier:(id)navigationIdentifier;
-(id)_navigationIdentifierForIdentifier:(id)identifier;
-(id)_wrappedViewControllerForIdentifier:(id)identifier;
-(void)_availableMediaLibrariesDidChangeNotification:(id)_availableMediaLibraries;
-(void)_mediaLibraryContentDidChangeNotification:(id)_mediaLibraryContent;
-(void)_defaultMediaLibraryDidChangeNotification:(id)_defaultMediaLibrary;
-(void)decodeRestorableStateWithCoder:(id)coder;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)tabBarController:(id)controller didEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
-(BOOL)handleOpenURLForItem:(id)item;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidLoad;
-(unsigned)supportedInterfaceOrientations;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
