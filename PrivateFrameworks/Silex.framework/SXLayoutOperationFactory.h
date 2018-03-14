/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory> {
    <SXComponentSizerEngine> * _componentSizerEngine;
    SXDynamicAdController * _dynamicAdController;
}

@property (nonatomic, readonly) <SXComponentSizerEngine> *componentSizerEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXDynamicAdController *dynamicAdController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentSizerEngine;
- (id)dynamicAdController;
- (id)initWithComponentSizerEngine:(id)arg1 dynamicAdController:(id)arg2;
- (id)layoutOperationWithViewportSize:(struct CGSize { double x1; double x2; })arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3;

@end