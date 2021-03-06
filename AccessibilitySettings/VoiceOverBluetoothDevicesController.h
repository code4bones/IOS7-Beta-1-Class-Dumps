/* VoiceOverBluetoothDevicesController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VoiceOverBluetoothAlertDelegate.h"

@class UIAlertView, NSMutableArray, NSString, VoiceOverBluetoothAlert, VoiceOverBluetoothSSPPairingRequest, PSSpecifier, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VoiceOverBluetoothDevicesController : XXUnknownSuperclass <VoiceOverBluetoothAlertDelegate> {
@private
	NSMutableArray* _mainSpecifiersGroup;
	NSMutableArray* _deviceSpecifiersGroup;
	NSMutableDictionary* _devicesDict;
	NSMutableDictionary* _pairingPINDict;
	BOOL _power;
	BOOL _scanningEnabled;
	BOOL _bluetoothIsBusy;
	PSSpecifier* _currentDeviceSpecifier;
	NSString* _primaryDeviceAddress;
	VoiceOverBluetoothAlert* _alert;
	VoiceOverBluetoothSSPPairingRequest* _sspAlert;
	BOOL _togglingPower;
	unsigned _authorizedServices;
	UIAlertView* _powerAlert;
}
@property(assign, nonatomic) unsigned authorizedServices;
@property(retain, nonatomic) NSArray* mainSpecifiersGroup;
@property(retain, nonatomic) NSString* primaryDeviceAddress;
@property(readonly, assign, nonatomic) PSSpecifier* currentSpecifier;
@property(assign, nonatomic) BOOL bluetoothIsBusy;
@property(assign, nonatomic) BOOL scanningEnabled;
-(void)_cleanupPairing;
-(void)alertSheetDismissed:(id)dismissed;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)showBluetoothPowerAlert:(BOOL)alert;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)_stopScanning;
-(void)_startScanning;
-(void)_stopConnectable;
-(void)_startConnectable;
-(void)_stopDiscoverable;
-(void)_startDiscoverable;
-(void)_updateDevicePosition:(id)position;
-(void)handleReloadSpecifiers;
-(id)_specifierForDevice:(id)device;
-(id)_pairedDeviceSpecifiers;
-(void)reloadSpecifiers;
-(void)_showScanningUI:(BOOL)ui;
-(void)_showBluetoothPowerFooter:(BOOL)footer;
-(BOOL)_isBluetoothPowerFooterShowing;
-(id)specifiers;
-(void)_removeDevice:(id)device;
-(void)_addDevice:(id)device;
-(void)deviceConnected:(id)connected;
-(void)primaryDeviceWasUnpaired;
-(BOOL)shouldAddDevice:(id)device;
-(void)_sspPasskeyDisplayHandler:(id)handler;
-(void)_sspNumericComparisonHandler:(id)handler;
-(void)_sspConfirmationHandler:(id)handler;
-(void)_pinRequestHandler:(id)handler;
-(void)authenticationRequestHandler:(id)handler;
-(void)devicePairedHandler:(id)handler;
-(void)deviceDisconnectedHandler:(id)handler;
-(void)deviceConnectedHandler:(id)handler;
-(void)deviceUnpairedHandler:(id)handler;
-(void)deviceRemovedHandler:(id)handler;
-(void)deviceDiscoveredHandler:(id)handler;
-(void)deviceUpdatedHandler:(id)handler;
-(void)powerChangedHandler:(id)handler;
-(void)applicationDidBecomeActive:(id)application;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)applicationWillResignActive:(id)application;
-(void)applicationWillTerminate:(id)application;
-(id)bluetoothPowerAlertMessage;
-(id)bluetoothPoweredOffFooter;
-(id)devicesGroupName;
-(void)dealloc;
-(id)init;
@end
