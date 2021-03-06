/* AddressView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "RotatablePopoverControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "CompletionListDelegate.h"
#import "MobileSafari-Structs.h"

@class ProgressView, BookmarksBarView, UnifiedField, TabBar, CompletionList, UIImageView, UIResponder, UIView, UILabel, UINavigationButton, CompletionTableView, UISnapshotView, CompletionTableViewController, FadeView, SearchEngineInfo, ReloadImageView, EllipsedTextFadeView, EllipsedTextView, NSString;

__attribute__((visibility("hidden")))
@interface AddressView : XXUnknownSuperclass <RotatablePopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, CompletionListDelegate> {
	UIImageView* _gradientImageView;
	UIImageView* _bottomShadowView;
	ReloadImageView* _reloadImageView;
	UnifiedField* _addressTextField;
	NSString* _addressText;
	BOOL _addressTextIsSearch;
	UIResponder* _responderForEditingWithoutFirstResponder;
	ProgressView* _progressView;
	UIView* _urlClipperView;
	EllipsedTextView* _ellipsedTextView;
	EllipsedTextFadeView* _ellipsedTextFadeView;
	UIView* _bookmarkBarClipperView;
	UIImageView* _dividerView;
	BookmarksBarView* _bookmarksBarView;
	TabBar* _tabBar;
	UILabel* _titleTextView;
	CGSize _titleTextSize;
	UIImageView* _lockView;
	NSString* _evOrganizationName;
	NSString* _pageTitle;
	UIView* _titleTextViewContainer;
	NSString* _titleAfterCoalescedUpdate;
	UINavigationButton* _cancelButton;
	FadeView* _fadeView;
	CompletionTableViewController* _completionTableViewController;
	CompletionTableView* _completionTable;
	CompletionList* _completionList;
	BOOL _shouldShowCompletions;
	BOOL _networkIsReachable;
	SearchEngineInfo* _currentSearchEngine;
	NSString* _searchCountKey;
	unsigned _isAnimating : 1;
	unsigned _isEditing : 1;
	unsigned _isShowingBookmarksBar : 1;
	unsigned _suppressTextFieldDidEndEditingResponse : 1;
	UISnapshotView* _snapshotView;
	UIView* _blankSectionHeaderView;
	SEL _outstandingDidStopSelector;
	BOOL _progressStalled;
	BOOL _usesPrivateBrowsingStyle;
	float _addressFieldLeftInset;
}
@property(assign, nonatomic) float addressFieldLeftInset;
+(BOOL)alwaysShowBookmarksBar;
+(void)setAlwaysShowBookmarksBar:(BOOL)bar;
+(double)hideDelay;
+(BOOL)_showsTitle;
-(void)setUsesPrivateBrowsingStyle:(BOOL)style;
-(void)updateReaderButton;
-(void)_layoutClipperViewAndEllipsedTextView;
-(void)_animateInWithSnapshotDidEnd;
-(id)snapshotView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)adjustCompletionTableForKeyboardChange:(id)keyboardChange animated:(BOOL)animated;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)inputAccessoryView;
-(BOOL)_activeTabIsBlankDocument;
-(int)_sectionIndexForFindOnThisPage;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(void)_clearAddressTextFieldWithKeyboardInput:(id)keyboardInput;
-(void)_pushUndoActionName:(id)name;
-(void)textFieldClearButtonPressed:(id)pressed;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)didMoveToSuperview;
-(void)setIsAnimating:(BOOL)animating;
-(BOOL)isAnimating;
-(void)willHideProgress;
-(void)willShowProgress;
-(void)setEVOrganizationName:(id)name;
-(id)lockView;
-(id)titleTextView;
-(id)evOrganizationName;
-(id)title;
-(void)setTitle:(id)title forceUpdate:(BOOL)update;
-(void)updateTitleTextViewForCoalescedUpdate;
-(id)progressView;
-(id)ellipsedTextView;
-(id)reloadImageView;
-(void)setProgress:(float)progress forceUpdate:(BOOL)update;
-(void)setProgressStalled:(BOOL)stalled;
-(void)_updateReloadImageViewWithForcedUpdate:(BOOL)forcedUpdate;
-(void)searchWithSearchString:(id)searchString;
-(void)search;
-(void)_completedEditingAddressWithText:(id)text;
-(void)goToURL;
-(BOOL)isEditing;
-(void)browserControllerWillEndEnteringURL;
-(void)cancel;
-(void)transitionAwayFromEditingTextField:(id)editingTextField;
-(void)focusAddressField;
-(void)_ellipsedTextViewWasClicked;
-(void)transitionToEditingTextField:(id)editingTextField;
-(CGRect)_editingFrame;
-(void)_prepareTitleForAnimatedAlignmentChange;
-(void)_didFinishAnimatingToStopEditing;
-(void)willSuspend;
-(void)updateBookmarksBar;
-(void)cleanUpBookmarksBar;
-(void)hideBookmarksBar;
-(void)showBookmarksBar;
-(void)prepareToShowBookmarksBar;
-(void)_didFinishAnimatingToEditURL;
-(id)_colorForBookmarksBarTitles;
-(void)_adjustClipperViewAndEllipsedTextViewForEditing:(BOOL)editing textField:(id)field;
-(void)_layoutEllipsedTextViewForProgressViewFrame:(CGRect)progressViewFrame;
-(BOOL)_shouldDoURLSlideAnimation;
-(float)_addressWidthIncludingScheme:(BOOL)scheme;
-(void)_createButtons;
-(void)_cancelMouseExit;
-(void)_cancelMouseEnter;
-(void)_cancelMouseUpOutside;
-(void)_cancelMouseDown;
-(void)_swapInTextEditingView:(BOOL)textEditingView andGiveFocus:(BOOL)focus;
-(void)_updateAddressTextFieldText;
-(void)_setAddressTextFieldText:(id)text;
-(void)_updateFieldBackgroundStylesForEditing:(BOOL)editing textField:(id)field;
-(void)_createAddressTextFieldIfNecessary;
-(id)unifiedField:(id)field topHitForText:(id)text;
-(BOOL)unifiedField:(id)field shouldWaitForTopHitForText:(id)text;
-(void)unifiedField:(id)field didEndEditingWithSearch:(id)search;
-(void)unifiedField:(id)field didEndEditingWithAddress:(id)address;
-(void)cancelFindOnPage;
-(BOOL)isFindOnPageSupported;
-(void)_addressTextDidChangeFromTyping;
-(void)_updateCompletions;
-(void)completionList:(id)list topHitDidBecomeReadyForString:(id)topHit;
-(void)completionListDidUpdate:(id)completionList;
-(void)clearURLCompletionList;
-(void)hideCompletionTableIfItIsBeingShown;
-(void)_hideCompletions;
-(void)popoverController:(id)controller willPresentAfterRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)_showCompletions;
-(void)_reloadCompletionTableAndAdjustPopover;
-(BOOL)_completionTableIsVisible;
-(CGRect)_presentationRectForCompletionPopover;
-(void)_adjustClipperViewAndEllipsedTextViewAfterAnimateInOrOut;
-(void)_readerButtonClicked;
-(void)_reloadImageViewClicked;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)dealloc;
-(void)setTabBar:(id)bar;
-(void)_networkReachabilityChanged:(id)changed;
-(id)initWithFrame:(CGRect)frame;
-(void)_setTitleText:(id)text;
-(void)updateUIWithForcedUpdate:(BOOL)forcedUpdate;
-(id)_currentSearchQuery;
-(void)updateEllipsedTextView;
-(void)_layoutAddressTextField;
-(void)_layoutAddressTextFieldForProgressViewBounds:(CGRect)progressViewBounds;
-(void)_updateURLClipperViewFrameForReloadButtonRegionWidth:(float)reloadButtonRegionWidth;
-(CGRect)_addressFrameInProgressViewBounds:(CGRect)progressViewBounds;
-(id)_colorForEVOrganizationNameInTitle;
-(id)_colorForNormalPageTitle;
-(void)updateSearchEngine;
-(void)_initSearchEngineIfNeeded;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
-(void)_updateTabBarBackgroundOffset;
-(void)_layoutEllipsedTextFadeViewForEditing:(BOOL)editing textField:(id)field;
-(void)_layoutEllipsedTextFadeViewShowingAdjustment:(BOOL)adjustment;
-(void)_layoutCancelButtonForEditing:(BOOL)editing beforeAnimation:(BOOL)animation;
-(void)_layoutReloadButtonForProgressViewFrame:(CGRect)progressViewFrame forEditing:(BOOL)editing textField:(id)field;
-(void)_layoutTitleView;
-(void)_setTitleFrame:(CGRect)frame;
-(void)_updateLockViewImage;
-(void)_updateLockViewPosition;
-(void)_layoutCompletionTable;
-(void)_setUpTargetViewForCompletionTable;
-(float)_reloadButtonRegionWidthWhenEditingTextField:(id)field;
-(float)_reloadButtonRegionWidth;
-(float)_rightSideButtonsRegionWidth;
-(id)_textFieldForEditing;
-(CGRect)_frameForUnifiedFieldInProgressViewFrame:(CGRect)progressViewFrame;
-(CGRect)_frameForProgressViewWithFocus:(BOOL)focus;
-(float)_fieldPaddingTop;
-(float)_fieldWidth;
-(CGRect)_fieldRect;
-(void)browserControllerDidEndRotating;
-(void)browserControllerDidStartRotating;
-(BOOL)_isShowingProgress;
-(float)progress;
-(id)tabBar;
-(float)editingHeight;
-(float)defaultHeight;
-(float)_heightWithoutBars;
@end
