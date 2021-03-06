/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@interface CoreDAVGetTask : CoreDAVTask {

	id _appSpecificDataItemResult;
	BOOL _forceNoCache;

}

@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) id appSpecificDataItemResult;                         //@synthesize appSpecificDataItemResult=_appSpecificDataItemResult - In the implementation block
@property (assign,nonatomic) BOOL forceNoCache;                                    //@synthesize forceNoCache=_forceNoCache - In the implementation block
-(id)description;
-(unsigned long long)cachePolicy;
-(id)requestBody;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)appSpecificDataItemResult;
-(BOOL)forceNoCache;
-(void)setAppSpecificDataItemResult:(id)arg1 ;
-(void)setForceNoCache:(BOOL)arg1 ;
@end

