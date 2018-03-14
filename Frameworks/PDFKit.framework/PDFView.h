/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFView : UIView <UIGestureRecognizerDelegate> {
    PDFViewPrivate * _private;
}

@property (nonatomic) bool autoScales;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) bool canGoBack;
@property (nonatomic, readonly) bool canGoForward;
@property (nonatomic, readonly) bool canGoToFirstPage;
@property (nonatomic, readonly) bool canGoToLastPage;
@property (nonatomic, readonly) bool canGoToNextPage;
@property (nonatomic, readonly) bool canGoToPreviousPage;
@property (nonatomic, readonly) bool canZoomIn;
@property (nonatomic, readonly) bool canZoomOut;
@property (nonatomic, readonly) PDFDestination *currentDestination;
@property (nonatomic, readonly) PDFPage *currentPage;
@property (nonatomic, retain) PDFSelection *currentSelection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PDFViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayBox;
@property (nonatomic) long long displayDirection;
@property (nonatomic) long long displayMode;
@property (nonatomic) bool displaysAsBook;
@property (nonatomic) bool displaysPageBreaks;
@property (nonatomic) bool displaysRTL;
@property (nonatomic, retain) PDFDocument *document;
@property (nonatomic, readonly) UIView *documentView;
@property (nonatomic) bool enableDataDetectors;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *highlightedSelections;
@property (nonatomic) long long interpolationQuality;
@property (nonatomic, readonly) bool isUsingPageViewController;
@property (nonatomic) double maxScaleFactor;
@property (nonatomic) double minScaleFactor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } pageBreakMargins;
@property (nonatomic) double scaleFactor;
@property (nonatomic, readonly) double scaleFactorForSizeToFit;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *visiblePages;

+ (void)EnableAnnotationKit;

