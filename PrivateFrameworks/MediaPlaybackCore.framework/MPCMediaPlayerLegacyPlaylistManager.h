/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaPlayerLegacyPlaylistManager : MPAVPlaylistManager <MPCQueueBehaviorManaging> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    MPMusicPlayerControllerQueue * _currentMusicPlayerControllerQueue;
    bool  _disableQueueModifications;
    bool  _disableSoftQueueFaulting;
    NSMutableIndexSet * _failedSoftQueueIndexes;
    long long  _hardQueueInsertionIndex;
    NSMutableArray * _hardQueueSourceContexts;
    MPMutableBidirectionalDictionary * _identifiersToIndexes;
    bool  _ignoreHardQueueInvalidation;
    bool  _ignoreNextIndexChanges;
    bool  _ignoreSoftQueueInvalidation;
    MPAVItem * _lastPlayedSoftQueueItem;
    unsigned long long  _maximumModifiedPlaylistIterationIndex;
    unsigned long long  _maximumPlaylistIndex;
    unsigned long long  _minimumPlaylistIndex;
    NSObject<OS_dispatch_queue> * _musicPlayerControllerAccessQueue;
    long long  _nextCurrentIndex;
    NSMapTable * _queueFeederLookup;
    _MPCAVItemSourceContext * _repeatPlaylistIdentifer;
    MPQueueFeeder * _softQueueFeeder;
    _MPCAVPlaylistIteration * _softQueueModifications;
}

@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableQueueModifications;
@property (nonatomic) long long hardQueueInsertionIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } hardQueuePlaylistIndexRange;
@property (nonatomic, retain) NSMutableArray *hardQueueSourceContexts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPAVItem *lastPlayedSoftQueueItem;
@property (nonatomic) long long nextCurrentIndex;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, copy) _MPCAVItemSourceContext *repeatPlaylistIdentifer;
@property (nonatomic, retain) MPQueueFeeder *softQueueFeeder;
@property (nonatomic, retain) _MPCAVPlaylistIteration *softQueueModifications;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } softQueuePlaylistIndexRange;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_handleConfiguredQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (long long)_hardQueueIndexForIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_hardQueuePlaylistIndexRangeIncludingCurrentItem:(bool)arg1;
- (unsigned long long)_indexOfMediaItem:(id)arg1;
- (void)_insertSoftQueueSourceContext:(id)arg1 atIndex:(long long)arg2;
- (void)_invalidateCachedMusicPlayerControllerQueue;
- (id)_itemForPlaylistIndex:(long long)arg1;
- (id)_itemForSourceContext:(id)arg1;
- (bool)_itemIsHardQueueItem:(id)arg1;
- (bool)_itemIsSoftQueueItem:(id)arg1;
- (id)_metadataItemForSourceContext:(id)arg1;
- (void)_notifyQueueFeederContentsChanged;
- (long long)_playlistIndexOfItemIdentifier:(id)arg1;
- (id)_playlistIterationForQueueFeeder:(id)arg1 withMaxQueueIndexToPreload:(unsigned long long)arg2;
- (long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (id)_queueFeeder:(id)arg1 itemForIdentifier:(id)arg2;
- (bool)_removeHardQueueItems;
- (id)_removeSoftQueueSourceContextAtIndex:(long long)arg1;
- (void)_removeSourceContextAtIndex:(unsigned long long)arg1;
- (long long)_softQueueIndexForIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_softQueuePlaylistIndexRangeIncludingCurrentItem:(bool)arg1;
- (id)_softQueueSourceContextForIndex:(long long)arg1;
- (id)_sourceContextForPlaylistIndex:(unsigned long long)arg1;
- (void)_updateMusicPlayerControllerQueueWithCompletionHandler:(id /* block */)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (void)addPlaybackContext:(id)arg1 toQueueWithInsertionType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)allowsQueueResetWhenReachingEnd;
- (bool)canSkipToPreviousItemForItem:(id)arg1;
- (void)clearHardQueue;
- (void)clearSoftQueue;
- (id)contentItemIDForPlaylistIndex:(long long)arg1;
- (long long)currentIndex;
- (id)currentQueueUUID;
- (bool)disableQueueModifications;
- (unsigned long long)displayCountForItem:(id)arg1;
- (unsigned long long)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(id /* block */)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (long long)hardQueueInsertionIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hardQueuePlaylistIndexRange;
- (id)hardQueueSourceContexts;
- (id)identifierAtIndex:(unsigned long long)arg1 queueFeeder:(id)arg2;
- (unsigned long long)indexForContentItemID:(id)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1 queueFeeder:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPlaceholderItemForContentItemID:(id)arg1;
- (id)itemForContentItemID:(id)arg1;
- (id)itemForPlaylistIndex:(long long)arg1;
- (id)lastPlayedSoftQueueItem;
- (id)metadataItemForPlaylistIndex:(long long)arg1;
- (void)moveItemAtPlaybackIndex:(long long)arg1 toPlaybackIndex:(long long)arg2 intoHardQueue:(bool)arg3;
- (id)musicPlayerControllerQueueForUUID:(id)arg1;
- (long long)nextCurrentIndex;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeeder;
- (id)playlistFeederForPlaylistIndex:(long long)arg1;
- (long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfItem:(id)arg1;
- (long long)playlistIndexOfItemIdentifier:(id)arg1;
- (long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(bool)arg3 didReachEnd:(bool*)arg4;
- (unsigned long long)playlistItemCount;
- (bool)preventsHardQueueModificationsForItem:(id)arg1;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeederDidInvalidateRealShuffleType:(id)arg1;
- (void)removeItemAtPlaybackIndex:(long long)arg1;
- (id)repeatPlaylistIdentifer;
- (void)requestMusicPlayerControllerQueueWithCompletionHandler:(id /* block */)arg1;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)setDisableQueueModifications:(bool)arg1;
- (void)setHardQueueInsertionIndex:(long long)arg1;
- (void)setHardQueueSourceContexts:(id)arg1;
- (void)setLastPlayedSoftQueueItem:(id)arg1;
- (bool)setMusicPlayerControllerQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setNextCurrentIndex:(long long)arg1;
- (bool)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(bool)arg3;
- (void)setRepeatMode:(long long)arg1;
- (void)setRepeatPlaylistIdentifer:(id)arg1;
- (void)setSoftQueueFeeder:(id)arg1;
- (void)setSoftQueueModifications:(id)arg1;
- (id)softQueueFeeder;
- (id)softQueueModifications;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })softQueuePlaylistIndexRange;
- (bool)supportsAddToQueue;
- (long long)upNextItemCount;
- (void)updateLocationDependentPropertiesForItem:(id)arg1;
- (bool)userCanChangeShuffleAndRepeatType;

@end
