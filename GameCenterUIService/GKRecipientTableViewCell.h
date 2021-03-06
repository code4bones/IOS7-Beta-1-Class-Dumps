/* GKRecipientTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKComposeRecipient, GKLabel;

__attribute__((visibility("hidden")))
@interface GKRecipientTableViewCell : XXUnknownSuperclass {
	GKComposeRecipient* _recipient;
	GKLabel* _nameLabel;
	GKLabel* _labelLabel;
	GKLabel* _addressLabel;
}
@property(retain, nonatomic) GKLabel* addressLabel;
@property(retain, nonatomic) GKLabel* labelLabel;
@property(retain, nonatomic) GKLabel* nameLabel;
@property(retain, nonatomic) GKComposeRecipient* recipient;
+(id)cellForRecipient:(id)recipient;
+(id)identifier;
+(float)height;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
