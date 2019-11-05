/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UAUserActivityInfo.h>

@interface UAAdvertisableItem : UAUserActivityInfo {

	BOOL _alwaysPick;
	BOOL _alwaysEligible;
	long long _alwaysPickValue;

}

@property (readonly) BOOL alwaysPick;                        //@synthesize alwaysPick=_alwaysPick - In the implementation block
@property (readonly) long long alwaysPickValue;              //@synthesize alwaysPickValue=_alwaysPickValue - In the implementation block
@property (readonly) BOOL alwaysEligible;                    //@synthesize alwaysEligible=_alwaysEligible - In the implementation block
-(id)description;
-(id)statusString;
-(id)logString;
-(BOOL)alwaysPick;
-(long long)alwaysPickValue;
-(BOOL)alwaysEligible;
@end
