/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextInteractionAssistant : NSObject <UIResponderStandardEditActions, UITextGestureClusterViewDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _autoscrollBasePoint;
    double  _autoscrollFactor;
    int  _autoscrollRamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _autoscrollUntransformedExtentPoint;
    bool  _autoscrolled;
    bool  _externalTextInput;
    UITextGestureCluster * _gestures;
    bool  _inGesture;
    struct CGPoint { 
        double x; 
        double y; 
    }  _loupeGestureEndPoint;
    bool  _needsGestureUpdate;
    long long  _previousRepeatedGranularity;
    UITextSelectionView * _selectionView;
    UITextChecker * _textChecker;
    UIResponder<UITextInput> * _view;
    bool  _willHandoffLoupeMagnifier;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } autoscrollUntransformedExtentPoint;
@property (nonatomic) bool autoscrolled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) UIGestureRecognizer *doubleTapGesture;
@property (nonatomic, readonly) bool externalTextInput;
@property (nonatomic, readonly) UIFieldEditor *fieldEditor;
@property (nonatomic, readonly, retain) UITextGestureCluster *gestures;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inGesture;
@property (nonatomic, readonly, retain) UILongPressGestureRecognizer *loupeGesture;
@property (nonatomic) struct CGPoint { double x1; double x2; } loupeGestureEndPoint;
@property (nonatomic) bool needsGestureUpdate;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UITextSelectionView *selectionView;
@property (nonatomic, readonly, retain) UITapGestureRecognizer *singleTapGesture;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIResponder<UITextInput> *textDocument;
@property (nonatomic, readonly) UIResponder<UITextInput> *view;
@property (nonatomic, readonly) bool willHandoffLoupeMagnifier;

+ (long long)_nextGranularityInCycle:(long long)arg1;

- (void).cxx_destruct;
- (id)_asText;
- (id)_scrollable;
- (id)_selectionView;
- (void)activateSelection;
- (void)addGestureRecognizersToView:(id)arg1;
- (void)attach;
- (struct CGPoint { double x1; double x2; })autoscrollUntransformedExtentPoint;
- (void)autoscrollWillNotStart;
- (bool)autoscrolled;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)canBeginDragCursor:(id)arg1;
- (void)cancelAutoscroll;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)clearGestureRecognizers;
- (void)clearGestureRecognizers:(bool)arg1;
- (void)clearSelection;
- (struct CGPoint { double x1; double x2; })constrainedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containerAllowsSelection;
- (bool)containerAllowsSelectionTintOnly;
- (bool)containerIsAtom;
- (bool)containerIsBrowserView;
- (bool)containerIsPlainStyleAtom;
- (bool)containerIsTextField;
- (void)deactivateSelection;
- (void)dealloc;
- (void)detach;
- (void)detach:(bool)arg1;
- (void)didEndScrollingOverflow;
- (void)didEndSelectionInteraction;
- (id)doubleTapGesture;
- (void)endFloatingCursor;
- (bool)externalTextInput;
- (id)fieldEditor;
- (id)generatorForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)gestures;
- (bool)hasReplacements;
- (bool)inGesture;
- (id)initWithResponder:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)layoutChangedByScrolling:(bool)arg1;
- (id)linkInteractionView;
- (Class)loupeClusterClass;
- (id)loupeGesture;
- (struct CGPoint { double x1; double x2; })loupeGestureEndPoint;
- (void)loupeGestureWithState:(long long)arg1 atGesturePoint:(id /* block */)arg2 shouldCancel:(bool*)arg3;
- (void)loupeMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)needsGestureUpdate;
- (void)notifyKeyboardSelectionChanged;
- (id)rangeForTextReplacement:(id)arg1;
- (void)rangeSelectionCanceled;
- (void)rangeSelectionEnded:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangeSelectionMoved:(struct CGPoint { double x1; double x2; })arg1 withTouchPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)rangeSelectionStarted:(struct CGPoint { double x1; double x2; })arg1;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)requiresImmediateUpdate;
- (void)resetGestureRecognizersForLinkInteraction;
- (void)resetWillHandoffLoupeMagnifier;
- (void)resignedFirstResponder;
- (void)scheduleChineseTransliteration;
- (void)scheduleDictationReplacementsForAlternatives:(id)arg1 range:(id)arg2;
- (void)scheduleReplacements;
- (void)scheduleReplacementsForRange:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)scheduleReplacementsWithOptions:(unsigned long long)arg1;
- (void)scrollSelectionToVisible;
- (void)scrollSelectionToVisible:(bool)arg1;
- (id)scrollView;
- (void)selectAll:(id)arg1;
- (void)selectWord;
- (void)selectWordWithoutShowingCommands;
- (void)selectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)selectionChanged;
- (Class)selectionClusterClass;
- (id)selectionView;
- (void)setAutoscrollUntransformedExtentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAutoscrolled:(bool)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setGestureRecognizers;
- (void)setInGesture:(bool)arg1;
- (void)setLoupeGestureEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsGestureUpdate:(bool)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setWillHandoffLoupeMagnifier;
- (bool)shouldEnqueueObserverUpdates;
- (bool)shouldSuppressSelectionCommands;
- (id)singleTapGesture;
- (void)startAutoscroll:(struct CGPoint { double x1; double x2; })arg1;
- (bool)swallowsDoubleTapWithScale:(double)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)textDocument;
- (id)textSelectionView;
- (void)updateAutoscroll:(id)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (bool)useGesturesForEditableContent;
- (id)view;
- (bool)viewCouldBecomeEditable:(id)arg1;
- (void)willBeginSelectionInteraction;
- (bool)willHandoffLoupeMagnifier;
- (void)willStartScrollingOverflow;

@end
