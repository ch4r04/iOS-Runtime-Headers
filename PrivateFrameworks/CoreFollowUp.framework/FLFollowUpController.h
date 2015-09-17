/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLFollowUpController : NSObject <NSXPCListenerDelegate> {
    NSString *_clientIdentifier;
    NSXPCConnection *_conn;
    NSLock *_connLock;
    <FLFollowUpControllerDelegate> *_delegate;
    NSXPCListener *_listener;
    NSString *_machServiceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FLFollowUpControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didActivateHSA2LoginNotification:(id)arg1;
- (void)_postHSA2LoginNotification:(id)arg1 completion:(id /* block */)arg2;
- (void)_postHSA2PasswordResetNotification:(id)arg1 completion:(id /* block */)arg2;
- (void)_tearDownHSA2LoginNotificationWithPushMessageID:(id)arg1;
- (void)clearPendingFollowUpItemsWithCompletion:(id /* block */)arg1;
- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)countOfPendingFollowUpItemsWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)initWithClientIdentifier:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pendingFollowUpItemsWithCompletion:(id /* block */)arg1;
- (void)postFollowUpItem:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end