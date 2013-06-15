/* SBNewsstand.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBNewsstand : XXUnknownSuperclass {
}
+(BOOL)useInternationalAssets;
+(BOOL)addFakeApps;
+(id)bundleIDToReplicate;
+(BOOL)addManyIcons;
+(BOOL)alwaysShowIconLabels;
+(BOOL)disableIconSkew;
+(BOOL)_newsstandStoreIsSupported;
+(BOOL)_newsstandStoreIsRestricted;
+(BOOL)newsstandStoreIsAvailable;
+(BOOL)newsstandEnabled;
+(void)_iconVisibilityDidChange:(id)_iconVisibility;
+(void)_availableStoreItemKindsDidChange:(id)_availableStoreItemKinds;
+(void)reloadDefaults;
+(void)noteAppRestrictionsDidChange;
+(void)_checkStoreSupport;
+(void)_updateStoreAvailability;
+(void)_loadDefaults;
+(void)openNewsstandAppStore;
+(void)initialize;
@end