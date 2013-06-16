/* CompletionItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol CompletionItem <NSObject>
@optional
@property(readonly, assign, nonatomic) float completionTableViewCellCustomHeight;
@required
-(void)auditAcceptedCompletionWithRank:(unsigned)rank;
-(void)acceptCompletionWithSearchAction:(id)searchAction goToURLAction:(id)urlaction findOnPageAction:(id)action;
-(void)configureCompletionTableViewCell:(id)cell;
-(int)completionTableViewCellStyle;
-(id)completionTableViewCellReuseIdentifier;
@end