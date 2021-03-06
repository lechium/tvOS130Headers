/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLSecurity : NSObject
+(id)_secTask:(SecTaskRef)arg1 grantedEntitlements:(id)arg2 ;
+(BOOL)secTask:(SecTaskRef)arg1 hasEntitlement:(id)arg2 ;
+(BOOL)auditToken:(SCD_Struct_PL11)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 valuesForEntitlements:(id)arg2 ;
+(id)connection:(id)arg1 valueForEntitlement:(id)arg2 ;
+(BOOL)connection:(id)arg1 hasEntitlement:(id)arg2 ;
+(id)connection:(id)arg1 grantedEntitlements:(id)arg2 ;
+(BOOL)containsPhotoKitEntitlement:(id)arg1 ;
+(BOOL)isEntitledForPhotoKit;
+(BOOL)connectionIsEntitledForPhotoKit:(id)arg1 ;
@end

