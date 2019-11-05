/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSNumber, NSURL, NSString;

@interface IKAssetElement : IKViewElement {

	BOOL _infiniteDuration;

}

@property (nonatomic,retain,readonly) NSNumber * persistentID; 
@property (nonatomic,retain,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long keyDelivery; 
@property (getter=isInfiniteDuration,nonatomic,readonly) BOOL infiniteDuration;              //@synthesize infiniteDuration=_infiniteDuration - In the implementation block
@property (nonatomic,retain,readonly) NSString * actionParams; 
@property (nonatomic,retain,readonly) NSString * adamID; 
@property (nonatomic,retain,readonly) NSURL * extrasURL; 
@property (nonatomic,retain,readonly) NSString * bookmarkID; 
@property (nonatomic,retain,readonly) NSString * contentID; 
@property (nonatomic,retain,readonly) NSString * externalID; 
@property (nonatomic,retain,readonly) NSString * serviceID; 
+(BOOL)shouldParseChildDOMElements;
-(id)tvck_rentalAdamIDString;
-(id)tvck_launchPlaybackURL;
-(id)tvck_hlsPlaylistURL;
-(id)tvck_contentRatingRank;
-(id)tvck_dataType;
-(id)tvck_resumeTime;
-(BOOL)tvck_disableResumeMenu;
-(id)tvck_fpsCertificateURL;
-(id)tvck_fpsKeyServerURL;
-(id)tvck_scrubVideoURL;
-(long long)type;
-(NSURL *)url;
-(NSNumber *)persistentID;
-(NSString *)adamID;
-(NSString *)externalID;
-(NSString *)serviceID;
-(id)_numberForAttribute:(id)arg1 ;
-(long long)keyDelivery;
-(BOOL)infiniteDuration;
-(NSString *)actionParams;
-(NSURL *)extrasURL;
-(NSString *)bookmarkID;
-(NSString *)contentID;
-(NSNumber *)rentalAdamID;
-(BOOL)isInfiniteDuration;
@end
