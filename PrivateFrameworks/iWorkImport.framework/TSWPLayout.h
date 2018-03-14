/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPLayout : TSDLayout <TSWPLayoutOwner, TSWPLayoutTarget> {
    NSMutableArray * _columns;
    TSWPLayoutManager * _layoutManager;
    bool  _textLayoutValid;
}

@property (nonatomic, readonly) bool allowsDescendersToClip;
@property (nonatomic, readonly) bool allowsLastLineTruncation;
@property (nonatomic, readonly) bool alwaysAllowWordSplit;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic, retain) NSMutableArray *anchoredDrawablesForRelayout;
@property (nonatomic, readonly) unsigned int autosizeFlags;
@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly, retain) NSMutableArray *columns;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (nonatomic, readonly) <TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct __CFLocale { }*hyphenationLocale;
@property (nonatomic, readonly) bool ignoresEquationAlignment;
@property (nonatomic, readonly) TSDBezierPath *interiorClippingPath;
@property (nonatomic, readonly) bool layoutIsValid;
@property (nonatomic, readonly) TSWPLayoutManager *layoutManager;
@property (nonatomic, readonly) unsigned int lineCount;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } maskRect;
@property (nonatomic, readonly) double maxAnchorY;
@property (nonatomic, readonly) unsigned int maxLineCount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, readonly) unsigned int naturalAlignment;
@property (nonatomic, readonly) int naturalDirection;
@property (nonatomic, readonly) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct *nextTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ@} */
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic, readonly) TSDLayout *parentLayoutForInlineAttachments;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, readonly, retain) <TSWPOffscreenColumn> *previousTargetLastColumn;
@property (nonatomic, readonly) const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *' */ struct *previousTargetTopicNumbers; /* unknown property attribute:  true> >=Q}}}QQ@} */
@property (nonatomic, readonly) bool pushAscendersIntoColumn;
@property (nonatomic, readonly) bool shouldHyphenate;
@property (nonatomic, readonly) bool shouldWrapAroundExternalDrawables;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool textIsVertical;
@property (nonatomic, readonly) bool textLayoutValid;
@property (nonatomic, readonly) unsigned int verticalAlignment;
@property (nonatomic, readonly) bool wantsLineFragments;

- (void)addAttachmentLayout:(id)arg1;
- (bool)allowsLastLineTruncation;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (unsigned int)autosizeFlags;
- (double)baselineForCharIndex:(unsigned int)arg1;
- (struct CGPoint { double x1; double x2; })calculatePointFromSearchReference:(id)arg1;
- (id)canvas;
- (struct CGPoint { double x1; double x2; })capturedInfoPositionForAttachment;
- (bool)caresAboutStorageChanges;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)columns;
- (id)computeLayoutGeometry;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct CGSize { double x1; double x2; })currentSize;
- (void)dealloc;
- (id)dependentLayouts;
- (id)footnoteHeightMeasurer;
- (id)footnoteMarkProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCulling;
- (bool)ignoresEquationAlignment;
- (id)initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void*)initialLayoutState;
- (id)interiorClippingPath;
- (void)invalidateForFootnoteNumberingChange;
- (bool)invalidateForPageCountChange;
- (void)invalidateMaxAutoGrowWidth;
- (void)invalidateParentForAutosizing;
- (void)invalidateSize;
- (void)invalidateTextLayout;
- (bool)isLastTarget;
- (bool)isLayoutOffscreen;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (id)layoutForInlineDrawable:(id)arg1;
- (id)layoutGeometryFromInfo;
- (bool)layoutIsValid;
- (id)layoutManager;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (void)layoutSearchForAnnotationWithHitBlock:(id /* block */)arg1;
- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id /* block */)arg3;
- (unsigned int)lineCount;
- (id)lineHintsForTarget:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskRect;
- (double)maxAnchorY;
- (unsigned int)maxLineCount;
- (struct CGSize { double x1; double x2; })maxSize;
- (struct CGSize { double x1; double x2; })minSize;
- (unsigned int)naturalAlignment;
- (int)naturalDirection;
- (id)nextTargetFirstChildHint;
- (id)nextTargetFirstColumn;
- (const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >={__tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> >=Q}}}QQ@}' */ struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)nextTargetTopicNumbers;
- (id)p_firstAncestorRespondingToSelector:(SEL)arg1;
- (void)p_invalidateTextLayout;
- (bool)p_parentAutosizes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_protectedRectWithinLayoutForSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_rectForSelection:(id)arg1 useParagraphModeRects:(bool)arg2;
- (void)p_validateTextLayout;
- (id)p_wpLayoutParent;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (void)parentDidChange;
- (id)parentLayoutForInlineAttachments;
- (void)parentWillChangeTo:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (id)previousTargetLastColumn;
- (const /* Warning: unhandled struct encoding: '{TSWPTopicNumberHints={map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >={__tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> >=Q}}}QQ@}' */ struct TSWPTopicNumberHints { struct map<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> >, std::__1::less<const TSWPListStyle *>, std::__1::allocator<std::__1::pair<const TSWPListStyle *const, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true>, std::__1::allocator<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<const TSWPListStyle *, std::__1::__value_type<const TSWPListStyle *, std::__1::vector<TSWPTopicNumberEntry, std::__1::allocator<TSWPTopicNumberEntry> > >, std::__1::less<const TSWPListStyle *>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)previousTargetTopicNumbers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPresentingAnnotationPopoverForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSelection:(id)arg1;
- (id)reliedOnLayouts;
- (Class)repClassOverride;
- (void)setNeedsDisplayInTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldDisplayGuides;
- (bool)shouldHyphenate;
- (bool)shouldPositionAttachmentsIteratively;
- (bool)shouldProvideSizingGuides;
- (bool)shouldWrapAroundExternalDrawables;
- (id)styleProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetRectForCanvasRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)textColorOverride;
- (bool)textIsVertical;
- (bool)textLayoutValid;
- (id)textWrapper;
- (void)validate;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (unsigned int)verticalAlignment;
- (bool)wantsLineFragments;
- (void)wrappableChildInvalidated:(id)arg1;

@end
