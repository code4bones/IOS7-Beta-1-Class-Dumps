/* AlbumArtworkLoader.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iPodOut-Structs.h"

@class MPMediaItemArtwork, NSIndexPath, UIImage;

__attribute__((visibility("hidden")))
@interface AlbumArtworkLoader : XXUnknownSuperclass {
	id delegate;
	MPMediaItemArtwork* artwork;
	NSIndexPath* indexPath;
	UIImage* image;
	CGSize desiredSize;
}
@property(retain) UIImage* image;
@property(assign) CGSize desiredSize;
@property(retain) NSIndexPath* indexPath;
@property(retain) MPMediaItemArtwork* artwork;
@property(assign) id delegate;
-(void).cxx_destruct;
-(void)main;
-(id)initWithArtwork:(id)artwork forIndexPath:(id)indexPath desiredSize:(CGSize)size;
@end