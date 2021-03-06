/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/NSCopying.h>

@interface CIFilterShape : NSObject <NSCopying> {

	unsigned _pad;
	void* _priv;

}

@property (readonly) CGRect extent; 
+(id)_shapeInfinite;
+(id)shapeWithRect:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)finalize;
-(id)initWithRect:(CGRect)arg1 ;
-(CGRect)extent;
-(id)initWithStruct:(filterShape*)arg1 ;
-(id)transformBy:(CGAffineTransform)arg1 interior:(BOOL)arg2 ;
-(id)insetByX:(int)arg1 Y:(int)arg2 ;
-(id)unionWith:(id)arg1 ;
-(id)unionWithRect:(CGRect)arg1 ;
-(id)intersectWith:(id)arg1 ;
-(id)intersectWithRect:(CGRect)arg1 ;
-(CGSRegionObjectRef)CGSRegion;
@end

