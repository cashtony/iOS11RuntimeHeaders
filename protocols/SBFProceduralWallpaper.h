/* Generated by RuntimeBrowser.
 */

@protocol SBFProceduralWallpaper <NSObject>

@required

+ (NSString *)identifier;

- (void)setAnimating:(bool)arg1;
- (UIView *)view;

@optional

+ (bool)colorChangesSignificantly;
+ (NSArray *)presetWallpaperOptions;
+ (NSString *)representativeThumbnailImageName;
+ (UIImage *)thumbnailImageForOptions:(NSDictionary *)arg1;
+ (NSString *)thumbnailImageName;

- (UIColor *)averageColorForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (UIColor *)averageLifetimeColor;
- (struct __IOSurface { }*)copyBlurForRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (struct __IOSurface { }*)copySnapshotImageForRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (<SBFProceduralWallpaperDelegate> *)delegate;
- (void)setDelegate:(id <SBFProceduralWallpaperDelegate>)arg1;
- (void)setWallpaperOptions:(NSDictionary *)arg1;
- (void)setWallpaperVariant:(long long)arg1;
- (void)startComputingAverageColorForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startGeneratingBlursForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)stopComputingAverageColor;
- (void)stopGeneratingBlurs;

@end
