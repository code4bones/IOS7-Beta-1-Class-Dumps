/* ServiceStorePageViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SKUIStorePageDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SKUIClientContext, SKUIStorePageViewController, SSURLBag;

__attribute__((visibility("hidden")))
@interface ServiceStorePageViewController : XXUnknownSuperclass <SKUIStorePageDelegate> {
	SKUIClientContext* _clientContext;
	BOOL _isEntitled;
	SKUIStorePageViewController* _storePageViewController;
	SSURLBag* _urlBag;
}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(id)_storePageViewController;
-(void)_finishLoadWithResult:(BOOL)result error:(id)error;
-(id)_clientViewControllerProxy;
-(void)storePage:(id)page showStorePageForURL:(id)url;
-(void)storePage:(id)page showProductPageForItem:(id)item;
-(void)loadPageWithURL:(id)url;
-(void)loadPageWithURLBagKey:(id)urlbagKey;
-(void)_willAppearInRemoteViewController;
-(void)loadView;
-(void)dealloc;
@end
