/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLResourceRecipe.h>

@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe {

	unsigned _recipeID;

}

@property (assign,nonatomic) unsigned recipeID;              //@synthesize recipeID=_recipeID - In the implementation block
-(id)description;
-(id)_mediaConversionServiceOptionsForAsset:(id)arg1 adjustmentData:(id)arg2 largeAdjustmentData:(id)arg3 isHighPriority:(BOOL)arg4 ;
-(void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)arg1 version:(unsigned)arg2 conversionClient:(id)arg3 isHighPriority:(BOOL)arg4 progress:(id*)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithRecipeID:(unsigned)arg1 ;
-(id)utiInContext:(id)arg1 ;
-(id)codecInContext:(id)arg1 ;
-(id)colorSpaceGivenSourceColorSpace:(id)arg1 inContext:(id)arg2 ;
-(id)supportedVersionsForLocalResourceGeneration;
-(id)chooseIngredientsFrom:(id)arg1 version:(unsigned)arg2 ;
-(id)expectedFileURLForVersion:(unsigned)arg1 asset:(id)arg2 ;
-(void)generateAndStoreForAsset:(id)arg1 version:(unsigned)arg2 conversionClient:(id)arg3 progress:(id*)arg4 completion:(/*^block*/id)arg5 ;
-(void)generateAndStoreForAssetWithPriority:(id)arg1 version:(unsigned)arg2 conversionClient:(id)arg3 isHighPriority:(BOOL)arg4 progress:(id*)arg5 completion:(/*^block*/id)arg6 ;
-(unsigned)recipeID;
-(void)setRecipeID:(unsigned)arg1 ;
-(id)_localAvailabileResourceForAsset:(id)arg1 cplType:(unsigned long long)arg2 ;
@end

