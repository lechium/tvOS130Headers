/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionImportInfo : NSObject {

	unsigned long long _generationCount;
	os_unfair_lock_s _lock;
	CFDictionaryRef _proxyNumberToCount;
	void* _secTaskRef;

}
-(id)init;
-(void)dealloc;
-(id)_valueForEntitlement:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 ;
-(void)addProxy:(id)arg1 ;
-(BOOL)removeProxy:(id)arg1 ;
@end

