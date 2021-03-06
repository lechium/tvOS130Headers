/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, CUBonjourDevice, CUNANEndpoint;

@interface CUNetServiceEndpoint : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;
	CUBonjourDevice* _bonjourDevice;
	CUNANEndpoint* _nanEndpoint;

}

@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) CUNANEndpoint * nanEndpoint;                    //@synthesize nanEndpoint=_nanEndpoint - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceInfo;              //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(NSDictionary *)serviceInfo;
-(id)descriptionWithLevel:(int)arg1 ;
-(unsigned)updateWithNANEndpoint:(id)arg1 ;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(CUBonjourDevice *)bonjourDevice;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(CUNANEndpoint *)nanEndpoint;
-(void)setNanEndpoint:(CUNANEndpoint *)arg1 ;
@end

