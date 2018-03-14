/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppInfo : NSObject <NSCopying> {
    NSString * _bundleId;
    NSNumber * _genreId;
    NSDate * _installDate;
    bool  _isExtension;
    NSDate * _lastLaunch;
    NSDate * _lastSpotlightLaunch;
    NSArray * _subGenreIds;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSNumber *genreId;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic) bool isExtension;
@property (nonatomic, copy) NSDate *lastLaunch;
@property (nonatomic, copy) NSDate *lastSpotlightLaunch;
@property (nonatomic, copy) NSArray *subGenreIds;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)genreId;
- (id)init;
- (id)initWithBundleId:(id)arg1;
- (id)initWithBundleId:(id)arg1 isExtension:(bool)arg2;
- (id)initWithBundleId:(id)arg1 isExtension:(bool)arg2 installDate:(id)arg3 genreId:(id)arg4 subGenreIds:(id)arg5;
- (id)initWithBundleId:(id)arg1 isExtension:(bool)arg2 installDate:(id)arg3 lastLaunch:(id)arg4 lastSpotlightLaunch:(id)arg5 genreId:(id)arg6 subGenreIds:(id)arg7;
- (id)installDate;
- (bool)isExtension;
- (id)lastLaunch;
- (id)lastSpotlightLaunch;
- (void)setBundleId:(id)arg1;
- (void)setGenreId:(id)arg1;
- (void)setInstallDate:(id)arg1;
- (void)setIsExtension:(bool)arg1;
- (void)setLastLaunch:(id)arg1;
- (void)setLastSpotlightLaunch:(id)arg1;
- (void)setSubGenreIds:(id)arg1;
- (id)subGenreIds;

@end
