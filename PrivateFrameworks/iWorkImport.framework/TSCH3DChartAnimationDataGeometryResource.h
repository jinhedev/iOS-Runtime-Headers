/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DGeometryInterleavedArray;

@interface TSCH3DChartAnimationDataGeometryResource : NSObject {
    struct GeometryArrays { 
        unsigned int offset; 
        unsigned int count; 
        unsigned int capoffset; 
        unsigned int capcount; 
    } mGeometryArrays;
    TSCH3DGeometryInterleavedArray *mInterleavedArray;
}

@property struct GeometryArrays { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } geometryArrays;
@property(retain) TSCH3DGeometryInterleavedArray * interleavedArray;

+ (id)animationData;

- (id).cxx_construct;
- (void)dealloc;
- (struct GeometryArrays { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })geometryArrays;
- (id)interleavedArray;
- (void)setGeometryArrays:(struct GeometryArrays { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)setInterleavedArray:(id)arg1;

@end