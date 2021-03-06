/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPAssetsToDownload, NSString, CKDPRecordRetrieveRequestRetrieveAssetURL, CKDPRecordIdentifier, CKDPRequestedFields;

@interface CKDPRecordRetrieveRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	NSString* _clientVersionETag;
	CKDPRecordRetrieveRequestRetrieveAssetURL* _getAssetURL;
	CKDPRecordIdentifier* _recordIdentifier;
	CKDPRequestedFields* _requestedFields;
	NSString* _versionETag;
	BOOL _shouldFailBatch;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasRecordIdentifier; 
@property (nonatomic,retain) CKDPRecordIdentifier * recordIdentifier;                              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                                //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasVersionETag; 
@property (nonatomic,retain) NSString * versionETag;                                               //@synthesize versionETag=_versionETag - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersionETag; 
@property (nonatomic,retain) NSString * clientVersionETag;                                         //@synthesize clientVersionETag=_clientVersionETag - In the implementation block
@property (nonatomic,readonly) BOOL hasGetAssetURL; 
@property (nonatomic,retain) CKDPRecordRetrieveRequestRetrieveAssetURL * getAssetURL;              //@synthesize getAssetURL=_getAssetURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                              //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
@property (assign,nonatomic) BOOL hasShouldFailBatch; 
@property (assign,nonatomic) BOOL shouldFailBatch;                                                 //@synthesize shouldFailBatch=_shouldFailBatch - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecordIdentifier:(CKDPRecordIdentifier *)arg1 ;
-(BOOL)hasRecordIdentifier;
-(CKDPRecordIdentifier *)recordIdentifier;
-(CKDPRecordRetrieveRequestRetrieveAssetURL *)getAssetURL;
-(void)setGetAssetURL:(CKDPRecordRetrieveRequestRetrieveAssetURL *)arg1 ;
-(CKDPRequestedFields *)requestedFields;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(void)setVersionETag:(NSString *)arg1 ;
-(void)setClientVersionETag:(NSString *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(BOOL)hasRequestedFields;
-(BOOL)hasVersionETag;
-(BOOL)hasClientVersionETag;
-(BOOL)hasGetAssetURL;
-(BOOL)hasAssetsToDownload;
-(void)setShouldFailBatch:(BOOL)arg1 ;
-(void)setHasShouldFailBatch:(BOOL)arg1 ;
-(BOOL)hasShouldFailBatch;
-(NSString *)versionETag;
-(NSString *)clientVersionETag;
-(CKDPAssetsToDownload *)assetsToDownload;
-(BOOL)shouldFailBatch;
@end

