/* RemindersListPickerAnimationsDictionary.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface RemindersListPickerAnimationsDictionary : XXUnknownSuperclass {
	NSIndexSet* _sectionsToDelete;
	NSIndexSet* _sectionsToReload;
	NSIndexSet* _sectionsToInsert;
	NSArray* _rowsToDelete;
	NSArray* _rowsToReload;
	NSArray* _rowsToInsert;
}
@property(retain, nonatomic) NSArray* rowsToInsert;
@property(retain, nonatomic) NSArray* rowsToReload;
@property(retain, nonatomic) NSArray* rowsToDelete;
@property(retain, nonatomic) NSIndexSet* sectionsToInsert;
@property(retain, nonatomic) NSIndexSet* sectionsToReload;
@property(retain, nonatomic) NSIndexSet* sectionsToDelete;
-(void).cxx_destruct;
@end
