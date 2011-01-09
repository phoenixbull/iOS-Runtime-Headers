/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoViewController, MPItem, MPDetailSlider, <MPVideoOverlayDelegate>, NSMutableDictionary;



@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate>
{
    MPVideoViewController *_videoViewController;
    <MPVideoOverlayDelegate> *_delegate;
    MPItem *_item;
    MPDetailSlider *_scrubControl;
    NSInteger _interfaceOrientation;
    BOOL _controlsAutohideDisabled;
    BOOL _wantsTick;
    NSUInteger _desiredParts;
    NSUInteger _visibleParts;
    NSUInteger _disabledParts;
    NSMutableDictionary *_tickTimeEvents;
    double _lastTickTime;
}

@property NSUInteger disabledParts;
@property NSUInteger visibleParts;
@property NSInteger interfaceOrientation;
@property MPVideoViewController *videoViewController;
@property(retain) MPItem *item;
@property NSUInteger desiredParts;
@property <MPVideoOverlayDelegate> *delegate;


- (void)setItem:(id)arg1;
- (id)item;
- (void)didMoveToSuperview;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (NSInteger)interfaceOrientation;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)videoViewController;
- (void)_endSliderTracking;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (NSUInteger)desiredParts;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (void)setDesiredParts:(NSUInteger)arg1 animate:(BOOL)arg2;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (NSUInteger)disabledParts;
- (void)_updateTimeBasedValues;
- (void)setVideoViewController:(id)arg1;
- (void)startTicking;
- (void)stopTicking;
- (void)setDisabledParts:(NSUInteger)arg1;
- (void)setDesiredParts:(NSUInteger)arg1;
- (void)setVisibleParts:(NSUInteger)arg1;
- (NSUInteger)visibleParts;
- (void)setVisibleParts:(NSUInteger)arg1 animate:(BOOL)arg2;

@end