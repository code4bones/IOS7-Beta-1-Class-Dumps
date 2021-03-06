/* MapPluginAnnotationSO.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MapWebKitPlugin-Structs.h"
#import "MKAnnotation.h"

@class NSString;

@interface MapPluginAnnotationSO : XXUnknownSuperclass <MKAnnotation> {
	BOOL _hasLeftCalloutButton;
	BOOL _hasRightCalloutButton;
	BOOL _animatesDrop;
	BOOL _draggable;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLString;
	unsigned _pinColor;
	CGPoint _centerOffset;
	XXStruct_zYrK5D _coordinate;
}
@property(assign) BOOL draggable;
@property(assign) BOOL animatesDrop;
@property(assign) unsigned pinColor;
@property(assign) BOOL hasRightCalloutButton;
@property(assign) BOOL hasLeftCalloutButton;
@property(assign) CGPoint centerOffset;
@property(copy, nonatomic) NSString* imageURLString;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(copy, nonatomic) NSString* identifier;
@property(assign, nonatomic) XXStruct_zYrK5D coordinate;
-(void)dealloc;
-(id)initDroppedPinAtCoordinate:(XXStruct_zYrK5D)coordinate title:(id)title identifier:(id)identifier;
-(id)initWithWebScriptObject:(id)webScriptObject;
@end
