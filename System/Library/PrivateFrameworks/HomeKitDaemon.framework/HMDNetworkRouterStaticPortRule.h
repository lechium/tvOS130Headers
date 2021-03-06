/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNetworkRouterLANRule.h>
#import <HomeKitDaemon/NSCopying.h>
#import <HomeKitDaemon/HMDTLVProtocol.h>

@class HMDNetworkRouterRuleDirection, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterIPAddress, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterStaticPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HMDTLVProtocol> {

	HMDNetworkRouterRuleDirection* _direction;
	HMDNetworkRouterLANIdentifierList* _lanIdentifierList;
	HMDNetworkRouterProtocol* _protocol;
	HMDNetworkRouterIPAddress* _destinationIPAddress;
	HMDTLVUnsignedNumberValue* _destinationPortStart;
	HMDTLVUnsignedNumberValue* _destinationPortEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HMDNetworkRouterRuleDirection * direction;                          //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterLANIdentifierList * lanIdentifierList;              //@synthesize lanIdentifierList=_lanIdentifierList - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterProtocol * protocol;                                //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) HMDNetworkRouterIPAddress * destinationIPAddress;                   //@synthesize destinationIPAddress=_destinationIPAddress - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * destinationPortStart;                   //@synthesize destinationPortStart=_destinationPortStart - In the implementation block
@property (nonatomic,retain) HMDTLVUnsignedNumberValue * destinationPortEnd;                     //@synthesize destinationPortEnd=_destinationPortEnd - In the implementation block
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
+(id)ruleFromFirewallRuleLAN:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HMDNetworkRouterProtocol *)protocol;
-(void)setProtocol:(HMDNetworkRouterProtocol *)arg1 ;
-(HMDNetworkRouterRuleDirection *)direction;
-(void)setDirection:(HMDNetworkRouterRuleDirection *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(void)addTo:(id)arg1 ;
-(id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 destinationIPAddress:(id)arg4 destinationPortStart:(id)arg5 destinationPortEnd:(id)arg6 ;
-(void)setLanIdentifierList:(HMDNetworkRouterLANIdentifierList *)arg1 ;
-(HMDNetworkRouterLANIdentifierList *)lanIdentifierList;
-(void)setDestinationIPAddress:(HMDNetworkRouterIPAddress *)arg1 ;
-(HMDNetworkRouterIPAddress *)destinationIPAddress;
-(void)setDestinationPortStart:(HMDTLVUnsignedNumberValue *)arg1 ;
-(void)setDestinationPortEnd:(HMDTLVUnsignedNumberValue *)arg1 ;
-(HMDTLVUnsignedNumberValue *)destinationPortStart;
-(HMDTLVUnsignedNumberValue *)destinationPortEnd;
@end

