/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDEngineDatabaseOperation.h>

@class DMFUpdateDeclarationsRequest;

@interface DMDEngineUpdateDeclarationsOperation : DMDEngineDatabaseOperation {

	DMFUpdateDeclarationsRequest* _request;

}

@property (nonatomic,retain) DMFUpdateDeclarationsRequest * request;              //@synthesize request=_request - In the implementation block
-(DMFUpdateDeclarationsRequest *)request;
-(void)setRequest:(DMFUpdateDeclarationsRequest *)arg1 ;
-(void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1 ;
@end

