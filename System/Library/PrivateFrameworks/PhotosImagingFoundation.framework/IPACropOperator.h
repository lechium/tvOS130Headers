/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPACropOperator : IPAGeometryOperator {

	CGRect _cropRect;

}
+(id)operatorWithCropRect:(CGRect)arg1 ;
+(id)operatorWithIdentifier:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)description;
-(id)transformForGeometry:(id)arg1 ;
@end

