/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class EvaluatorDownload;

@interface ReviewNetworkPolicyTask : Task {

	EvaluatorDownload* _download;
	BOOL _accessWasUnblocked;
	BOOL _suppressDialogs;
	long long _cellularResult;
	long long _constrainedResult;

}

@property (readonly) BOOL accessWasUnblocked;                //@synthesize accessWasUnblocked=_accessWasUnblocked - In the implementation block
@property (assign) long long cellularResult;                 //@synthesize cellularResult=_cellularResult - In the implementation block
@property (assign) long long constrainedResult;              //@synthesize constrainedResult=_constrainedResult - In the implementation block
@property (assign) BOOL suppressDialogs;                     //@synthesize suppressDialogs=_suppressDialogs - In the implementation block
-(void)main;
-(id)initWithDownload:(id)arg1 ;
-(void)setConstrainedResult:(long long)arg1 ;
-(void)setCellularResult:(long long)arg1 ;
-(long long)cellularResult;
-(long long)constrainedResult;
-(BOOL)accessWasUnblocked;
-(BOOL)suppressDialogs;
-(void)setSuppressDialogs:(BOOL)arg1 ;
@end

