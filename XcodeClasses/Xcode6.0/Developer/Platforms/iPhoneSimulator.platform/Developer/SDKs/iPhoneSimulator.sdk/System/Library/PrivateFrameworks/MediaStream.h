//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
// UUID: B48D4466-224C-3B17-8060-14ED9BF6B848
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 268.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol MSASPlatform <NSObject>
- (_Bool)MSASPersonIDIsAllowedToDownloadAssets:(NSString *)arg1;
- (_Bool)MSASIsAllowedToUploadAssets;
- (_Bool)MSASIsAllowedToTransferMetadata;
- (NSArray *)personIDsEnabledForAlbumSharing;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(NSString *)arg1;
- (NSURL *)baseSharingURLForPersonID:(NSString *)arg1;
- (Class)pluginClass;
- (NSString *)pathAlbumSharingDir;
- (MSAlbumSharingDaemon *)albumSharingDaemon;
- (void)logLevel:(int)arg1 personID:(NSString *)arg2 albumGUID:(NSString *)arg3 format:(NSString *)arg4;
- (_Bool)shouldLogAtLevel:(int)arg1;

@optional
- (NSDictionary *)MMCSUploadSocketOptionsForPersonID:(NSString *)arg1;
- (NSDictionary *)MMCSDownloadSocketOptionsForPersonID:(NSString *)arg1;
- (NSDictionary *)metadataSocketOptionsForPersonID:(NSString *)arg1;
- (_Bool)personIDEnabledForAlbumSharing:(NSString *)arg1;
- (_Bool)shouldEnableNewFeatures;
- (_Bool)deviceHasEnoughDiskSpaceRemainingToOperate;
- (_Bool)shouldDownloadEarliestPhotosFirst;
- (int)MMCSConcurrentConnectionsCount;
- (void)setSuppressCellular:(_Bool)arg1;
@end

@protocol MSDaemonProtocols <NSObject>
- (void)forgetEverythingForPersonID:(NSString *)arg1;
- (void)unpauseForUUID:(NSString *)arg1;
- (void)pauseForUUID:(NSString *)arg1;
- (void)abortAllActivityForPersonID:(NSString *)arg1;
- (void)resetServerStateForPersonID:(NSString *)arg1;
- (void)refreshServerSideConfigurationForPersonID:(NSString *)arg1;
- (void)serverSideConfigurationForPersonID:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(NSString *)arg1;
- (void)retryOutstandingActivities;
- (void)pollForSubscriptionUpdatesForPersonID:(NSString *)arg1;
- (void)deleteAssetCollections:(NSArray *)arg1 personID:(NSString *)arg2;
- (void)dequeueAssetCollectionWithGUIDs:(NSArray *)arg1 personID:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)enqueueAssetCollections:(NSArray *)arg1 personID:(NSString *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)isBusyCompletionBlock:(void (^)(_Bool))arg1;
@end

@protocol MSPlatform <NSObject>
- (MSMediaStreamDaemon *)theDaemon;
- (NSString *)authTokenForPersonID:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg1;
- (NSDictionary *)socketOptions;
- (_Bool)policyMayDownload;
- (_Bool)policyMayUpload;
- (NSString *)appBundleInfoString;
- (NSString *)OSString;
- (NSString *)hardwareString;
- (NSString *)UDID;
- (Class)sharingPluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (NSString *)pathMediaStreamDir;
- (NSString *)fullNameFromFirstName:(NSString *)arg1 lastName:(NSString *)arg2;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(NSString *)arg6 args:(struct __va_list_tag [1])arg7;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(NSString *)arg3 args:(struct __va_list_tag [1])arg4;
- (_Bool)shouldLogAtLevel:(int)arg1;

@optional
- (_Bool)isPerformanceLoggingEnabled;
- (NSURL *)contentURLForPersonID:(NSString *)arg1;
- (_Bool)shouldEnableNewFeatures;
- (NSData *)pushToken;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (_Bool)policyMaySendDelete;
- (void)didDetectUnrecoverableCondition;
- (Class)deletePluginClass;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol XPCNSClientConnectionDelegate <NSObject>
- (void)XPCNSClientConnection:(XPCNSClientConnection *)arg1 didReceiveRequest:(XPCNSRequest *)arg2;
@end

