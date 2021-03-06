/* CommerceRemoteUIDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "RUIObjectModelDelegate.h"
#import "ISStoreURLOperationDelegate.h"

@class UINavigationController, NSOperationQueue, NSMutableArray, UIAlertView, UIViewController, ISDialog;
@protocol DelayedPushDelegate;

__attribute__((visibility("hidden")))
@interface CommerceRemoteUIDelegate : XXUnknownSuperclass <ISStoreURLOperationDelegate, RUIObjectModelDelegate> {
	UINavigationController* _navigationController;
	UINavigationController* _parentNavigationController;
	UIViewController* _topViewController;
	BOOL _modallyPresented;
	NSMutableArray* _objectModels;
	NSOperationQueue* _queue;
	UIAlertView* _errorAlert;
	UIAlertView* _dialogAlert;
	ISDialog* _dialog;
	BOOL _registeredDialogNotification;
	BOOL _registeredAuthNotification;
	BOOL _preventPresentation;
	id<DelayedPushDelegate> _delegate;
}
@property(assign, nonatomic) BOOL preventPresentation;
@property(assign, nonatomic) id<DelayedPushDelegate> delegate;
-(void)dealloc;
-(id)initWithNavigationController:(id)navigationController needsModalPresentation:(BOOL)presentation;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)handleDialog:(id)dialog;
-(void)objectModel:(id)model pressedLink:(id)link httpMethod:(id)method;
-(void)objectModel:(id)model pressedButton:(id)button attributes:(id)attributes;
-(void)objectModelPressedBack:(id)back;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)objectModel page:(id)page;
-(void)_popObjectModelAnimated:(BOOL)animated;
-(id)parentViewControllerForObjectModel:(id)objectModel;
-(void)processLink:(id)link forceAuth:(BOOL)auth needsAuth:(BOOL)auth3 localAuth:(BOOL)auth4;
-(void)processLink:(id)link forceAuth:(BOOL)auth needsAuth:(BOOL)auth3;
-(void)processLink:(id)link forceAuth:(BOOL)auth;
-(void)makeBuyRequest:(id)request forceAuth:(BOOL)auth;
-(void)cancelRemoteUI;
-(void)loadURLforKey:(id)key;
-(void)pushSpinner;
-(void)cleanupLoader;
-(void)unregisterAuthNotification;
-(void)errorWithTitle:(id)title andExplanation:(id)explanation;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)operation:(id)operation finishedWithOutput:(id)output;
@end
