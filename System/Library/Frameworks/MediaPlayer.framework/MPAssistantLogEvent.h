/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSMutableDictionary;


@protocol MPAssistantLogEvent <NSObject>
@property (nonatomic,readonly) long long eventCode; 
@property (nonatomic,readonly) NSMutableDictionary * eventPayload; 
@required
-(long long)eventCode;
-(NSMutableDictionary *)eventPayload;

@end
