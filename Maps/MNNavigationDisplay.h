/* MNNavigationDisplay.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "MKWorldViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UserLocationView, GEOStep, VKAttributedRouteMatch, MNLocation, MKWorldView, MNCameraController, NSMutableArray, MNCircleAnnotation;
@protocol MNNavigationDisplayDelegate, MKAnnotation;

__attribute__((visibility("hidden")))
@interface MNNavigationDisplay : XXUnknownSuperclass <MKWorldViewDelegate> {
	id<MNNavigationDisplayDelegate> _delegate;
	MKWorldView* _worldView;
	MNCameraController* _cameraController;
	int _desiredMapMode;
	UserLocationView* _userLocationAnnotationView;
	id<MKAnnotation> _destinationAnnotation;
	NSMutableArray* _userLocationHistory;
	NSMutableArray* _rawUserLocationHistory;
	NSMutableArray* _matchedUserLocationHistory;
	GEOStep* _currentAnnotatedStep;
	MNCircleAnnotation* _maneuverStartAnnotation;
	MNCircleAnnotation* _maneuverEndAnnotation;
	MNCircleAnnotation* _maneuverFirstAnnounceAnnotation;
	NSMutableArray* _maneuverSubstepAnnotations;
	int _previousMainLoopRate;
	int _originalMainLoopRate;
	int _sky;
	MNLocation* _matchedLocation;
	BOOL _onRoute;
	BOOL _pouncing;
}
@property(retain, nonatomic) MNLocation* matchedLocation;
@property(retain, nonatomic) id<MKAnnotation> destinationAnnotation;
@property(readonly, assign, nonatomic) VKAttributedRouteMatch* currentRouteMatch;
@property(assign, nonatomic) double zoomScale;
@property(assign, nonatomic) int sky;
@property(assign, nonatomic) double userZoom;
@property(assign, nonatomic) int desiredMapMode;
@property(assign, nonatomic) BOOL onRoute;
@property(retain, nonatomic) UserLocationView* userLocationAnnotationView;
@property(retain, nonatomic) MKWorldView* worldView;
@property(assign, nonatomic) id<MNNavigationDisplayDelegate> delegate;
-(void)setTracePlaybackSpeedMultiplier:(double)multiplier;
-(id)worldView:(id)view painterForOverlay:(id)overlay;
-(void)worldView:(id)view didBecomePitched:(BOOL)pitched;
-(void)worldView:(id)view didChangeUserTrackingMode:(int)mode animated:(BOOL)animated fromTrackingButton:(BOOL)trackingButton;
-(id)worldView:(id)view viewForAnnotation:(id)annotation;
-(void)worldViewDidStopUserInteraction:(id)worldView;
-(void)worldViewDidStartUserInteraction:(id)worldView;
-(void)worldViewDidFailLoading:(id)worldView withError:(id)error;
-(void)worldViewDidFinishLoading:(id)worldView;
-(void)worldViewDidStartLoading:(id)worldView;
-(void)updateCameraContext:(id)context location:(id)location;
-(void)_addDebugLocationAnnotationMatchedLocation:(id)location;
-(void)updateDebugStepAnnotation:(unsigned)annotation route:(id)route;
-(void)_addLocationAnnotation:(id)annotation history:(id)history;
-(void)clearDebugAnnotations;
-(void)_clearDebugStepAnnotations;
-(void)clearAllAnnotations;
-(void)stopAnimatingForTracePlayer;
-(void)setCameraPanStyle:(int)style;
-(void)setUserZoomRangeWithMinZoom:(double)minZoom maxZoom:(double)zoom;
-(void)stopCameraMotion;
-(void)startMotionWithCameraContext:(id)cameraContext animated:(BOOL)animated;
-(void)refreshCameraContext:(id)context location:(id)location;
-(void)updateRoadDescription:(id)description routeUserOffset:(XXStruct_lRyTTC)offset;
-(void)setUserLocationAnnotationMarker:(id)marker;
-(void)updateSky;
-(void)dealloc;
-(id)init;
@end
