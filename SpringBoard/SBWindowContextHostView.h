/* SBWindowContextHostView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBWindowContextManagerObserver.h"
#import "SpringBoard-Structs.h"

@class NSMutableSet, NSSet, NSMutableArray, UIScreen, SBWindowContextManager, SBWindowContextHostManager, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface SBWindowContextHostView : XXUnknownSuperclass <SBWindowContextManagerObserver> {
	UIScreen* _screen;
	SBWindowContextHostManager* _hostManager;
	SBWindowContextManager* _contextManager;
	NSMutableSet* _hiddenContexts;
	NSMutableOrderedSet* _contexts;
	NSMutableArray* _layerHosts;
}
@property(copy, nonatomic) NSSet* hiddenContexts;
@property(retain, nonatomic) SBWindowContextManager* contextManager;
@property(assign, nonatomic) SBWindowContextHostManager* hostManager;
@property(readonly, assign, nonatomic) UIScreen* screen;
-(void)windowContextManager:(id)manager didRepositionContext:(id)context from:(unsigned)from to:(unsigned)to forScreen:(id)screen;
-(id)description;
-(id)window;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)hasContent;
-(BOOL)isHosting;
-(void)_adjustLayerFrameAndTransform:(id)transform;
-(void)dealloc;
-(id)init;
-(id)initWithScreen:(id)screen jailBehavior:(int)behavior;
@end
