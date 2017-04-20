/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAWDLogEventObserver : NSObject <HMDLogEventObserver> {
    unsigned int  _dataSyncState;
    NSMutableDictionary * _errorToCountMap;
    unsigned int  _fetchCount;
    BOOL  _hasDecryptionFailed;
    BOOL  _lastDecryptionFailed;
    unsigned int  _pushCount;
    NSMutableDictionary * _reasonToCountMap;
    unsigned int  _uploadCount;
    unsigned int  _uploadErrorCount;
    BOOL  _uploadMaximumDelayReached;
}

@property (nonatomic) unsigned int dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *errorToCountMap;
@property (nonatomic) unsigned int fetchCount;
@property (nonatomic) BOOL hasDecryptionFailed;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL lastDecryptionFailed;
@property (nonatomic) unsigned int pushCount;
@property (nonatomic, retain) NSMutableDictionary *reasonToCountMap;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int uploadCount;
@property (nonatomic) unsigned int uploadErrorCount;
@property (nonatomic) BOOL uploadMaximumDelayReached;

+ (void)_submitAWDMetric:(id)arg1 type:(unsigned int)arg2;
+ (void)initialize;
+ (id)sharedAWDServerConnection;
+ (id)stringForMetricType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)clearCloudSyncMetrics;
- (unsigned int)dataSyncState;
- (void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2;
- (id)errorToCountMap;
- (unsigned int)fetchCount;
- (id)getTop:(int)arg1 dictionary:(id)arg2;
- (BOOL)hasDecryptionFailed;
- (id)init;
- (BOOL)lastDecryptionFailed;
- (void)processCloudEvent:(id)arg1;
- (unsigned int)pushCount;
- (id)reasonToCountMap;
- (void)setDataSyncState:(unsigned int)arg1;
- (void)setErrorToCountMap:(id)arg1;
- (void)setFetchCount:(unsigned int)arg1;
- (void)setHasDecryptionFailed:(BOOL)arg1;
- (void)setLastDecryptionFailed:(BOOL)arg1;
- (void)setPushCount:(unsigned int)arg1;
- (void)setReasonToCountMap:(id)arg1;
- (void)setUploadCount:(unsigned int)arg1;
- (void)setUploadErrorCount:(unsigned int)arg1;
- (void)setUploadMaximumDelayReached:(BOOL)arg1;
- (void)submitCloudSyncMetric;
- (unsigned int)uploadCount;
- (unsigned int)uploadErrorCount;
- (BOOL)uploadMaximumDelayReached;

@end