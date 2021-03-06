/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, MSVMultiCallback, PBCodable, NSError, NSString, MRProtocolClientConnection;

@interface MRProtocolMessage : NSObject {

	NSData* _protobufData;
	BOOL _replied;
	MSVMultiCallback* _messageSentCallbacks;
	MSVMultiCallback* _messagePurgedCallbacks;
	BOOL _isReply;
	PBCodable* _underlyingCodableMessage;
	NSError* _error;
	NSString* _identifier;
	unsigned long long _timestamp;
	MRProtocolClientConnection* _clientConnection;

}

@property (nonatomic,retain) PBCodable * underlyingCodableMessage;                              //@synthesize underlyingCodableMessage=_underlyingCodableMessage - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (assign,nonatomic,__weak) MRProtocolClientConnection * clientConnection;              //@synthesize clientConnection=_clientConnection - In the implementation block
@property (assign,nonatomic) BOOL isReply;                                                      //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,readonly) NSData * protobufData; 
@property (nonatomic,readonly) unsigned long long encryptionType; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) MSVMultiCallback * messageSentCallbacks; 
@property (nonatomic,readonly) MSVMultiCallback * messagePurgedCallbacks; 
+(id)protocolMessageWithProtobufData:(id)arg1 ;
+(unsigned long long)currentProtocolVersion;
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)type;
-(NSString *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)encryptionType;
-(MRProtocolClientConnection *)clientConnection;
-(void)setClientConnection:(MRProtocolClientConnection *)arg1 ;
-(BOOL)shouldLog;
-(void)setIsReply:(BOOL)arg1 ;
-(BOOL)isReply;
-(void)setUnderlyingCodableMessage:(PBCodable *)arg1 ;
-(PBCodable *)underlyingCodableMessage;
-(id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2 ;
-(MSVMultiCallback *)messagePurgedCallbacks;
-(BOOL)reply;
-(BOOL)replyWithMessage:(id)arg1 ;
-(NSData *)protobufData;
-(MSVMultiCallback *)messageSentCallbacks;
@end

