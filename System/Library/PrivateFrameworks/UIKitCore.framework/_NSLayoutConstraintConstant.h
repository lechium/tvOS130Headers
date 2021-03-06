/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCoding.h>
#import <UIKitCore/NSCopying.h>

@class NSString;

@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying> {

	NSString* _symbolicValue;
	double _numericValue;

}

@property (nonatomic,copy,readonly) NSString * symbolicValue;              //@synthesize symbolicValue=_symbolicValue - In the implementation block
@property (nonatomic,readonly) double numericValue;                        //@synthesize numericValue=_numericValue - In the implementation block
+(id)constantWithSymbolicValue:(id)arg1 numericValue:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)numericValue;
-(id)initWithSymbolicValue:(id)arg1 numericValue:(double)arg2 ;
-(NSString *)symbolicValue;
@end

