/* MessageContentAreaLayer.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "MobileMail-Structs.h"
#import "DelayedScroller.h"

@class MFMessageViewingContext, NSTimer, MFActivityMonitor, UIView, MessageContentProgressLayer, MessageContentLayer;
@protocol MFAttachmentHandlingDelegate, MFMessageContentDisplayDelegate;

__attribute__((visibility("hidden")))
@interface MessageContentAreaLayer : DelayedScroller <UIScrollViewDelegate, UIActionSheetDelegate> {
	MFMessageViewingContext* _context;
	MessageContentLayer* _contentLayer;
	unsigned _suspendDisplayChanges : 1;
	MessageContentProgressLayer* _progressLayer;
	UIView* _partialLoadTransitionBackgroundView;
	NSTimer* _loadUpdateTimer;
	MFActivityMonitor* _loadTask;
	id<MFAttachmentHandlingDelegate> _attachmentHandlingDelegate;
	CGPoint _preservedOffset;
	CGSize _minimumContentSize;
	float _zoomScaleBeforeLoadingFullMessage;
	int _displayStyle;
	BOOL _shouldResetContentOffset;
	BOOL _sourceIsManaged;
	id<MFMessageContentDisplayDelegate> _displayDelegate;
}
@property(assign, nonatomic) BOOL sourceIsManaged;
@property(assign, nonatomic) id<MFMessageContentDisplayDelegate> displayDelegate;
@property(assign, nonatomic) id<MFAttachmentHandlingDelegate> attachmentHandlingDelegate;
-(BOOL)isCancelled;
-(void)updateContentOffsetIfNecessary;
-(void)resetContentInset;
-(void)updateTextSize;
-(void)didRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)scrollViewDidScrollToTop:(id)scrollView;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(CGSize)scrollView:(id)view contentSizeForZoomScale:(float)zoomScale withProposedSize:(CGSize)proposedSize;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)dealloc;
-(void)_loadCompleted:(id)completed;
-(void)_addProgressUI;
-(void)moveProgressLayer:(float)layer;
-(void)_repositionLoadingLayer;
-(CGPoint)_originForProgress;
-(void)_setShouldResetContentOffset;
-(void)setContentOffset:(CGPoint)offset;
-(void)_setContentOffset:(CGPoint)offset force:(BOOL)force;
-(void)_tryToRestorePreservedOffset;
-(CGPoint)_maximumOffsetWithinContentSize;
-(BOOL)_isPreservingOffset;
-(void)setFrame:(CGRect)frame;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)removeFromSuperview;
-(void)suspendDisplayChanges:(BOOL)changes;
-(id)contentView;
-(void)setContentSize:(CGSize)size;
-(id)displayDelegateForMessageContentLayer:(id)messageContentLayer;
-(id)attachmentHandlingDelegateForMessageContentLayer:(id)messageContentLayer;
-(void)messageContentLayerWillLoadMoreOfCurrentMessage:(id)messageContentLayer;
-(void)messageContentLayerDidUpdateSize:(id)messageContentLayer;
-(void)messageContentLayerDidChangeSize:(id)messageContentLayer;
-(void)messageContentLayerDidFirstVisuallyNonEmptyDraw:(id)messageContentLayer;
-(void)messageContentLayerDidDraw:(id)messageContentLayer;
-(void)messageContentLayerMainLoadCompleted:(id)completed;
-(void)messageContentLayerDidLoad:(id)messageContentLayer;
-(void)viewingContextFinishedLoading:(id)loading;
-(void)showDelayedProgressUI;
-(void)viewingContextWillBeginLoading:(id)viewingContext;
-(id)selectedText;
-(void)updateForRedisplay;
-(id)context;
-(void)displayMessage:(id)message withStyle:(int)style;
-(void)clearMessage;
-(BOOL)usePadDisplayStyle;
-(id)initWithFrame:(CGRect)frame;
@end
