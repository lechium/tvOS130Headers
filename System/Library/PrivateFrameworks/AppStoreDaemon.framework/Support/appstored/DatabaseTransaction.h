/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DatabaseSession.h>

@class NSMutableArray;

@interface DatabaseTransaction : DatabaseSession {

	NSMutableArray* _postCommitHandlers;

}
-(void)executePostCommitHandlersWithResult:(BOOL)arg1 ;
-(id)changeset;
-(void)addPostCommitHandler:(/*^block*/id)arg1 ;
@end
