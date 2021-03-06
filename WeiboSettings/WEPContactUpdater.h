/* WEPContactUpdater.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccountStore, NSMutableDictionary, NSMutableArray, NSMutableSet, NSOperationQueue, ACAccount;
@protocol WEPContactUpdaterDelegate;

@interface WEPContactUpdater : XXUnknownSuperclass {
	void* _addressBook;
	ACAccount* _account;
	ACAccountStore* _store;
	NSMutableDictionary* _personDictionary;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhoneNumbers;
	NSMutableSet* _updatedPeople;
	NSOperationQueue* _operationQueue;
	id<WEPContactUpdaterDelegate> _delegate;
	int _expectedBatchJobs;
	int _completedBatchJobs;
	float _partialBatchJobsCompleted;
	int _expectedPhotoJobs;
	int _completedPhotoJobs;
	BOOL _warnedOfFailure;
}
@property(assign, nonatomic) __weak id<WEPContactUpdaterDelegate> delegate;
-(void).cxx_destruct;
-(void)_photoLookupFinished:(id)finished;
-(void)_batchLookupFinished:(id)finished;
-(void)_batchLookupProgress:(id)progress;
-(void)cancel;
-(void)updatePhotos;
-(void)updateContacts;
-(void)_populatePhoneNumbersAndEmails;
-(id)_canonicalizaPhoneNumbers:(id)numbers;
-(void)dealloc;
-(id)initWithAccount:(id)account store:(id)store;
@end
