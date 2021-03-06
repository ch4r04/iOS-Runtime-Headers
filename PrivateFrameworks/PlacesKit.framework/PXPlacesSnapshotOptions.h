/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesSnapshotOptions : NSObject {
    NSString * _cacheDirectoryPath;
    PKExtendedTraitCollection * _extendedTraitCollection;
    <PXPlacesMapGeotaggableInfoDelegate> * _geotaggableInformationDelegate;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _shouldSkipSyncCachedImage;
    unsigned int  _snapshotMapType;
    struct CGSize { 
        float width; 
        float height; 
    }  _viewSize;
    double  _visibleDistance;
}

@property (nonatomic, retain) NSString *cacheDirectoryPath;
@property (nonatomic, retain) PKExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic, retain) <PXPlacesMapGeotaggableInfoDelegate> *geotaggableInformationDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL shouldSkipSyncCachedImage;
@property (nonatomic) unsigned int snapshotMapType;
@property (nonatomic) struct CGSize { float x1; float x2; } viewSize;
@property (nonatomic) double visibleDistance;

- (void).cxx_destruct;
- (id)cacheDirectoryPath;
- (id)extendedTraitCollection;
- (id)geotaggableInformationDelegate;
- (id)init;
- (id)queue;
- (void)setCacheDirectoryPath:(id)arg1;
- (void)setExtendedTraitCollection:(id)arg1;
- (void)setGeotaggableInformationDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setShouldSkipSyncCachedImage:(BOOL)arg1;
- (void)setSnapshotMapType:(unsigned int)arg1;
- (void)setViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVisibleDistance:(double)arg1;
- (BOOL)shouldSkipSyncCachedImage;
- (unsigned int)snapshotMapType;
- (struct CGSize { float x1; float x2; })viewSize;
- (double)visibleDistance;

@end
