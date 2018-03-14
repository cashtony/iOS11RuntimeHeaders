/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKDraggableElementInfo : NSObject <NSCopying> {
    bool  _attachment;
    bool  _image;
    bool  _link;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    bool  _selected;
}

@property (getter=isAttachment, nonatomic) bool attachment;
@property (getter=isImage, nonatomic) bool image;
@property (getter=isLink, nonatomic) bool link;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (getter=isSelected, nonatomic) bool selected;

+ (id)infoWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithInteractionInformationAtPosition:(const struct InteractionInformationAtPosition { struct InteractionInformationRequest { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; bool x_1_1_2; bool x_1_1_3; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; struct FloatPoint { float x_13_1_1; float x_13_1_2; } x13; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_14_1_1; unsigned int x_14_1_2 : 1; unsigned int x_14_1_3 : 1; unsigned int x_14_1_4 : 1; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; unsigned int x_14_1_12; unsigned int x_14_1_13; } x14; struct URL { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_15_1_1; unsigned int x_15_1_2 : 1; unsigned int x_15_1_3 : 1; unsigned int x_15_1_4 : 1; unsigned int x_15_1_5; unsigned int x_15_1_6; unsigned int x_15_1_7; unsigned int x_15_1_8; unsigned int x_15_1_9; unsigned int x_15_1_10; unsigned int x_15_1_11; unsigned int x_15_1_12; unsigned int x_15_1_13; } x15; }*)arg1;
- (bool)isAttachment;
- (bool)isImage;
- (bool)isLink;
- (bool)isSelected;
- (struct CGPoint { double x1; double x2; })point;
- (void)setAttachment:(bool)arg1;
- (void)setImage:(bool)arg1;
- (void)setLink:(bool)arg1;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelected:(bool)arg1;

@end
