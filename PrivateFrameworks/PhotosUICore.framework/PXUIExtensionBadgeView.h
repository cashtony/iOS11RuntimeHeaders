/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIExtensionBadgeView : UIView {
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
    }  _badgeInfo;
    <PXUIExtensionBadgeViewDelegate> * _delegate;
    long long  _state;
}

@property (nonatomic) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; } badgeInfo;
@property (nonatomic) <PXUIExtensionBadgeViewDelegate> *delegate;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })badgeInfo;
- (id)delegate;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
