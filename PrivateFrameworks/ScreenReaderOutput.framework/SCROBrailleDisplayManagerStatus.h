/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleDisplayManagerStatus : NSObject {
    NSData * _aggregatedData;
    bool  _anyUnreadAnnouncements;
    bool  _currentAnnouncementUnread;
    long long  _masterStatusCellIndex;
    int  _virtualAlignment;
}

@property (nonatomic, retain) NSData *aggregatedData;
@property (nonatomic) bool anyUnreadAnnouncements;
@property (nonatomic) bool currentAnnouncementUnread;
@property (nonatomic) long long masterStatusCellIndex;
@property (nonatomic) int virtualAlignment;

- (void).cxx_destruct;
- (id)aggregatedData;
- (bool)anyUnreadAnnouncements;
- (bool)currentAnnouncementUnread;
- (long long)masterStatusCellIndex;
- (void)setAggregatedData:(id)arg1;
- (void)setAnyUnreadAnnouncements:(bool)arg1;
- (void)setCurrentAnnouncementUnread:(bool)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setVirtualAlignment:(int)arg1;
- (int)virtualAlignment;

@end
