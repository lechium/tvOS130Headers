/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FLFollowUpController;

@interface TVSettingsFollowUpFacade : NSObject {

	int _cfuNotifyToken;
	NSArray* _accountItems;
	NSArray* _homeKitItems;
	FLFollowUpController* _followUpController;

}

@property (nonatomic,copy) NSArray * accountItems;                                   //@synthesize accountItems=_accountItems - In the implementation block
@property (nonatomic,copy) NSArray * homeKitItems;                                   //@synthesize homeKitItems=_homeKitItems - In the implementation block
@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
-(id)init;
-(void)dealloc;
-(FLFollowUpController *)followUpController;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(void)_updateFollowUpItems;
-(void)setAccountItems:(NSArray *)arg1 ;
-(void)setHomeKitItems:(NSArray *)arg1 ;
-(NSArray *)accountItems;
-(NSArray *)homeKitItems;
@end

