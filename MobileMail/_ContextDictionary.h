/* _ContextDictionary.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _ContextDictionary : XXUnknownSuperclass {
	NSMutableDictionary* _storage;
}
+(id)_sharedKeySet;
-(void)setObject:(id)object forKeyedSubscript:(id)keyedSubscript;
-(void)setObject:(id)object forKey:(id)key;
-(void)removeObjectsForKeys:(id)keys;
-(void)removeObjectForKey:(id)key;
-(void)removeAllObjects;
-(BOOL)isEqualToDictionary:(id)dictionary;
-(id)description;
-(id)allValues;
-(id)allKeysForObject:(id)object;
-(id)allKeys;
-(id)objectForKeyedSubscript:(id)keyedSubscript;
-(id)objectForKey:(id)key;
-(void)getObjects:(id*)objects andKeys:(id*)keys;
-(id)objectEnumerator;
-(id)keyEnumerator;
-(unsigned)count;
-(void)dealloc;
-(id)initWithCapacity:(unsigned)capacity;
-(id)init;
@end
