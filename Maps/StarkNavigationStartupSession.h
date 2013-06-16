/* StarkNavigationStartupSession.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "DirectionsManagerObserver.h"

@class DirectionsWaypoint;
@protocol StarkNavigationStartupDelegate;

__attribute__((visibility("hidden")))
@interface StarkNavigationStartupSession : XXUnknownSuperclass <DirectionsManagerObserver> {
	BOOL _started;
	BOOL _ended;
	DirectionsWaypoint* _destination;
	id<StarkNavigationStartupDelegate> _delegate;
}
@property(assign, nonatomic) id<StarkNavigationStartupDelegate> delegate;
+(id)sessionWithSearchResultDestination:(id)searchResultDestination;
+(id)sessionWithAddressDestination:(id)addressDestination;
+(id)_runningSessions;
+(void)_removeSessionFromRunningSessions:(id)runningSessions;
+(void)_addSessionToRunningSessions:(id)runningSessions;
+(id)sessionWithHistoryItemDestination:(id)historyItemDestination;
-(void)directionsManagerDidFailToLoad:(id)directionsManager withError:(id)error;
-(void)directionsManagerDidCancelLoad:(id)directionsManager;
-(void)directionsManagerDidStartLoad:(id)directionsManager;
-(void)directionsManager:(id)manager didLoadRoute:(id)route;
-(void)_end;
-(void)cancel;
-(void)start;
-(void)dealloc;
-(id)initWithDestinationWaypoint:(id)destinationWaypoint;
@end