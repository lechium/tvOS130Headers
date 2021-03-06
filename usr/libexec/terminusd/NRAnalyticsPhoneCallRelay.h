/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <terminusd/NRAnalytics.h>

@interface NRAnalyticsPhoneCallRelay : NRAnalytics {

	unsigned long long _phoneCallRelayStart;
	unsigned long long _phoneCallRelayEnd;

}

@property (assign,nonatomic) unsigned long long phoneCallRelayStart;              //@synthesize phoneCallRelayStart=_phoneCallRelayStart - In the implementation block
@property (assign,nonatomic) unsigned long long phoneCallRelayEnd;                //@synthesize phoneCallRelayEnd=_phoneCallRelayEnd - In the implementation block
-(void)submit;
-(unsigned long long)phoneCallRelayStart;
-(void)setPhoneCallRelayStart:(unsigned long long)arg1 ;
-(unsigned long long)phoneCallRelayEnd;
-(void)setPhoneCallRelayEnd:(unsigned long long)arg1 ;
@end

