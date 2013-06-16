/* VOTElementFetcher.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VOTElement, NSLock, NSMutableArray, SCRCThread;
@protocol VOTElementFetchDelegateProtocol;

__attribute__((visibility("hidden")))
@interface VOTElementFetcher : XXUnknownSuperclass {
	SCRCThread* _fillerThread;
	id _delegate;
	NSLock* _cacheLock;
	NSMutableArray* _elementCache;
	VOTElement* _currentElement;
	BOOL _shouldCancelSearch;
	BOOL _shouldCancelCount;
	int _cacheSize;
	int _cacheBufferEdge;
	BOOL _retrievingAllElements;
}
@property(assign, nonatomic) id<VOTElementFetchDelegateProtocol> delegate;
-(id)_debugElementCache;
-(void)retrieveElementsWithElement:(id)element;
-(void)_retrieveElementsWithElement:(id)element;
-(void)_retrieveAllElements;
-(void)_informDelegateOfRetrieveElements;
-(void)searchForElementInDirection:(int)direction fromElement:(id)element matchBlock:(id)block opaqueMatchTraits:(unsigned long long)traits;
-(void)searchForElementInDirection:(int)direction fromElement:(id)element needsForceCacheUpdate:(BOOL)update matchBlock:(id)block opaqueMatchTraits:(unsigned long long)traits;
-(void)countElementsMatchingBlock:(id)block;
-(void)cancelPreviousSearch;
-(void)_searchForElementInDirection:(id)direction fromElement:(id)element needsForceCacheUpdate:(id)update matchBlock:(id)block opaqueMatchTraits:(id)traits;
-(id)_handleOpaqueSearchForElementInDirection:(id)direction opaqueParent:(id)parent fromElement:(id)element searchTraits:(unsigned long long)traits;
-(void)_countElementsMatchingBlock:(id)block;
-(void)cancelPreviousCount;
-(void)forceUpdate;
-(void)_forceUpdate;
-(void)updateCacheWithElement:(id)element;
-(void)_updateCacheWithElement:(id)element;
-(void)dealloc;
-(id)init;
@end