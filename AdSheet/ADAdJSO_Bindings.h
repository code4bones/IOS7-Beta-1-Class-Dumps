/* ADAdJSO_Bindings.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AdSheet-Structs.h"
#import "JSExport.h"

@class NSNumber, NSDictionary, NSString, ADCalendarJSO, ADStoreJSO, ADCameraJSO, ADBooksJSO, ADSMSComposerJSO, ADMailComposerJSO, ADContactsJSO, ADTwitterJSO, ADReminderComposerJSO, ADPassbookJSO, ADRewardsJSO, JSValue;

@protocol ADAdJSO_Bindings <JSExport>
@property(assign, nonatomic) __weak JSValue* deviceVolumeListener;
@property(assign, nonatomic) __weak JSValue* writeImageListener;
@property(assign, nonatomic) __weak JSValue* networkTypeListener;
@property(assign, nonatomic) __weak JSValue* deviceOrientationListener;
@property(assign, nonatomic) __weak JSValue* shakeEventsListener;
@property(assign, nonatomic) __weak JSValue* listener;
@property(readonly, assign, nonatomic) ADRewardsJSO* rewards;
@property(readonly, assign, nonatomic) ADPassbookJSO* passbook;
@property(readonly, assign, nonatomic) ADReminderComposerJSO* reminderComposer;
@property(readonly, assign, nonatomic) ADTwitterJSO* twitterComposer;
@property(readonly, assign, nonatomic) ADContactsJSO* contacts;
@property(readonly, assign, nonatomic) ADMailComposerJSO* mailComposer;
@property(readonly, assign, nonatomic) ADSMSComposerJSO* smsComposer;
@property(readonly, assign, nonatomic) ADBooksJSO* books;
@property(readonly, assign, nonatomic) ADCameraJSO* camera;
@property(readonly, assign, nonatomic) ADStoreJSO* store;
@property(readonly, assign, nonatomic) ADCalendarJSO* calendar;
@property(readonly, assign, nonatomic) int networkType;
@property(readonly, assign, nonatomic) NSString* bannerCustomMetadata;
@property(readonly, assign, nonatomic) NSDictionary* bannerParameters;
@property(readonly, assign, nonatomic) CGPoint bannerTapLocation;
@property(readonly, assign, nonatomic) CGRect bannerRectOnScreen;
@property(readonly, assign, nonatomic) NSNumber* currentDeviceVolume;
-(void)captureVisibleContentsAsImageURLForListener:(id)listener readableImageData:(BOOL)data;
-(void)writeDisplayedContentToSavedPhotosAlbum:(id)savedPhotosAlbum;
-(void)writeVideoToSavedPhotosAlbum:(id)savedPhotosAlbum listener:(id)listener;
-(void)writeImageToSavedPhotosAlbum:(id)savedPhotosAlbum listener:(id)listener;
-(void)setImageAsWallpaper:(id)wallpaper withTitle:(id)title listener:(id)listener;
-(void)fireTestProbe:(id)probe withOptions:(id)options;
-(void)dismiss;
-(void)addRingtone:(id)ringtone;
-(void)contentDidFinishPreparingToPresent;
-(void)reportClickEvent:(id)event;
@optional
-(void)captureVisibleContentsAsImageURLForListener:(id)listener readableImageData:(BOOL)data __JS_EXPORT_AS__captureVisibleContentsAsImageURL:(id)url;
-(void)writeVideoToSavedPhotosAlbum:(id)savedPhotosAlbum listener:(id)listener __JS_EXPORT_AS__writeVideoToSavedPhotosAlbum:(id)savedPhotosAlbum3;
-(void)writeImageToSavedPhotosAlbum:(id)savedPhotosAlbum listener:(id)listener __JS_EXPORT_AS__writeImageToSavedPhotosAlbum:(id)savedPhotosAlbum3;
-(void)setImageAsWallpaper:(id)wallpaper withTitle:(id)title listener:(id)listener __JS_EXPORT_AS__setImageAsWallpaper:(id)wallpaper4;
-(void)fireTestProbe:(id)probe withOptions:(id)options __JS_EXPORT_AS__fireTestProbe:(id)probe3;
@end
