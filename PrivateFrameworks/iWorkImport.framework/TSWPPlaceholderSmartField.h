/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPPlaceholderSmartField : TSWPSmartField {
    BOOL _localizable;
    NSString *_scriptTag;
}

@property BOOL isLocalizable;
@property(copy) NSString * scriptTag;

- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isLocalizable;
- (void)loadFromArchive:(const struct PlaceholderSmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct SmartFieldArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; bool x7; }*)arg1 unarchiver:(id)arg2;
- (const struct PlaceholderSmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct SmartFieldArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; bool x7; }*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;
- (void)saveToArchive:(struct PlaceholderSmartFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct SmartFieldArchive {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; bool x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)scriptTag;
- (void)setIsLocalizable:(BOOL)arg1;
- (void)setScriptTag:(id)arg1;
- (int)smartFieldKind;

@end