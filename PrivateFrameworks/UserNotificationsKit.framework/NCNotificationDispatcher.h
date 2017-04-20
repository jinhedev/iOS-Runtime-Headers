/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationDispatcher : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate> {
    NCNotificationAlertQueue * _alertQueue;
    <NCAlertingController> * _alertingController;
    <NCNotificationDispatcherDelegate> * _delegate;
    NCNotificationDestinationsRegistry * _destinationsRegistry;
    NCNotificationStore * _notificationStore;
    NSMutableDictionary * _sectionSettings;
    NSHashTable * _sourceDelegates;
}

@property (nonatomic, retain) NCNotificationAlertQueue *alertQueue;
@property (nonatomic, retain) <NCAlertingController> *alertingController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationDispatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDestinationsRegistry *destinationsRegistry;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NCNotificationStore *notificationStore;
@property (nonatomic, retain) NSMutableDictionary *sectionSettings;
@property (nonatomic, retain) NSHashTable *sourceDelegates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isRegisteredDestination:(id)arg1;
- (void)_performOperationForRequestDestinations:(id)arg1 block:(id /* block */)arg2;
- (void)_registerAlertDestination:(id)arg1;
- (void)_registerDestination:(id)arg1;
- (void)addDispatcherSourceDelegate:(id)arg1;
- (id)alertQueue;
- (id)alertingController;
- (id)delegate;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(id /* block */)arg2;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (id)destinationsRegistry;
- (id)init;
- (id)initWithAlertingController:(id)arg1;
- (void)modifyNotificationWithRequest:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)notificationStore;
- (void)postNotificationWithRequest:(id)arg1;
- (void)registerDestination:(id)arg1;
- (void)removeDispatcherSourceDelegate:(id)arg1;
- (void)removeNotificationSectionWithIdentifier:(id)arg1;
- (id)sectionSettings;
- (void)setAlertQueue:(id)arg1;
- (void)setAlertingController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(BOOL)arg2;
- (void)setDestinationsRegistry:(id)arg1;
- (void)setNotificationStore:(id)arg1;
- (void)setSectionSettings:(id)arg1;
- (void)setSourceDelegates:(id)arg1;
- (id)sourceDelegates;
- (void)unregisterDestination:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationWithRequest:(id)arg1;

@end