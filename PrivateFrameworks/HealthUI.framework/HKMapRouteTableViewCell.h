/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMapRouteTableViewCell : UITableViewCell <MKMapViewDelegate> {
    MKMapView * _mapView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MKMapView *mapView;
@property (readonly) Class superclass;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)mapView;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)setMapView:(id)arg1;
- (void)setUpConstraints;
- (void)setUpSubviews;

@end