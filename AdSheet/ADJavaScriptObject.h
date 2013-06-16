/* ADJavaScriptObject.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class JSValue, NSMutableArray, NSLock, NSMutableDictionary, ADSAdImpressionController;
@protocol ADJSODelegate;

__attribute__((visibility("hidden")))
@interface ADJavaScriptObject : XXUnknownSuperclass {
	id<ADJSODelegate> _delegate;
	ADSAdImpressionController* _impressionController;
	NSMutableArray* _downloads;
	NSMutableDictionary* _retainedJSValues;
	NSLock* _retainedJSValuesLock;
}
@property(readonly, assign, nonatomic) NSLock* retainedJSValuesLock;
@property(readonly, assign, nonatomic) NSMutableDictionary* retainedJSValues;
@property(retain, nonatomic) JSValue* listener;
@property(retain, nonatomic) NSMutableArray* downloads;
@property(readonly, assign, nonatomic) ADSAdImpressionController* impressionController;
@property(assign, nonatomic) __weak id<ADJSODelegate> delegate;
+(void)setJSException:(id)exception;
+(void)initializeInContext:(id)context;
+(void)initialize;
-(void)fireTestProbe:(id)probe withOptions:(id)options;
-(id)JSValueForKey:(id)key;
-(void)setJSValue:(id)value forKey:(id)key;
-(void)adWillDismiss;
-(id)initWithDelegate:(id)delegate impressionController:(id)controller;
-(id)init;
-(void)dealloc;
@end