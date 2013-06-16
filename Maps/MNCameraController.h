/* MNCameraController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, MKWorldView, MNCircleAnnotation;

__attribute__((visibility("hidden")))
@interface MNCameraController : XXUnknownSuperclass {
	MKWorldView* _worldView;
	BOOL _disableAnimationInNextCameraUpdate;
	BOOL _onRoute;
	NSMutableArray* _cameraDebugPointOfInterestAnnotations;
	MNCircleAnnotation* _cameraDebugPointOfFocusAnnotation;
	double _tracePlaybackSpeedMultiplier;
}
@property(assign, nonatomic) double userZoom;
@property(assign, nonatomic) BOOL onRoute;
@property(assign, nonatomic) double zoomScale;
@property(assign, nonatomic) BOOL disableAnimationInNextCameraUpdate;
@property(retain, nonatomic) MKWorldView* worldView;
-(void)setTracePlaybackSpeedMultiplier:(double)multiplier;
-(void)stopTracking;
-(void)transitionCameraContext:(id)context trackingInMapMode:(int)mapMode animated:(BOOL)animated startLocation:(id)location startHandler:(id)handler;
-(void)_updateCameraContext:(id)context forLocation:(id)location animated:(BOOL)animated;
-(void)updateCameraContext:(id)context location:(id)location;
-(void)refreshCameraContext:(id)context location:(id)location;
-(void)updateCameraDebugAnnotationsForContext:(id)context;
-(void)clearDebugAnnotations;
-(void)setCameraPanStyle:(int)style;
-(void)setUserZoomRangeWithMinZoom:(double)minZoom maxZoom:(double)zoom;
-(void)dealloc;
-(id)init;
@end