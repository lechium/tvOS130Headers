/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MISafeHarborManager : NSObject
+(id)defaultManager;
-(BOOL)registerSafeHarborAtURL:(id)arg1 withOptions:(id)arg2 forIdentifier:(id)arg3 ofType:(long long)arg4 error:(id*)arg5 ;
-(BOOL)removeSafeHarborWithIdentifier:(id)arg1 ofType:(long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)safeHarborListForType:(long long)arg1 withError:(id*)arg2 ;
@end

