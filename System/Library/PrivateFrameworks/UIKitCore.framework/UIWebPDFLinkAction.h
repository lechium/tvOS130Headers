/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIWebPDFLinkAction : NSObject {

	int type;
	NSString* title;
	/*^block*/id handler;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) id handler; 
-(void)dealloc;
-(id)handler;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
@end
