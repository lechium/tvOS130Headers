/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TVLScreenSaverPhotoServiceRequest : NSObject {

	NSString* _collectionID;
	/*^block*/id _responseBlock;

}

@property (nonatomic,copy) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (copy) id responseBlock;                               //@synthesize responseBlock=_responseBlock - In the implementation block
-(void)setCollectionID:(NSString *)arg1 ;
-(NSString *)collectionID;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
@end
