/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate> {
    unsigned int  _bufferSize;
    double  _connectionTimeoutInterval;
    <CATRemoteConnectionDelegate> * _delegate;
    NSInputStream * _inputStream;
    NSString * _name;
    NSOutputStream * _outputStream;
    CATRemoteConnectionSocketOptions * _socketOptions;
    BOOL  _usesSSL;
    NSObject<OS_dispatch_source> * mConnectionTimeoutTimer;
    NSError * mInterruptionError;
    CATHTTPMessageParser * mMessageParser;
    int  mPeerTrustState;
    NSMutableArray * mPendingSendContexts;
    NSMutableData * mReadBuffer;
    int  mState;
    CATSerialOperationQueue * mStreamEventQueue;
    NSArray * mTrustedCertificates;
}

@property (nonatomic) unsigned int bufferSize;
@property (nonatomic) double connectionTimeoutInterval;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CATRemoteConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (nonatomic, readonly) struct __SecTrust { }*peerTrust;
@property (nonatomic, copy) CATRemoteConnectionSocketOptions *socketOptions;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesSSL;

+ (void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2;
+ (void)createConnectionPairWithConnection:(id*)arg1 andConnection:(id*)arg2 bufferSize:(unsigned int)arg3;

- (void).cxx_destruct;
- (void)_stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (unsigned int)bufferSize;
- (void)close;
- (void)configureStreamSocketOptions;
- (void)connectionDidInterruptWithError:(id)arg1;
- (void)connectionDidReceiveData;
- (void)connectionShouldSendData;
- (void)connectionTimedOut;
- (double)connectionTimeoutInterval;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidClose;
- (void)delegateDidFailToSendData:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidFailToSendDataWithStream:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidOpen;
- (void)delegateDidReceiveData:(id)arg1;
- (void)delegateDidReceiveDataRequestWithURL:(id)arg1;
- (void)delegateDidReceiveStreamData:(id)arg1 moreComing:(BOOL)arg2;
- (void)delegateDidSecure;
- (void)delegateDidSendData:(id)arg1 userInfo:(id)arg2;
- (void)delegateDidSendDataWithStream:(id)arg1 userInfo:(id)arg2;
- (void)delegateWillSecure;
- (id)description;
- (void)enqueueSendContext:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 bufferSize:(unsigned int)arg3;
- (id)initWithNetService:(id)arg1;
- (id)inputStream;
- (void)messageParser:(id)arg1 didParseRequestData:(id)arg2;
- (void)messageParser:(id)arg1 didParseRequestWithURL:(id)arg2;
- (void)messageParser:(id)arg1 didParseResponseData:(id)arg2 moreComing:(BOOL)arg3;
- (id)name;
- (void)open;
- (id)outputStream;
- (struct __SecTrust { }*)peerTrust;
- (void)scheduleStreams;
- (void)secureUsingClientIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (BOOL)secureUsingIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2 isServer:(BOOL)arg3;
- (void)secureUsingServerIdentity:(struct __SecIdentity { }*)arg1 trustedCertificates:(id)arg2;
- (void)sendData:(id)arg1 userInfo:(id)arg2;
- (void)sendDataWithStream:(id)arg1 length:(unsigned int)arg2 userInfo:(id)arg3;
- (void)sendDidFail:(id)arg1 withError:(id)arg2;
- (void)sendDidSucceed:(id)arg1;
- (void)setBufferSize:(unsigned int)arg1;
- (void)setConnectionTimeoutInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setSocketOptions:(id)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (id)socketOptions;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(BOOL)arg1;
- (void)tryEvaluatingPeerTrustWithStream:(id)arg1;
- (BOOL)trySendingDataWithContext:(id)arg1 error:(id*)arg2;
- (void)unscheduleStreams;
- (BOOL)usesSSL;

@end