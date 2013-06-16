/* MNDirectionsSessionUIDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MNDirectionsSessionUIDelegate <NSObject>
-(void)directionsSessionRecommendsNewRoute:(id)route oldEstimatedTime:(unsigned)time newEstimatedTime:(unsigned)time3 finished:(id)finished;
-(void)directionsSessionUpdatedETA:(id)eta;
-(void)directionsSession:(id)session failedWithErrorCode:(int)errorCode;
-(void)directionsSession:(id)session didChangeRoutePreloadSession:(id)session2;
-(void)directionsSession:(id)session didSwitchToNewRoute:(id)newRoute;
-(void)directionsSessionDidCancelRoute:(id)directionsSession;
-(void)directionsSession:(id)session didRecalculateNewRoute:(id)route;
-(void)directionsSessionWillRecalculateRoute:(id)directionsSession;
-(void)directionsSessionDidFailToReceiveRoute:(id)directionsSession errorCode:(int)code;
-(void)directionsSession:(id)session didReceiveRouteSet:(id)set;
-(void)directionsSessionWillRequestRoute:(id)directionsSession traceRecorderFailed:(BOOL)failed;
@end