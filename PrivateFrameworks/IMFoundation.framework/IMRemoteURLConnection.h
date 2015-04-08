/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>, NSString, NSURLRequest;

@interface IMRemoteURLConnection : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSString *_bundleIdentifierForDataUsage;
    BOOL _cancelled;
    NSObject<OS_xpc_object> *_connection;
    BOOL _forceCellularIfPossible;
    BOOL _loading;
    NSURLRequest *_request;
    BOOL _requireIDSHost;
    int _retries;
}

@property(retain) NSString * bundleIdentifierForDataUsage;
@property BOOL forceCellularIfPossible;
@property BOOL requireIDSHost;

- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (id)bundleIdentifierForDataUsage;
- (void)cancel;
- (void)dealloc;
- (BOOL)forceCellularIfPossible;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id)arg2;
- (void)load;
- (BOOL)requireIDSHost;
- (void)setBundleIdentifierForDataUsage:(id)arg1;
- (void)setForceCellularIfPossible:(BOOL)arg1;
- (void)setRequireIDSHost:(BOOL)arg1;

@end