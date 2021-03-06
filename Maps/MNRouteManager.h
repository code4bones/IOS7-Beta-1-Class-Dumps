/* MNRouteManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "MNETAManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOWaypointSearchResultRequest, MNTraceRecorder, GEOMapRegion, GEODirectionsRouteRequest, GEODirectionsFeedbackCollector, GEORoute, NSData, MNETAManager, MNRouteSet, RoutePreloadSession, MNTracePlayer;
@protocol MNRouteManagerTestingDelegate, MNRouteManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNRouteManager : XXUnknownSuperclass <MNETAManagerDelegate> {
	GEODirectionsRouteRequest* _request;
	GEOWaypointSearchResultRequest* _origin;
	GEOWaypointSearchResultRequest* _destination;
	int _desiredTransportType;
	GEOMapRegion* _mapRegion;
	MNRouteSet* _activeRouteSet;
	int _routeState;
	id<MNRouteManagerDelegate> _delegate;
	MNTraceRecorder* _traceRecorder;
	MNTracePlayer* _tracePlayer;
	RoutePreloadSession* _routePreloadSession;
	MNETAManager* _etaManager;
	NSData* _prevRouteID;
	unsigned _prevStepIndex;
	GEODirectionsFeedbackCollector* _feedbackCollector;
	double _lastRereouteTime;
	GEORoute* _userSelectedRoute;
	BOOL _fromCurrentLocation;
	BOOL _preloadRoutes;
}
@property(readonly, assign, nonatomic) id<MNRouteManagerTestingDelegate> testingDelegate;
@property(retain, nonatomic) GEORoute* userSelectedRoute;
@property(retain, nonatomic) NSData* prevRouteID;
@property(assign, nonatomic) GEORoute* currentRoute;
@property(retain, nonatomic) GEODirectionsRouteRequest* request;
@property(retain, nonatomic) MNTracePlayer* tracePlayer;
@property(retain, nonatomic) MNTraceRecorder* traceRecorder;
@property(readonly, assign, nonatomic) RoutePreloadSession* routePreloadSession;
@property(assign, nonatomic) id<MNRouteManagerDelegate> delegate;
@property(readonly, assign, nonatomic) int currentRouteTransportType;
@property(readonly, assign, nonatomic) int desiredTransportType;
@property(retain, nonatomic) GEOWaypointSearchResultRequest* destination;
@property(retain, nonatomic) GEOWaypointSearchResultRequest* origin;
@property(assign, nonatomic) int routeState;
@property(retain, nonatomic) MNRouteSet* activeRouteSet;
+(id)defaultRouteAttributesForNavigation;
+(id)defaultRouteAttributes;
-(void)etaManager:(id)manager receivedETAResponseWithETARoute:(id)etaroute etaBehavior:(int)behavior routeRemainingDistance:(double)distance routeRemainingTime:(unsigned)time;
-(void)etaManager:(id)manager recommendsNewRoute:(id)route oldEstimatedTime:(unsigned)time newEstimatedTime:(unsigned)time4;
-(void)etaManager:(id)manager forceSwitchToNewRoute:(id)newRoute;
-(void)etaManagerUpdatedETATime:(id)time;
-(BOOL)_requestDirectionsFromTracePlayer:(id)tracePlayer finishedHandler:(id)handler errorHandler:(id)handler3;
-(void)forceReroutingWithRouteResponse:(id)routeResponse request:(id)request;
-(void)selectRouteAtIndex:(unsigned)index;
-(void)_handleRequesterError:(id)error problemDetails:(XXStruct_hSSemD*)details;
-(void)resetToNewRoute:(id)newRoute;
-(void)_handleRequesterResponse:(id)response routeAttributes:(id)attributes retrievedFromTrace:(BOOL)trace;
-(void)startNavETAOverviewRequests;
-(void)startNavETAUpdateRequests;
-(void)stopNavETAUpdateRequests;
-(void)switchToNewRouteIfNecessaryFrom:(id)from transportType:(int)type;
-(void)_switchToContingentRoute:(id)contingentRoute atLocation:(id)location routeCoordinate:(XXStruct_lRyTTC)coordinate onRoute:(BOOL)route;
-(void)reset;
-(void)cancelRoute;
-(void)cancelRecalculation;
-(BOOL)recalculateRouteFrom:(id)from stepIndex:(unsigned)index forceRepeatedRecalc:(BOOL)recalc transportType:(int)type;
-(BOOL)findContingentRouteFrom:(id)from transportType:(int)type;
-(void)loadMaxRoutes:(unsigned)routes errorHandler:(id)handler recordTrace:(BOOL)trace;
-(void)_getNewDirectionsMaxRouteCount:(unsigned)count from:(id)from originalRouteID:(id)anId originalRouteZilchPoints:(id)points type:(int)type includeAlternateTransportTypes:(BOOL)types;
-(BOOL)_destinationShortEnoughForWalkingFromWaypoint:(id)waypoint;
-(BOOL)_destinationTooLongForWalkingFromWayPoint:(id)wayPoint;
-(double)_straightLineDistanceToDestinationFromWaypoint:(id)waypoint;
-(void)_updateRoutePreloading;
-(void)sendRouteFeedback;
-(void)updateLocation:(id)location;
-(void)recordCurrentRoute;
-(void)markCurrentRoute;
-(void)_clearETAManager;
-(void)dealloc;
-(id)initWithDirectionsFrom:(id)from to:(id)to mapRegion:(id)region type:(int)type fromCurrentLocation:(BOOL)currentLocation preloadRoutes:(BOOL)routes;
@end
