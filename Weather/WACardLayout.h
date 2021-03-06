/* WACardLayout.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;
@protocol WACardLayoutDelegate;

__attribute__((visibility("hidden")))
@interface WACardLayout : XXUnknownSuperclass {
	unsigned _numOfItems;
	CGSize _contentSize;
	CGSize _itemSize;
	CGRect* _itemFrames;
	NSMutableArray* _visibleAttributes;
	NSMutableDictionary* _cachedAttributes;
	id<WACardLayoutDelegate> _layoutDelegate;
	CGSize _footerReferenceSize;
}
@property(assign, nonatomic) id<WACardLayoutDelegate> layoutDelegate;
@property(assign, nonatomic) CGSize footerReferenceSize;
-(id)description;
-(id)layoutAttributesForElementsInRect:(CGRect)rect;
-(int)targetIndexForProposedStartIndex:(int)proposedStartIndex inRect:(CGRect)rect;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)indexPath;
-(id)layoutAttributesForItemAtIndexPath:(id)indexPath;
-(CGRect)frameForItem:(int)item;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)collectionView;
-(void)dealloc;
-(id)init;
@end
