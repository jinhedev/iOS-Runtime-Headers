/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources;



@interface EDColorReference : NSObject <NSCopying>
{
    EDResources *mResources;
    NSInteger mSystemColorID;
    NSUInteger mColorIndex;
    NSUInteger mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithSystemColorID:(NSInteger)arg1 resources:(id)arg2;
+ (id)colorReferenceWithColorIndex:(NSUInteger)arg1 resources:(id)arg2;
+ (id)colorReferenceWithXlThemeIndex:(NSUInteger)arg1 tint:(double)arg2 resources:(id)arg3;

- (id)initWithResources:(id)arg1;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqualToColorReference:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)color;
- (NSInteger)systemColorID;
- (NSUInteger)colorIndex;
- (NSUInteger)themeIndex;
- (double)tint;

@end