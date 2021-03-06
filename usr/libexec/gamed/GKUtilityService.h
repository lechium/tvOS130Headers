/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKService.h>
#import <gamed/GKUtilityService.h>

@protocol GKUtilityService <NSObject>
@required
-(oneway void)openGameCenterSettings;
-(oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(/*^block*/id)arg4;
-(oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(/*^block*/id)arg4;
-(oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(/*^block*/id)arg3;
-(oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(/*^block*/id)arg3;

@end


@class NSString;

@interface GKUtilityService : GKService <GKUtilityService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)requiredEntitlements;
+(Class)interfaceClass;
-(BOOL)requiresAuthentication;
-(oneway void)openGameCenterSettings;
-(oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(/*^block*/id)arg4 ;
-(oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(/*^block*/id)arg4 ;
-(oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(/*^block*/id)arg3 ;
-(oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)validateEnvironment;
@end

