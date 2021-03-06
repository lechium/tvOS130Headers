/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/Support/tvhomesharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <tvhomesharingd/TVHDMediaServerRequestOperation.h>

@interface TVHDMediaServerServerInfoOperation : TVHDMediaServerRequestOperation {

	BOOL _success;
	unsigned _sharingProtocolVersion;
	unsigned _DAAPProtocolVersion;
	unsigned _DPAPProtocolVersion;
	unsigned long long _supportedExtensions;

}

@property (assign,nonatomic) BOOL success;                                        //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) unsigned sharingProtocolVersion;                     //@synthesize sharingProtocolVersion=_sharingProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned DAAPProtocolVersion;                        //@synthesize DAAPProtocolVersion=_DAAPProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned DPAPProtocolVersion;                        //@synthesize DPAPProtocolVersion=_DPAPProtocolVersion - In the implementation block
@property (assign,nonatomic) unsigned long long supportedExtensions;              //@synthesize supportedExtensions=_supportedExtensions - In the implementation block
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(unsigned)sharingProtocolVersion;
-(unsigned)DAAPProtocolVersion;
-(unsigned)DPAPProtocolVersion;
-(unsigned long long)supportedExtensions;
-(void)setSharingProtocolVersion:(unsigned)arg1 ;
-(void)setDAAPProtocolVersion:(unsigned)arg1 ;
-(void)setDPAPProtocolVersion:(unsigned)arg1 ;
-(void)setSupportedExtensions:(unsigned long long)arg1 ;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(id)initWithRequestSession:(id)arg1 ;
@end

