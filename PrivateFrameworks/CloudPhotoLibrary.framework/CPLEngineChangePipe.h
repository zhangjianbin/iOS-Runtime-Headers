/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject, NSString;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(getter=isLocked) BOOL locked;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

- (id)allChangeBatches;
- (BOOL)appendChangeBatch:(id)arg1 error:(id*)arg2;
- (BOOL)compactChangeBatchesWithError:(id*)arg1;
- (unsigned int)countOfQueuedBatches;
- (BOOL)deleteAllChangeBatchesWithError:(id*)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (BOOL)isLocked;
- (BOOL)markChangesWithIdentifier:(id)arg1 withAlterationType:(unsigned int)arg2 error:(id*)arg3;
- (id)nextBatch;
- (id)popAllChangeBatchesWithError:(id*)arg1;
- (BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2;
- (BOOL)popNextBatchWithError:(id*)arg1;
- (void)setLocked:(BOOL)arg1;

@end