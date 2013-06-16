/* MCSChange.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MCSFinalizedObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, NSInvocation;

__attribute__((visibility("hidden")))
@interface MCSChange : XXUnknownSuperclass <MCSFinalizedObject> {
	NSInvocation* _invocation;
	unsigned long long _committedNumber;
	unsigned long long _managerNumber;
	unsigned _isFinalized : 1;
	BOOL _isReverseOperation;
}
@property(readonly, assign, nonatomic) NSSet* messagesSet;
@property(assign, nonatomic) BOOL isReverseOperation;
-(void)setInvocation:(id)invocation;
-(id)invocation;
-(BOOL)isFinalized;
-(void)setManagerNumber:(unsigned long long)number;
-(id)mailboxParentForMove;
-(id)mailboxToMoveOrRename;
-(id)modifiedMailboxName;
-(id)mailboxToRemove;
-(unsigned)adjustUnreadCount:(unsigned)count withCriterion:(id)criterion;
-(id)copyChangeSetForFullPath:(id)fullPath;
-(unsigned long long)committedNumber;
-(int)localizedChangeDescriptionPriority;
-(id)localizedChangeDescription;
-(id)localizedErrorTitle;
-(id)localizedErrorDescription;
-(id)accounts;
-(id)stores;
-(id)URLStrings;
-(BOOL)isRevertible;
-(BOOL)revert;
-(BOOL)commit;
-(id)applyPendingChangeToObjects:(id)objects;
-(void)dealloc;
@end