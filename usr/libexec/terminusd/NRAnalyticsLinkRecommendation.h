/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/NRAnalytics.h>

@interface NRAnalyticsLinkRecommendation : NRAnalytics {

	unsigned long long _btNotRecommendedStart;
	unsigned long long _btNotRecommendedEnd;
	unsigned long long _cmpWiFiNotRecommendedStart;
	unsigned long long _cmpWiFiNotRecommendedEnd;

}

@property (assign,nonatomic) unsigned long long btNotRecommendedStart;                   //@synthesize btNotRecommendedStart=_btNotRecommendedStart - In the implementation block
@property (assign,nonatomic) unsigned long long btNotRecommendedEnd;                     //@synthesize btNotRecommendedEnd=_btNotRecommendedEnd - In the implementation block
@property (assign,nonatomic) unsigned long long cmpWiFiNotRecommendedStart;              //@synthesize cmpWiFiNotRecommendedStart=_cmpWiFiNotRecommendedStart - In the implementation block
@property (assign,nonatomic) unsigned long long cmpWiFiNotRecommendedEnd;                //@synthesize cmpWiFiNotRecommendedEnd=_cmpWiFiNotRecommendedEnd - In the implementation block
-(void)submit;
-(unsigned long long)btNotRecommendedStart;
-(void)setBtNotRecommendedStart:(unsigned long long)arg1 ;
-(unsigned long long)btNotRecommendedEnd;
-(void)setBtNotRecommendedEnd:(unsigned long long)arg1 ;
-(unsigned long long)cmpWiFiNotRecommendedStart;
-(void)setCmpWiFiNotRecommendedStart:(unsigned long long)arg1 ;
-(unsigned long long)cmpWiFiNotRecommendedEnd;
-(void)setCmpWiFiNotRecommendedEnd:(unsigned long long)arg1 ;
@end

