/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:43 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CLLocationStreamingMessage : NSObject {

	int _protocolVersion;
	NSString* _messageType;
	NSDictionary* _payload;
	long long _priority;
	NSDictionary* _idsOptions;

}

@property (nonatomic,retain) NSString * messageType;                 //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;                 //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) long long priority;                     //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSDictionary * idsOptions;              //@synthesize idsOptions=_idsOptions - In the implementation block
@property (assign,nonatomic) int protocolVersion;                    //@synthesize protocolVersion=_protocolVersion - In the implementation block
-(void)dealloc;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSDictionary *)payload;
-(NSString *)messageType;
-(void)setMessageType:(NSString *)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setProtocolVersion:(int)arg1 ;
-(int)protocolVersion;
-(void)setIdsOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)idsOptions;
@end

