/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOCapturedState.h>

@class NSString, NSURLRequest, NSURLResponse, NSError;

@interface GEONSURLSessionTaskState : GEOCapturedState {

	NSString* _taskClassName;
	unsigned long long _taskIdentifier;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	NSString* _taskDescription;
	long long _state;
	NSError* _error;
	float _priority;

}
+(BOOL)supportsSecureCoding;
+(id)stateWithTask:(id)arg1 ;
+(const char*)decoderType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

