/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDictionary;

@interface _ACCBLEPairingAccessoryInfo : NSObject {

	BOOL _pairingFinished;
	NSString* _accessoryUID;
	NSData* _blePairingUUID;
	NSDictionary* _accInfoDict;
	NSData* _supportedPairTypes;
	NSString* _activeProvider;

}

@property (nonatomic,retain) NSString * accessoryUID;                  //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (nonatomic,retain) NSData * blePairingUUID;                  //@synthesize blePairingUUID=_blePairingUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * accInfoDict;               //@synthesize accInfoDict=_accInfoDict - In the implementation block
@property (nonatomic,retain) NSData * supportedPairTypes;              //@synthesize supportedPairTypes=_supportedPairTypes - In the implementation block
@property (assign,nonatomic) BOOL pairingFinished;                     //@synthesize pairingFinished=_pairingFinished - In the implementation block
@property (nonatomic,retain) NSString * activeProvider;                //@synthesize activeProvider=_activeProvider - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithUID:(id)arg1 blePairingUUID:(id)arg2 accInfoDict:(id)arg3 supportedPairTypes:(id)arg4 ;
-(NSString *)accessoryUID;
-(void)setAccessoryUID:(NSString *)arg1 ;
-(NSData *)blePairingUUID;
-(void)setBlePairingUUID:(NSData *)arg1 ;
-(NSDictionary *)accInfoDict;
-(void)setAccInfoDict:(NSDictionary *)arg1 ;
-(NSData *)supportedPairTypes;
-(void)setSupportedPairTypes:(NSData *)arg1 ;
-(BOOL)pairingFinished;
-(void)setPairingFinished:(BOOL)arg1 ;
-(NSString *)activeProvider;
-(void)setActiveProvider:(NSString *)arg1 ;
@end

