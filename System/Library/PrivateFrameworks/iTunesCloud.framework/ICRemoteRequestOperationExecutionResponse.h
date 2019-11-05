/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSError;

@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding> {

	id<NSSecureCoding> _remoteRequestOperationResponse;
	NSError* _remoteRequestOperationError;

}

@property (nonatomic,retain) id<NSSecureCoding> remoteRequestOperationResponse;              //@synthesize remoteRequestOperationResponse=_remoteRequestOperationResponse - In the implementation block
@property (nonatomic,retain) NSError * remoteRequestOperationError;                          //@synthesize remoteRequestOperationError=_remoteRequestOperationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRemoteRequestOperationResponse:(id)arg1 remoteRequestOperationError:(id)arg2 ;
-(id<NSSecureCoding>)remoteRequestOperationResponse;
-(void)setRemoteRequestOperationResponse:(id<NSSecureCoding>)arg1 ;
-(NSError *)remoteRequestOperationError;
-(void)setRemoteRequestOperationError:(NSError *)arg1 ;
@end
