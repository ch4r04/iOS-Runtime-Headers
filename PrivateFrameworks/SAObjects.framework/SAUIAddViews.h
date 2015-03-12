/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAUIAddViews : SABaseClientBoundCommand {
}

@property(copy) NSString * dialogPhase;
@property(copy) NSString * displayTarget;
@property BOOL scrollToTop;
@property BOOL temporary;
@property(copy) NSArray * views;

+ (id)addViews;
+ (id)addViewsWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)_afui_isUsefulUserResultCommand;
- (id)afui_dialogPhase;
- (id)dialogPhase;
- (id)displayTarget;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)scrollToTop;
- (void)setDialogPhase:(id)arg1;
- (void)setDisplayTarget:(id)arg1;
- (void)setScrollToTop:(BOOL)arg1;
- (void)setTemporary:(BOOL)arg1;
- (void)setViews:(id)arg1;
- (BOOL)temporary;
- (id)views;

@end