/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <TVRemoteCore/NSSecureCoding.h>

@interface TVRCTouchEvent : NSObject <NSSecureCoding> {

	double _timestamp;
	long long _finger;
	long long _phase;
	CGPoint _digitizerLocation;

}

@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long finger;                       //@synthesize finger=_finger - In the implementation block
@property (nonatomic,readonly) long long phase;                        //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) CGPoint digitizerLocation;              //@synthesize digitizerLocation=_digitizerLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(long long)phase;
-(long long)finger;
-(CGPoint)digitizerLocation;
-(id)_initWithTimestamp:(double)arg1 finger:(long long)arg2 phase:(long long)arg3 digitizerLocation:(CGPoint)arg4 ;
@end
