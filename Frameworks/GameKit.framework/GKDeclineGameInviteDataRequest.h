/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKInvite;

@interface GKDeclineGameInviteDataRequest : GKDataRequest {
    GKInvite *_invite;
    NSInteger _reason;
}

@property(retain) GKInvite *invite;
@property NSInteger reason;

- (void)dealloc;
- (id)invite;
- (id)key;
- (NSInteger)reason;
- (id)request;
- (void)setInvite:(id)arg1;
- (void)setReason:(NSInteger)arg1;

@end