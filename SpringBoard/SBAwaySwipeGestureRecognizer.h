/* SBAwaySwipeGestureRecognizer.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBAwaySwipeGestureRecognizer : XXUnknownSuperclass {
	CGPoint _startLocation;
	unsigned _startTouchCount;
	double _startTime;
	unsigned _requiredTouchCount;
	int _gestureType;
}
@property(assign, nonatomic) unsigned requiredTouchCount;
-(BOOL)_isView:(id)view subviewOfClass:(Class)aClass;
-(CGPoint)averagePositionForTouches:(id)touches;
-(BOOL)isGestureFromLocation:(CGPoint)location count:(unsigned)count toLocation:(CGPoint)location3 count:(unsigned)count4 elapsedTime:(double)time gestureType:(int*)type;
-(unsigned)fingerCount;
-(int)recognizedGestureType;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
@end
