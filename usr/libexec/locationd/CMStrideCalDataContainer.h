/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/NSSecureCoding.h>

@class CalibrationTrack;

@interface CMStrideCalDataContainer : NSObject <NSSecureCoding> {

	CalibrationTrack* _track;
	long long _session;
	double _gradient;
	long long _gradientValidity;

}

@property (nonatomic,retain,readonly) CalibrationTrack * track;              //@synthesize track=_track - In the implementation block
@property (nonatomic,readonly) long long session;                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) double gradient;                                //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,readonly) long long gradientValidity;                   //@synthesize gradientValidity=_gradientValidity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)session;
-(CalibrationTrack *)track;
-(double)gradient;
-(void)setGradient:(double)arg1 ;
-(long long)gradientValidity;
-(id)initWithTrack:(id)arg1 session:(long long)arg2 ;
@end

