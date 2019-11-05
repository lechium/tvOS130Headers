/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSecureCoding.h>

@class NSData;

@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding> {

	NSData* _fetchData;
	long long _resultType;
	BOOL _secure;

}

@property (nonatomic,retain,readonly) NSData * fetchData;              //@synthesize fetchData=_fetchData - In the implementation block
@property (nonatomic,readonly) long long resultType;                   //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL secure;                            //@synthesize secure=_secure - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)resultType;
-(id)initForRequest:(id)arg1 ;
-(BOOL)secure;
-(NSData *)fetchData;
@end
