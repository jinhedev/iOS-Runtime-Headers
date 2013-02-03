/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKIsPushEnabledRequest : GKDataRequest {
    BOOL _pushEnabled;
}

@property BOOL pushEnabled;

- (BOOL)authenticationRequired;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (BOOL)pushEnabled;
- (void)setPushEnabled:(BOOL)arg1;

@end