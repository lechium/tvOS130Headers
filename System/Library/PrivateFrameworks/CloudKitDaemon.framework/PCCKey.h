/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface PCCKey : NSObject {

	pcc_invocation_key* _secret;

}

@property (assign) pcc_invocation_key* secret;              //@synthesize secret=_secret - In the implementation block
-(id)init;
-(void)dealloc;
-(void)clear;
-(pcc_invocation_key*)secret;
-(void)setSecret:(pcc_invocation_key*)arg1 ;
-(id)encrypt:(id)arg1 ;
-(id)decrypt:(id)arg1 ;
@end

