/* SyncFooterView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PSHeaderFooterView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIProgressView, NSString;

@interface SyncFooterView : XXUnknownSuperclass <PSHeaderFooterView> {
	UILabel* _notConnectedLabel;
	UILabel* _hostNameLabel;
	UILabel* _syncedAssetsLabel;
	UILabel* _timestampLabel;
	UILabel* _timestampLabel2;
	UILabel* _timestampLabel3;
	UILabel* _syncStatusLabel;
	UILabel* _assetInfoLabel;
	UIProgressView* _assetProgress;
	NSString* _hostIdentifier;
	BOOL _showHostName;
	float _currentHeight;
}
@property(assign, nonatomic) BOOL showHostName;
@property(retain, nonatomic) NSString* hostIdentifier;
-(void)configureTimestampLabels:(id)labels;
-(void)configureLabelsForSyncState:(id)syncState dataSource:(id)source;
-(void)configureLabelsForWakingState:(id)wakingState dataSource:(id)source;
-(void)configureLabelsForConnectedState:(id)connectedState dataSource:(id)source;
-(void)configureLabelsForDisconnectedState:(id)disconnectedState dataSource:(id)source;
-(BOOL)updateProgress:(id)progress dataSource:(id)source;
-(float)preferredHeightForWidth:(float)width;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithSpecifier:(id)specifier;
-(id)newSingleLineLabel:(id)label;
-(id)newLabel:(id)label;
@end
