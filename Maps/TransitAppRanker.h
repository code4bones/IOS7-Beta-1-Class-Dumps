/* TransitAppRanker.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TransitAppRanker : XXUnknownSuperclass <NSCoding> {
	NSMutableArray* _rankings;
}
@property(retain, nonatomic) NSMutableArray* rankings;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)recentlyLaunchedApps;
-(void)recordAppLaunch:(id)launch;
-(id)rankApps:(id)apps;
-(void)dealloc;
-(id)initWithRecentlyLaunchedApps:(id)recentlyLaunchedApps;
-(id)rankedTransitAppsProxiesWithProxies:(id)proxies;
@end
