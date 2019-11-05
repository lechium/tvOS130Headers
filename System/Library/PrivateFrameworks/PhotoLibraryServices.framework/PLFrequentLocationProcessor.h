/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFrequentLocationProcessor : NSObject
+(id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
+(id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_dateIntervalForItems:(id)arg1 ;
+(id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(/*^block*/id)arg2 ;
+(id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id*)arg3 progressBlock:(/*^block*/id)arg4 ;
@end
