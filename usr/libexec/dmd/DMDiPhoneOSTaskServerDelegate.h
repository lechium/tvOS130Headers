/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDTaskServerDelegate.h>

@interface DMDiPhoneOSTaskServerDelegate : DMDTaskServerDelegate {

	BOOL _isMigrationFinished;

}

@property (assign,nonatomic) BOOL isMigrationFinished;              //@synthesize isMigrationFinished=_isMigrationFinished - In the implementation block
-(void)run;
-(BOOL)isMigrationFinished;
-(id)operationForRequest:(id)arg1 targetUID:(unsigned)arg2 appleID:(id)arg3 transport:(id)arg4 error:(id*)arg5 ;
-(void)setIsMigrationFinished:(BOOL)arg1 ;
@end
