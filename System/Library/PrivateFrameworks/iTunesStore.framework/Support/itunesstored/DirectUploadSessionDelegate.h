/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DirectUploadSessionDelegate <NSObject>
@optional
-(void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;
-(void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;
-(void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;
-(void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;
-(void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;

@end

