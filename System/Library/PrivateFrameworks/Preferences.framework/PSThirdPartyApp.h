/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {

	NSString* _localizedName;
	LSApplicationProxy* _proxy;

}

@property (nonatomic,readonly) LSApplicationProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(void)load;
-(id)description;
-(id)localizedName;
-(id)initWithApplicationProxy:(id)arg1 ;
-(LSApplicationProxy *)proxy;
@end

