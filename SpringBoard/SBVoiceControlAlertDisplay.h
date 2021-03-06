/* SBVoiceControlAlertDisplay.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "VSRecognitionSessionDelegate.h"
#import "VSSpeechSynthesizerDelegate.h"
#import "_UISiriWaveyViewDelegate.h"
#import "SiriUISuggestionsViewDelegate.h"
#import "SBAlertView.h"
#import "SpringBoard-Structs.h"

@class _UIBackdropView, UILabel, NSDictionary, UIView, AVController, VSRecognitionSession, NSInvocation, _UISiriWaveyView, SiriUISuggestionsView;

__attribute__((visibility("hidden")))
@interface SBVoiceControlAlertDisplay : SBAlertView <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate, _UISiriWaveyViewDelegate, SiriUISuggestionsViewDelegate> {
	VSRecognitionSession* _session;
	BOOL _wasRecognizing;
	BOOL _didConfigureRouting;
	NSInvocation* _postSoundInvocation;
	_UIBackdropView* _backdrop;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	_UISiriWaveyView* _waveyView;
	SiriUISuggestionsView* _suggestionsView;
	AVController* _avController;
	int _keywordCount;
	int _startingKeywordIndex;
	NSDictionary* _locStrings;
	BOOL _didDismiss;
	BOOL _awaitingButtonRelease;
	BOOL _isBecomingVisible;
}
-(float)audioLevelForWaveyView:(id)waveyView;
-(id)nextSuggestionsForSuggestionsView:(id)suggestionsView maxSuggestions:(unsigned)suggestions;
-(void)_keywordsChanged;
-(void)recognitionSession:(id)session didFinishSpeakingFeedbackStringWithError:(id)error;
-(void)_speakText:(id)text;
-(void)_speakFeedbackText;
-(void)_performConfirmationAction;
-(void)_continueWithRecognitionAction;
-(id)recognitionSession:(id)session openURL:(id)url;
-(id)_openVideoURL:(id)url;
-(id)_openTelURL:(id)url;
-(void)recognitionSession:(id)session didCompleteActionWithError:(id)error;
-(void)_mediaPlayerDied;
-(void)_performNoMatchFound;
-(void)recognitionSessionDidBeginAction:(id)recognitionSession;
-(void)_continueRecognitionAction;
-(BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;
-(void)_resetSession;
-(void)_startSession;
-(void)_playSound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(BOOL)_attemptPlaySound:(unsigned long)sound synchronously:(BOOL)synchronously;
-(void)_performSoundCompletionAction;
-(void)_configureRoutingIfNecessary;
-(void)_pickedRouteChanged:(id)changed;
-(id)_desiredRouteDictionary;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)activation;
-(void)handleButtonUpCancel;
-(void)_dismissSlightlyLater;
-(void)dismiss;
-(void)_invalidateRouting;
-(void)alertWillBeDismissed;
-(void)alertDisplayWillBecomeVisible;
-(void)_setFeedbackVisible:(BOOL)visible animated:(BOOL)animated;
-(void)setStatusText:(id)text;
-(void)setTitleText:(id)text;
-(id)_localizedStringForKey:(id)key;
-(BOOL)alphanumericKeyboard;
-(void)dealloc;
-(BOOL)_wasTriggeredByMenu;
-(id)initWithFrame:(CGRect)frame session:(id)session;
@end
