/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MFIMAPResponseConsumer : NSObject {

	NSMutableDictionary* _consumersBySection;

}
-(void)dealloc;
-(void)done;
-(void)addConsumer:(id)arg1 forSection:(id)arg2 ;
-(void)appendData:(id)arg1 forSection:(id)arg2 ;
-(id)consumersBySection;
@end

