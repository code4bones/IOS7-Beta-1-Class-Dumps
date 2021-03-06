/* VOTGestureEvent.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class AXEventRepresentation;

__attribute__((visibility("hidden")))
@interface VOTGestureEvent : XXUnknownSuperclass {
	AXEventRepresentation* _eventRepresentation;
}
@property(retain, nonatomic) AXEventRepresentation* eventRepresentation;
+(id)gestureEventWithEventRepresentation:(id)eventRepresentation;
-(BOOL)didFallThruToDevice;
-(void)_addFingerInformation;
-(BOOL)isDownEvent;
-(BOOL)isLiftEvent;
-(BOOL)isCancelEvent;
-(void)dealloc;
-(id)_initWithDeviceIdentifier:(unsigned)deviceIdentifier andEventRepresentation:(id)representation;
@end
