/* DDEventEditViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EKEventEditViewDelegate.h"
#import "DDRemoteActionViewControllerConfiguration.h"

@class XPCProxy, DDAction;
@protocol DDRemoteActionPresenter;

@interface DDEventEditViewController : XXUnknownSuperclass <EKEventEditViewDelegate, DDRemoteActionViewControllerConfiguration> {
	XPCProxy<DDRemoteActionPresenter>* _proxy;
	DDAction* _action;
}
@property(retain) DDAction* action;
@property(retain) XPCProxy<DDRemoteActionPresenter>* proxy;
-(void)eventEditViewController:(id)controller didCompleteWithAction:(int)action;
-(void)prepareForAction:(id)action;
-(void)dealloc;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)_willAppearInRemoteViewController:(id)remoteViewController;
@end