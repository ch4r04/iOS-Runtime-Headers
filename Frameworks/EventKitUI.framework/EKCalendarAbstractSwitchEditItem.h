/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray, UILabel, UISwitch, UIView;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {
    BOOL _allowEventAlerts;
    NSMutableArray *_cells;
    UILabel *_descriptionLabel;
    UIView *_footerView;
    BOOL _switchState;
    UISwitch *_toggleSwitch;
    BOOL _underlyingCalendarState;
}

@property BOOL allowEventAlerts;
@property(retain) NSMutableArray * cells;
@property BOOL switchState;
@property(retain) UISwitch * toggleSwitch;
@property BOOL underlyingCalendarState;

- (void).cxx_destruct;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)_switchStateChanged:(id)arg1;
- (BOOL)allowEventAlerts;
- (id)cell;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (id)cellText;
- (id)cells;
- (id)descriptionLabelText;
- (float)footerHeightForSection;
- (id)footerView;
- (id)footerViewForSection;
- (void)layoutForWidth:(float)arg1;
- (unsigned int)numberOfSubitems;
- (void)reset;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)setAllowEventAlerts:(BOOL)arg1;
- (void)setCalendar:(id)arg1 store:(id)arg2;
- (void)setCells:(id)arg1;
- (void)setSwitchState:(BOOL)arg1;
- (void)setToggleSwitch:(id)arg1;
- (void)setUnderlyingCalendarState:(BOOL)arg1;
- (BOOL)switchState;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)toggleSwitch;
- (BOOL)underlyingCalendarState;

@end