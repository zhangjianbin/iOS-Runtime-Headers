/* Generated by RuntimeBrowser.
 */

@protocol INPaymentMethodExport <NSObject, JSExport>

@required

- (INImage *)icon;
- (NSString *)identificationHint;
- (id)init;
- (NSString *)name;
- (void)setIcon:(INImage *)arg1;
- (void)setIdentificationHint:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end