- (void).cxx_destruct;
- (bool)PDFKitHandleBackTabInTextWidget:(id)arg1;
- (bool)PDFKitHandleTabInTextWidget:(id)arg1;
- (id)PDFLayout;
- (double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2;
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;
- (void)_commonInit;
- (void)_doNotQueryScaleFactor;
- (id)_dragItemsAtLocationInView:(struct CGPoint { double x1; double x2; })arg1;
- (void)_forceTileRefresh;
- (id)_getDocumentAKController;
- (void)_goToPage:(id)arg1 animated:(bool)arg2 withBackgroundUpdate:(bool)arg3;
- (bool)_hasDraggableSelectionAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_isOverWidgetAnnotation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_releaseDocument;
- (void)_setupPageViewController;
- (bool)_shouldHandleAnnotationAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_syncPageIndexToScrollView;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromPageToPageView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformFromPageViewToPage:(id)arg1;
- (double)_unboundAutoScaleFactorForPage:(id)arg1;
- (double)_unboundAutoScaleFactorForPageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateAnnotations;
- (void)_updateBookmarksForPages;
- (bool)akAnnotationEditingEnabled;
- (id)akOverlayAdaptor;
- (id)akRedoToolbarItem;
- (id)akToolbarView;
- (id)akToolbarViewItemTintColor;
- (id)akToolbarViewTintColor;
- (id)akUndoToolbarItem;
- (void)animateTransitionFromPage:(id)arg1 toPage:(id)arg2;
- (void)annotationsChangedOnPage:(id)arg1;
- (void)appendPasswordUI;
- (long long)areaOfInterestForMouse:(id)arg1;
- (long long)areaOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)autoScaleFactor;
- (double)autoScaleFactorForPage:(id)arg1;
- (double)autoScaleFactorForPageWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)autoScales;
- (bool)automaticallyHandleGutter;
- (id)backgroundColor;
- (void)beginPDFViewRotation;
- (void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;
- (bool)canBecomeFirstResponder;
- (bool)canGoBack;
- (bool)canGoForward;
- (bool)canGoToFirstPage;
- (bool)canGoToLastPage;
- (bool)canGoToNextPage;
- (bool)canGoToPreviousPage;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canZoomIn;
- (bool)canZoomOut;
- (void)clearLollipopMagnifier;
- (void)clearSelection;
- (void)clearTextSelectionHandles;
- (void)clearTextSelectionMagnifier;
- (void)colorWidgetBackgrounds:(bool)arg1;
- (void)constrainedScrollToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromPage:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toPage:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPage:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPage:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToRootView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPageLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRootViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toPageLayer:(id)arg2;
- (void)copy:(id)arg1;
- (id)currentDestination;
- (long long)currentHistoryIndex;
- (id)currentPage;
- (id)currentSelection;
- (void)dealloc;
- (double)defaultGutterWidth;
- (id)delegate;
- (id)determineCurrentPage;
- (long long)displayBox;
- (long long)displayDirection;
- (long long)displayMode;
- (bool)displaysAsBook;
- (bool)displaysBookmarksForPages;
- (bool)displaysMarkupAnnotations;
- (bool)displaysPageBreaks;
- (bool)displaysRTL;
- (bool)doPeriodicFlush;
- (id)document;
- (void)documentDidBeginWrite:(id)arg1;
- (void)documentDidEndWrite:(id)arg1;
- (id)documentScrollView;
- (id)documentView;
- (id)documentViewController;
- (void)documentWasUnlocked;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(bool)arg2;
- (void)drawPage:(id)arg1 toContext:(struct CGContext { }*)arg2;
- (void)drawPagePost:(id)arg1 toContext:(struct CGContext { }*)arg2;
- (bool)enableDataDetectors;
- (bool)enableSelectionDrawing;
- (void)enableTextSelectionHandles;
- (void)encodeWithCoder:(id)arg1;
- (void)endEditingAnnotation;
- (void)endPDFViewRotation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendedRootViewBounds;
- (void)findVisiblePages;
- (bool)flipsTileContents;
- (void)forceWebKitMainThread:(bool)arg1;
- (void)gestureInit;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)goBack:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goToDestination:(id)arg1;
- (void)goToDestinationNoPush:(id)arg1;
- (void)goToFirstPage:(id)arg1;
- (void)goToLastPage:(id)arg1;
- (void)goToNextPage:(id)arg1;
- (void)goToPage:(id)arg1;
- (void)goToPage:(id)arg1 animated:(bool)arg2;
- (void)goToPageNoPush:(id)arg1;
- (void)goToPageNoPush:(id)arg1 animated:(bool)arg2;
- (void)goToPageWithoutBackgroundUpdate:(id)arg1;
- (void)goToPreviousPage:(id)arg1;
- (void)goToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2;
- (void)goToSelection:(id)arg1;
- (double)greekingThreshold;
- (double)gutterWidth;
- (bool)handleBackTabInTextWidget:(id)arg1;
- (bool)handleTabInTextWidget:(id)arg1;
- (id)highlightedSelections;
- (void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2;
- (id)history;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interactWithAnnotation:(id)arg1;
- (void)internalSetScaleFactor:(double)arg1;
- (long long)interpolationQuality;
- (bool)isDrawingAccessibilityNodeType:(int)arg1;
- (bool)isForcingWebKitMainThread;
- (bool)isOverLinkAnnotation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)isRectVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onPage:(id)arg2;
- (bool)isUsingPageViewController;
- (unsigned long long)lastPageIndex;
- (void)layoutDocumentView;
- (double)lineWidthThreshold;
- (id)longPressGestureRecognizer;
- (double)maxScaleFactor;
- (double)minScaleFactor;
- (id)nextPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedPageBounds:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pageBreakMargins;
- (id)pageColor;
- (id)pageForPoint:(struct CGPoint { double x1; double x2; })arg1 nearest:(bool)arg2;
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;
- (double)pageViewHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })pageViewSizeForPage:(id)arg1;
- (id)panGestureRecognizer;
- (void)pdfViewDidChangePage:(id)arg1;
- (void)pdfViewDidChangeScale:(id)arg1;
- (void)performAction:(id)arg1;
- (void)performBeep;
- (void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
- (id)popupManager;
- (void)positionInternalViews:(id)arg1;
- (id)previousPage;
- (void)pushDestination:(id)arg1;
- (void)reflectNewPageOn;
- (void)removeActiveAnnotation;
- (void)removeFromSuperview;
- (void)removePasswordUI;
- (id)renderingProperties;
- (void)resizeDisplayView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootViewBounds;
- (struct CGSize { double x1; double x2; })rowSizeForPage:(id)arg1;
- (double)scaleFactor;
- (double)scaleFactorForSizeToFit;
- (void)scrollByPage:(bool)arg1;
- (void)scrollHorizontalBy:(double)arg1;
- (struct CGPoint { double x1; double x2; })scrollOriginForPageTopLeft:(id)arg1;
- (void)scrollSelectionToVisible:(id)arg1;
- (void)scrollVerticalBy:(double)arg1;
- (void)scrollViewSaysPageMayHaveChanged:(id)arg1;
- (bool)scrollingChangesPages;
- (void)selectAll:(id)arg1;
- (void)selfDidResize:(id)arg1;
- (void)setAkAnnotationEditingEnabled:(bool)arg1;
- (void)setAkToolbarViewItemTintColor:(id)arg1;
- (void)setAkToolbarViewTintColor:(id)arg1;
- (void)setAutoScales:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentSelection:(id)arg1;
- (void)setCurrentSelection:(id)arg1 animate:(bool)arg2;
- (void)setCurrentSelectionNoClear:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayBox:(long long)arg1;
- (void)setDisplayDirection:(long long)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)setDisplaysAsBook:(bool)arg1;
- (void)setDisplaysBookmarksForPages:(bool)arg1;
- (void)setDisplaysPageBreaks:(bool)arg1;
- (void)setDisplaysRTL:(bool)arg1;
- (void)setDoPeriodicFlush:(bool)arg1;
- (void)setDocument:(id)arg1;
- (void)setDocument:(id)arg1 waitDuration:(double)arg2;
- (void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2;
- (void)setEnableDataDetectors:(bool)arg1;
- (void)setEnablePageShadows:(bool)arg1;
- (void)setEnableSelectionDrawing:(bool)arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setForcesTopAlignment:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGreekingThreshold:(double)arg1;
- (void)setGutterWidth:(double)arg1;
- (void)setHighlightedSelections:(id)arg1;
- (void)setInterpolationQuality:(long long)arg1;
- (void)setLineWidthThreshold:(double)arg1;
- (void)setLollipopMagnifierPage:(id)arg1 forPagePoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setMaxScaleFactor:(double)arg1;
- (void)setMinScaleFactor:(double)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2;
- (void)setPageBreakMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPageColor:(id)arg1;
- (void)setPopupManager:(id)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setScaleFactor:(double)arg1 anchorPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setScrollingChangesPages:(bool)arg1;
- (void)setShouldAntiAlias:(bool)arg1;
- (void)setShowsScrollIndicators:(bool)arg1;
- (void)setTextSelectionMagnifierPage:(id)arg1 forPagePoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setUsesPageLabels:(bool)arg1;
- (bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;
- (bool)shouldAntiAlias;
- (void)showTextSelectionMenuIfPossible;
- (bool)showsScrollIndicators;
- (void)startEditingTextWidgetAnnotation:(id)arg1;
- (id)swipeGestureRecognizer;
- (void)syncPageIndexToScrollView;
- (void)takeBackgroundColorFrom:(id)arg1;
- (void)takePasswordFrom:(id)arg1;
- (id)tapGestureRecognizer;
- (void)updateCurrentPageUsingViewCenter;
- (void)usePageViewController:(bool)arg1 withViewOptions:(id)arg2;
- (bool)usesPageLabels;
- (id)viewForPage:(id)arg1;
- (id)visiblePageViews;
- (id)visiblePages;
- (void)zoomIn:(id)arg1;
- (void)zoomOut:(id)arg1;

@end
