/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

@interface ACCMediaLibraryUpdatePlaylist : NSObject {
    ACCMediaLibraryUpdatePlaylistContent * _content;
    int  _contentStyle;
    bool  _folder;
    bool  _geniusMix;
    NSString * _mediaLibraryUID;
    NSString * _name;
    unsigned long long  _parentPersistentID;
    unsigned long long  _persistentID;
    bool  _radioStation;
    unsigned short  _radioStationOrdering;
    NSString * _revision;
    bool  _smartPlaylist;
    unsigned long long  _validMask;
}

@property (nonatomic, retain) ACCMediaLibraryUpdatePlaylistContent *content;
@property (nonatomic) int contentStyle;
@property (nonatomic) bool folder;
@property (nonatomic) bool geniusMix;
@property (nonatomic, retain) NSString *mediaLibraryUID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long parentPersistentID;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) bool radioStation;
@property (nonatomic) unsigned short radioStationOrdering;
@property (nonatomic, retain) NSString *revision;
@property (nonatomic) bool smartPlaylist;
@property (nonatomic, readonly) unsigned long long validMask;

- (void).cxx_destruct;
- (id)content;
- (int)contentStyle;
- (id)copyDict;
- (id)debugDescription;
- (id)description;
- (void)fillStruct:(struct { unsigned int x1; unsigned long long x2; char *x3; unsigned long long x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned short x10; }*)arg1;
- (bool)folder;
- (bool)geniusMix;
- (id)initWithMediaLibrary:(id)arg1 dict:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3;
- (id)mediaLibraryUID;
- (id)name;
- (unsigned long long)parentPersistentID;
- (unsigned long long)persistentID;
- (bool)radioStation;
- (unsigned short)radioStationOrdering;
- (id)revision;
- (void)setContent:(id)arg1;
- (void)setContentStyle:(int)arg1;
- (void)setFolder:(bool)arg1;
- (void)setGeniusMix:(bool)arg1;
- (void)setMediaLibraryUID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentPersistentID:(unsigned long long)arg1;
- (void)setPersistentID:(unsigned long long)arg1;
- (void)setRadioStation:(bool)arg1;
- (void)setRadioStationOrdering:(unsigned short)arg1;
- (void)setRevision:(id)arg1;
- (void)setSmartPlaylist:(bool)arg1;
- (bool)smartPlaylist;
- (unsigned long long)validMask;

@end
