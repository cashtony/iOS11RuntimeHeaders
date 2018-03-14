/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPLoadableFontInfo : NSObject {
    unsigned char  _attemptedLoad;
    struct CGFont { } * _cgFont;
    NSString * _fontFamily;
    NSString * _fontName;
    NSString * _fontPath;
    NSString * _groupUID;
    bool  _obfuscated;
}

@property (nonatomic) struct CGFont { }*cgFont;
@property (nonatomic, copy) NSString *fontFamily;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic, copy) NSString *fontPath;
@property (nonatomic, copy) NSString *groupUID;
@property (nonatomic) bool obfuscated;

- (struct CGFont { }*)cgFont;
- (void)dealloc;
- (id)description;
- (id)fontFamily;
- (id)fontName;
- (id)fontPath;
- (id)groupUID;
- (bool)isEqual:(id)arg1;
- (bool)obfuscated;
- (void)setCgFont:(struct CGFont { }*)arg1;
- (void)setFontFamily:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontPath:(id)arg1;
- (void)setGroupUID:(id)arg1;
- (void)setObfuscated:(bool)arg1;

@end
