/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <SiriActivation/NSCopying.h>
#import <SiriActivation/NSSecureCoding.h>

@class NSNumber;

@interface SiriPresentationActivationCancelReasonTransport : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _transport;

}

@property (nonatomic,retain) NSNumber * transport;              //@synthesize transport=_transport - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)transport;
-(void)setTransport:(NSNumber *)arg1 ;
-(unsigned long long)cancelReason;
-(id)initWithSiriPresentationActivationCancelReason:(unsigned long long)arg1 ;
@end