@interface MSAMNotificationInfo : NSObject
{
    MSAlertManager *_owner;
    NSString *_personID;
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_runLoopSource;
    CDUnknownBlockType _completionBlock;
}

+ (id)info;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) __weak MSAlertManager *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) struct __CFUserNotification *userNotification;
@property(nonatomic) struct __CFRunLoopSource *runLoopSource;

@end

@interface MSASConnection : NSObject <XPCNSClientConnectionDelegate>
{
    XPCNSClientConnection *_connection;
    XPCNSClientConnection *_noWakeConnection;
    NSMutableDictionary *_foregroundPingTimerContextByPersonID;
    NSMutableDictionary *_focusAlbumTimerByPersonID;
    NSMutableDictionary *_focusAlbumGUIDByPersonID;
    NSMutableDictionary *_serverSideConfigurationDictionaryByPersonID;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

+ (id)sharedConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSMutableDictionary *serverSideConfigurationDictionaryByPersonID; // @synthesize serverSideConfigurationDictionaryByPersonID=_serverSideConfigurationDictionaryByPersonID;
@property(retain, nonatomic) NSMutableDictionary *focusAlbumGUIDByPersonID; // @synthesize focusAlbumGUIDByPersonID=_focusAlbumGUIDByPersonID;
@property(retain, nonatomic) NSMutableDictionary *focusAlbumTimerByPersonID; // @synthesize focusAlbumTimerByPersonID=_focusAlbumTimerByPersonID;
@property(retain, nonatomic) NSMutableDictionary *foregroundPingTimerContextByPersonID; // @synthesize foregroundPingTimerContextByPersonID=_foregroundPingTimerContextByPersonID;
@property(retain, nonatomic) XPCNSClientConnection *noWakeConnection; // @synthesize noWakeConnection=_noWakeConnection;
@property(retain, nonatomic) XPCNSClientConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)XPCNSClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)forgetEverythingAboutPersonID:(id)arg1;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(_Bool)arg3 info:(id)arg4;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)addAlbum:(id)arg1 personID:(id)arg2;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2 info:(id)arg3;
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2;
- (void)serverSideConfigurationDictionaryForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)commentWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)commentGUIDsForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)isAssetCollectionWithGUID:(id)arg1 markedAsUnviewedPersonID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned long long)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)videoURLForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)assetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)assetCollectionGUIDsInAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)invitationGUIDsForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)accessControlWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)accessControlGUIDsForAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)albumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)albumGUIDsForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;
- (void)setFocusAlbum:(id)arg1 forPersonID:(id)arg2;
- (void)setIsUIForeground:(_Bool)arg1 forPersonID:(id)arg2;
- (void)timerPingQueueForegroundPingTimerExpiredContext:(id)arg1 personID:(id)arg2;
- (void)pingForeground;
- (void)timerPingQueueSendSetUIForeground:(_Bool)arg1 personID:(id)arg2;
- (void)activityIsThrottledByLackOfDiskSpacePersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)assetsInDownloadQueueCountForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)isBusyCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handlePushNotificationForPersonID:(id)arg1;
- (void)cancelActivitiesForPersonID:(id)arg1;
- (void)retryOutstandingActivitiesForPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (void)isInRetryStateHandler:(CDUnknownBlockType)arg1;
- (void)nextActivityDateHandler:(CDUnknownBlockType)arg1;
- (id)_cloneArray:(id)arg1;
- (void)_sendMessageReliably:(id)arg1;
- (id)_communicationFailureError;
- (void)_sendMessageReliably:(id)arg1 data:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface MSASPlatformImplementation : NSObject <MSASPlatform>
{
}

- (_Bool)shouldEnableNewFeatures;
- (int)MMCSConcurrentConnectionsCount;
- (id)personIDsEnabledForAlbumSharing;
- (_Bool)personIDEnabledForAlbumSharing:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (_Bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (_Bool)MSASIsAllowedToUploadAssets;
- (_Bool)MSASIsAllowedToTransferMetadata;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (_Bool)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)baseSharingURLForPersonID:(id)arg1;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (Class)pluginClass;
- (id)pathAlbumSharingDir;
- (id)albumSharingDaemon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface MSAlertManager : NSObject
{
    NSMutableDictionary *_personIDToNotification;
}

