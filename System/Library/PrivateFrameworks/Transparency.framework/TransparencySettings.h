/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TransparencySettings : NSObject {

	NSDictionary* _settings;

}

@property (retain) NSDictionary * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)getBool:(id)arg1 ;
+(double)defaultNetworkTimeout;
+(BOOL)allowsInternalSecurityPolicies;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
@end

