/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSXPCConnection;

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activeBehaviorOverridesChangeHandler;

    NSXPCConnection *_connection;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _filteringStateChangeHandler;

}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)clientInterface;

- (void)activeBehaviorOverrideTypesChanged:(unsigned int)arg1 source:(unsigned int)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)notificationPresentationFilteringChangedToEnabled:(BOOL)arg1;
- (void)setActiveBehaviorOverridesChangeHandler:(id)arg1;
- (void)setFilteringStateChangeHandler:(id)arg1;
- (void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(id)arg3;

@end