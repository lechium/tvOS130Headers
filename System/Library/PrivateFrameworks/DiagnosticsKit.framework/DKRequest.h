/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DKRequest <DKRequestExtensionHandler>
@property (assign,nonatomic,__weak) id<DKRequestDelegate> delegate; 
@property (nonatomic,retain) id context; 
@property (assign,nonatomic,__weak) id hostServicesDelegate; 
@required
+(id)requestWithExtensionAttributes:(id)arg1;
-(id<DKRequestDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(id)context;
-(void)setContext:(id)arg1;
-(id)connectWithError:(id*)arg1;
-(void)setHostServicesDelegate:(id)arg1;
-(id)hostServicesDelegate;
-(void)beginWithPayload:(id)arg1;

@end
