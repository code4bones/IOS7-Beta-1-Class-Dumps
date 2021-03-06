/* WeatherScroller.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIImage, UIView;
@protocol WeatherScrollerDelegate;

__attribute__((visibility("hidden")))
@interface WeatherScroller : XXUnknownSuperclass <UIScrollViewDelegate> {
	id<WeatherScrollerDelegate> _weatherScrollerDelegate;
	UIImageView* _backgroundHeader;
	UIImageView* _backgroundImage;
	UIView* _todayHeader;
	UIView* _todayHourlyForecasts;
	UIView* _tomorrowHeader;
	UIView* _tomorrowHourlyForecasts;
	UIView* _unusedDaysFooter;
	UIImageView* _infoFooter;
	UIImageView* _todayBackground;
	UIImageView* _tomorrowBackground;
	UIImageView* _unusedBackground;
	UIImageView* _tomorrowCastShadow;
	UIImageView* _extraDaysCastShadow;
	UIImageView* _footerCastShadow;
	BOOL _isDay;
	BOOL _isOpeningOrClosing;
	BOOL _isSlammingShut;
	BOOL _isDroppedShut;
	UIImage* _stretchableDrawer;
	UIImageView* _topDrawerShadow;
	UIImageView* _bottomDrawerShadow;
	UIImageView* _todayTopBevel;
	UIImageView* _tomorrowTopBevel;
}
@property(retain, nonatomic) UIImageView* tomorrowTopBevel;
@property(retain, nonatomic) UIImageView* todayTopBevel;
@property(retain, nonatomic) UIImageView* bottomDrawerShadow;
@property(retain, nonatomic) UIImageView* topDrawerShadow;
@property(retain, nonatomic) UIImage* stretchableDrawer;
@property(assign, nonatomic) id<WeatherScrollerDelegate> weatherScrollerDelegate;
@property(assign, nonatomic) BOOL isOpeningOrClosing;
-(void)prepareForClosureAnimation;
-(void)setContentOffset:(CGPoint)offset;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)_updateHeaderBackgrounds;
-(void)setDrawerPosition:(float)position;
-(float)maxDistance;
-(float)closeDistance;
-(void)closeDrawer:(id)drawer;
-(CGPoint)timeToPartiallyCloseDrawer:(BOOL)partiallyCloseDrawer;
-(void)openDrawerCompletely:(BOOL)completely;
-(CGPoint)timeToPartiallyOpenDrawer:(BOOL)partiallyOpenDrawer;
-(void)showBevels:(BOOL)bevels;
-(void)layoutSubviews;
-(void)_layoutShadows;
-(void)_updateBevelAlphas;
-(void)slide:(id)slide;
-(void)showInfoShadow:(BOOL)shadow;
-(void)_createHeadersAndFooters:(id)footers;
-(void)_createShadows;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame dictionary:(id)dictionary;
@end
