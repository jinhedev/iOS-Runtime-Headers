/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementConsistencyData : NSObject {
    unsigned int  _backoffLevel;
    NSDictionary * _cleanupActionsByAID;
    NSDictionary * _passStateByAID;
    NSArray * _registeredRegions;
    NSDictionary * _secureElementAppletStateByAID;
}

@property (nonatomic) unsigned int backoffLevel;
@property (nonatomic, copy) NSDictionary *cleanupActionsByAID;
@property (nonatomic, copy) NSDictionary *passStateByAID;
@property (nonatomic, copy) NSArray *registeredRegions;
@property (nonatomic, copy) NSDictionary *secureElementAppletStateByAID;

+ (id)consistencyDataWithPaymentApplications:(id)arg1 secureElementApplets:(id)arg2 cleanupActions:(id)arg3 registeredRegions:(id)arg4;

- (void).cxx_destruct;
- (unsigned int)backoffLevel;
- (id)cleanupActionsByAID;
- (id)dictionaryRepresentation;
- (id)passStateByAID;
- (id)registeredRegions;
- (id)secureElementAppletStateByAID;
- (void)setBackoffLevel:(unsigned int)arg1;
- (void)setCleanupActionsByAID:(id)arg1;
- (void)setPassStateByAID:(id)arg1;
- (void)setRegisteredRegions:(id)arg1;
- (void)setSecureElementAppletStateByAID:(id)arg1;

@end
