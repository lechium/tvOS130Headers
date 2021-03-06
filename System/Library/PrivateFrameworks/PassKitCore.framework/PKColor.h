/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/NSSecureCoding.h>
#import <PassKitCore/NSCopying.h>

@class NSString;

@interface PKColor : NSObject <NSSecureCoding, NSCopying> {

	double _red;
	double _green;
	double _blue;
	double _alpha;
	CGColorRef _colorRef;

}

@property (nonatomic,__weak,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned long long hash; 
@property (nonatomic,readonly) CGColorRef CGColor; 
+(BOOL)supportsSecureCoding;
+(id)colorFromString:(id)arg1 ;
+(id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4 ;
+(id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(double)luminance;
-(CGColorRef)_newCGColor;
@end

