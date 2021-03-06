/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSURLControllerHandlerDelegate;
@class NSObject;

@interface PSURLControllerHandler : NSObject {

	NSObject*<PSURLControllerHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<PSURLControllerHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<PSURLControllerHandlerDelegate>)delegate;
-(void)setDelegate:(NSObject*<PSURLControllerHandlerDelegate>)arg1 ;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