+ (id)sharedAlertManager;
- (void).cxx_destruct;
- (void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_showNotificationInfo:(id)arg1;
- (void)_dismissNotificationForPersonID:(id)arg1;
- (void)_userDidRespondToNotification:(struct __CFUserNotification *)arg1 info:(id)arg2 responseFlags:(unsigned long long)arg3;
- (id)init;

@end

@interface MSAuthenticationManager : NSObject
{
    int _state;
    MSAlertManager *_alertManager;
    int _bagRefetchCount;
    _Bool _isListeningToKeybagChanges;
    int _keybagChangeNotifyToken;
}

+ (id)sharedManager;
@property(nonatomic) int keybagChangeNotifyToken; // @synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken;
@property(nonatomic) _Bool isListeningToKeybagChanges; // @synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isWaitingForAuth) _Bool waitingForAuth;
- (void)rearmAuthenticationAlert;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2;
- (id)_accountForPersonID:(id)arg1;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1;

@end

@interface MSBatteryPowerMonitor : NSObject
{
    _Bool _isExternalPowerConnected;
}

+ (id)defaultMonitor;
@property(readonly, nonatomic) _Bool isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;
- (double)batteryPercentRemaining;

@end

@interface MSClientSidePauseContext : NSObject
{
    NSString *_UUID;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSXPCConnection *_server;
    MSTimerGate *_gate;
}

@property(retain, nonatomic) MSTimerGate *gate; // @synthesize gate=_gate;
@property(retain, nonatomic) NSXPCConnection *server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
- (void).cxx_destruct;
- (void)timerQueuePing;
- (void)timerQueueTimerFired;
- (void)resume;
- (id)initWithServer:(id)arg1;

@end

@interface MSConnection : NSObject
{
    NSXPCConnection *_center;
    NSXPCConnection *_noWakeCenter;
    NSMutableDictionary *_serverSideConfig;
    NSObject<OS_dispatch_queue> *_serverSideConfigQueue;
    int _serverSideConfigNotificationToken;
}

+ (id)sharedConnection;
- (void).cxx_destruct;
- (id)_machErrorWithUnderlyingError:(id)arg1;
- (_Bool)isBusy;
- (void)isBusyCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resume:(id)arg1;
- (id)pause;
- (void)abortActivitiesForPersonID:(id)arg1;
- (void)resetServerStateForPersonID:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (void)forgetPersonID:(id)arg1;
- (void)handleSubscriptionPushForPersonID:(id)arg1;
- (void)checkForOutstandingActivities;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (void)deleteAssetCollections:(id)arg1 personID:(id)arg2;
- (_Bool)dequeueAssetCollectionWithGUIDs:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (_Bool)enqueueAssetCollections:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (void)dealloc;
- (id)init;
- (void)_waitForMessageToBeSent;

@end

@interface MSMSPlatform : NSObject <MSPlatform>
{
    _Bool _isPerfLoggingEnabled;
    NSData *_pushToken;
}

+ (id)thePlatform;
@property(nonatomic) _Bool isPerfLoggingEnabled; // @synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (id)theDaemon;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (_Bool)shouldEnableNewFeatures;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)contentURLForPersonID:(id)arg1;
- (id)baseURLForPersonID:(id)arg1;
- (id)authTokenForPersonID:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (void)didDetectUnrecoverableCondition;
- (id)socketOptions;
- (_Bool)policyMayDownload;
- (_Bool)policyMayUpload;
- (_Bool)_mayPerformFileTransfer;
- (id)appBundleInfoString;
- (id)OSString;
- (id)hardwareString;
- (id)OSVersion;
- (id)UDID;
- (Class)deletePluginClass;
- (Class)sharingPluginClass;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (id)pathMediaStreamDir;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (void)_rereadDefaults;
- (_Bool)isPerformanceLoggingEnabled;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (struct __CFString *)_facilityStringForFacility:(int)arg1;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface MSPBTimerContext : NSObject
{
    _Bool _isValid;
    NSDate *_date;
}

+ (id)contextWithDate:(id)arg1;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
- (void).cxx_destruct;
- (id)init;

@end

@interface MSPauseManager : NSObject
{
    NSMutableDictionary *_UUIDToTimerMap;
    id <MSPauseManagerDelegate> _delegate;
}

+ (id)sharedManager;
@property(nonatomic) __weak id <MSPauseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unpauseUUID:(id)arg1;
- (void)_timerDidFire:(id)arg1;
- (void)_removeTimerUUID:(id)arg1;
- (void)pingPauseUUID:(id)arg1;
- (void)_addPauseUUID:(id)arg1;
- (_Bool)isPaused;
- (void)dealloc;
- (id)init;

@end

@interface MSPowerAssertionManager : NSObject
{
    _Bool _isAssertingPowerAssertion;
    _Bool _isBusy;
    int _busyCount;
    int _UIBusyCount;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(nonatomic) _Bool isAssertingPowerAssertion; // @synthesize isAssertingPowerAssertion=_isAssertingPowerAssertion;
@property(nonatomic) int UIBusyCount; // @synthesize UIBusyCount=_UIBusyCount;
@property(nonatomic) int busyCount; // @synthesize busyCount=_busyCount;
- (void)toggleAssertion;
- (void)_recomputePowerAssertion;
- (void)_deassertPowerAssertion;
- (void)_assertPowerAssertion;
- (void)releaseUIBusy;
- (void)retainUIBusy;
- (void)releaseBusy;
- (void)retainBusy;

@end

@interface MSPowerBudget : NSObject
{
    _Bool _workQueueIsFileTransferAllowed;
    _Bool _workQueueIsExternalPowered;
    _Bool _workQueueIsForeground;
    id <MSPowerBudgetDelegate> _delegate;
    double _maxActiveTimeAfterPush;
    double _maxActiveTimeAfterLossOfForeground;
    double _maxActiveTimeAfterGlobalResetSync;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSString *_personID;
    MSPBTimerContext *_workQueuePushTimerContext;
    MSPBTimerContext *_workQueuePostForegroundTimerContext;
    MSPBTimerContext *_workQueueGlobalResetSyncTimerContext;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext; // @synthesize workQueueGlobalResetSyncTimerContext=_workQueueGlobalResetSyncTimerContext;
@property(retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext; // @synthesize workQueuePostForegroundTimerContext=_workQueuePostForegroundTimerContext;
@property(retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext; // @synthesize workQueuePushTimerContext=_workQueuePushTimerContext;
@property(nonatomic, setter=workQueueSetForeground:) _Bool workQueueIsForeground; // @synthesize workQueueIsForeground=_workQueueIsForeground;
@property(nonatomic, setter=workQueueSetExternalPowered:) _Bool workQueueIsExternalPowered; // @synthesize workQueueIsExternalPowered=_workQueueIsExternalPowered;
@property(nonatomic, setter=workQueueSetFileTransferAllowed:) _Bool workQueueIsFileTransferAllowed; // @synthesize workQueueIsFileTransferAllowed=_workQueueIsFileTransferAllowed;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;
@property(retain, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;
@property(nonatomic) __weak id <MSPowerBudgetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (void)didEndExternalPower;
- (void)didBeginExternalPower;
- (void)didReceiveGlobalResetSync;
- (void)didEndForegroundFocus;
- (void)didBeginForegroundFocus;
- (void)didReceivePushNotification;
- (void)workQueueCommitPersistedValues;
- (void)setIsFileTransferAllowed:(_Bool)arg1;
- (void)workQueueSetIsFileTransferAllowed:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hasActiveTimers;
@property(readonly, nonatomic, getter=hasForegroundFocus) _Bool foregroundFocus;
@property(readonly, nonatomic, getter=isFileTransferAllowed) _Bool fileTransferAllowed;
- (void)workQueueRecomputeFileTransferAllowed;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
@property(nonatomic) double maxActiveTimeAfterLossOfForeground; // @synthesize maxActiveTimeAfterLossOfForeground=_maxActiveTimeAfterLossOfForeground;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
@property(nonatomic) double maxActiveTimeAfterGlobalResetSync; // @synthesize maxActiveTimeAfterGlobalResetSync=_maxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterPush;
@property(nonatomic) double maxActiveTimeAfterPush; // @synthesize maxActiveTimeAfterPush=_maxActiveTimeAfterPush;
- (void)shutDown;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetPushTimerDate:(id)arg1;
- (id)init;

@end

@interface NSString (MSMSStringUtilities)
+ (id)MSMSUserDirectory;
@end
