/* HistoryItemTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SearchCompletionTableViewCell.h"

@class UIImageView;
@protocol HistoryItem;

__attribute__((visibility("hidden")))
@interface HistoryItemTableViewCell : SearchCompletionTableViewCell {
	UIImageView* _glyphImageView;
	id<HistoryItem> _historyItem;
}
@property(retain, nonatomic) id<HistoryItem> historyItem;
+(id)cellForValue:(id)value table:(id)table idiom:(int)idiom;
+(id)cellForValue:(id)value table:(id)table;
+(id)_searchRequestFromString:(id)string;
-(void)dealloc;
@end
