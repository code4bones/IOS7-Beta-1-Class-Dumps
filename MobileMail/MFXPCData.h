/* MFXPCData.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MFXPCData : XXUnknownSuperclass {
	NSObject<OS_xpc_object>* _data;
}
+(id)dataWithXPCData:(id)xpcdata;
-(void)getBytes:(void*)bytes range:(NSRange)range;
-(void)getBytes:(void*)bytes length:(unsigned)length;
-(const void*)bytes;
-(unsigned)length;
-(id)_data;
-(void)dealloc;
-(id)initWithXPCData:(id)xpcdata;
@end
