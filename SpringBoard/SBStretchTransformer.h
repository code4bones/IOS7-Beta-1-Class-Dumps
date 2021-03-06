/* SBStretchTransformer.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, CAMutableMeshTransform;

__attribute__((visibility("hidden")))
@interface SBStretchTransformer : XXUnknownSuperclass {
	UIView* m_view;
	int m_anchorEdge;
	int m_orientation;
	CAMutableMeshTransform* m_mesh;
	float m_stretchFactor;
	id m_animationCompletionHandler;
}
@property(assign, nonatomic) float stretchFactor;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic) int anchorEdge;
@property(retain, nonatomic) UIView* view;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)animateToZeroStretchFactorWithCompletionHandler:(id)completionHandler;
-(void)animateToZeroStretchFactor;
-(void)updateMeshTransform:(id)transform stretchFactor:(float)factor;
-(id)meshTransform;
-(void)dealloc;
-(id)initWithView:(id)view anchorEdge:(int)edge orientation:(int)orientation;
@end
