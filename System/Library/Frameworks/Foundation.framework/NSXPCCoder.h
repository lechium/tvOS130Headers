/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@protocol NSObject;
@class NSXPCConnection;

@interface NSXPCCoder : NSCoder {

	id<NSObject> _userInfo;
	id _reserved1;

}

@property (retain) id<NSObject> userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) NSXPCConnection * connection; 
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClasses:(id)arg2 ;
+(id)_testEncodeAndDecodeObject:(id)arg1 allowedClass:(Class)arg2 ;
+(id)_testEncodeAndDecodeInvocation:(id)arg1 interface:(id)arg2 ;
-(long long)geo_decodeXPCInt64ForKey:(id)arg1 success:(BOOL*)arg2 ;
-(double)geo_decodeXPCDoubleForKey:(id)arg1 success:(BOOL*)arg2 ;
-(void)geo_encodeXPCInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)geo_encodeXPCDouble:(double)arg1 forKey:(id)arg2 ;
-(void)geo_encodeXPCData:(id)arg1 forKey:(id)arg2 ;
-(void)geo_encodeXPCString:(id)arg1 forKey:(id)arg2 ;
-(long long)geo_decodeXPCInt64ForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(double)geo_decodeXPCDoubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(id)geo_decodeXPCDataForKey:(id)arg1 ;
-(id)geo_decodeXPCStringForKey:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<NSObject>)userInfo;
-(BOOL)requiresSecureCoding;
-(void)setUserInfo:(id<NSObject>)arg1 ;
-(NSXPCConnection *)connection;
-(void)encodeXPCObject:(id)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
@end

