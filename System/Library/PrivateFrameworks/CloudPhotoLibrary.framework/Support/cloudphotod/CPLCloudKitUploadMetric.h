/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitMetric.h>

@interface CPLCloudKitUploadMetric : CPLCloudKitMetric {

	unsigned long long _itemCount;
	unsigned long long _uploadSize;
	unsigned long long _referencedResourcesCount;
	unsigned long long _referencedResourcesSize;
	unsigned long long _otherItemCount;
	unsigned long long _uploadedSize;

}

@property (assign,nonatomic) unsigned long long itemCount;                             //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) unsigned long long uploadSize;                            //@synthesize uploadSize=_uploadSize - In the implementation block
@property (assign,nonatomic) unsigned long long referencedResourcesCount;              //@synthesize referencedResourcesCount=_referencedResourcesCount - In the implementation block
@property (assign,nonatomic) unsigned long long referencedResourcesSize;               //@synthesize referencedResourcesSize=_referencedResourcesSize - In the implementation block
@property (assign,nonatomic) unsigned long long otherItemCount;                        //@synthesize otherItemCount=_otherItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long uploadedSize;                          //@synthesize uploadedSize=_uploadedSize - In the implementation block
-(id)description;
-(id)init;
-(void)setItemCount:(unsigned long long)arg1 ;
-(unsigned long long)itemCount;
-(void)setUploadSize:(unsigned long long)arg1 ;
-(unsigned long long)uploadSize;
-(void)setUploadedSize:(unsigned long long)arg1 ;
-(unsigned long long)uploadedSize;
-(unsigned long long)referencedResourcesSize;
-(void)setReferencedResourcesSize:(unsigned long long)arg1 ;
-(unsigned long long)referencedResourcesCount;
-(void)setReferencedResourcesCount:(unsigned long long)arg1 ;
-(unsigned long long)otherItemCount;
-(void)setOtherItemCount:(unsigned long long)arg1 ;
-(void)prepareCKEventMetric:(id)arg1 ;
@end
