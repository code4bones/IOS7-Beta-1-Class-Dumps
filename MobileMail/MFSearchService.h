/* MFSearchService.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "QueryProgressMonitor.h"
#import "MFSearchResultHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MFMailService.h"

@class MFMessageCriterion, MFActivityMonitor, MFMessageResultsGenerator, NSObject;
@protocol MFMessageIterationFilter, OS_dispatch_queue, OS_xpc_object, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MFSearchService : XXUnknownSuperclass <QueryProgressMonitor, MFSearchResultHandler, MFMailService> {
	NSObject<OS_dispatch_group>* _searchResultsGroup;
	NSObject<OS_dispatch_queue>* _searchResultsQueue;
	NSObject<OS_xpc_object>* _connection;
	MFActivityMonitor* _monitor;
	MFMessageResultsGenerator* _generator;
	BOOL _onServer;
	MFMessageCriterion* _criteria;
	NSObject<MFMessageIterationFilter>* _filter;
}
@property(assign, nonatomic) BOOL onServer;
@property(retain, nonatomic) NSObject<MFMessageIterationFilter>* filter;
@property(retain, nonatomic) MFMessageCriterion* criteria;
+(void)_autoFetchDone:(id)done;
+(void)_registerForAutoFetchFinishedNotification;
+(void)shutdown;
+(BOOL)handleMessage:(id)message connectionState:(id)state replyObject:(id*)object error:(id*)error;
+(id)requiredEntitlement;
+(id)serviceName;
-(unsigned)_libraryOptions;
-(void)handleMessage:(id)message;
-(void)_backgroundSearch;
-(void)endResult;
-(void)setResultUnread:(BOOL)unread;
-(void)setResultDateRecieved:(double)recieved;
-(void)setResultSender:(char*)sender;
-(void)setResultSubject:(char*)subject;
-(void)beginResult:(unsigned)result;
-(BOOL)shouldCancel;
-(void)stop;
-(void)startWithConnection:(id)connection;
-(void)dealloc;
-(id)initSearchForKeys:(id)keys withCriteria:(id)criteria filter:(id)filter onServer:(BOOL)server;
@end