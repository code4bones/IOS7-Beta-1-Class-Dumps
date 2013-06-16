/* MegaMRowsChangedContext.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "_ContextDictionary.h"

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface MegaMRowsChangedContext : _ContextDictionary {
}
@property(retain, nonatomic) NSMutableIndexSet* relocatedIndices;
@property(retain, nonatomic) NSMutableIndexSet* destinationIndices;
@property(retain, nonatomic) NSMutableIndexSet* updatedIndices;
@property(retain, nonatomic) NSMutableIndexSet* removedIndices;
@property(retain, nonatomic) NSMutableIndexSet* insertedIndices;
@property(assign, nonatomic) int section;
+(id)_sharedKeySet;
-(BOOL)hasChanges;
@end