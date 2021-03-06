/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSCopying.h>

@class NSString;

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying> {

	NSString* _URLPath;
	NSString* _mimeType;

}

@property (nonatomic,retain) NSString * URLPath;               //@synthesize URLPath=_URLPath - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWitURLPath:(id)arg1 mimeType:(id)arg2 ;
-(NSString *)URLPath;
-(void)setURLPath:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
@end

