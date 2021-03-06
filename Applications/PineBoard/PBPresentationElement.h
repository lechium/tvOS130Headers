/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PBPresentationElement <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) long long layoutLevel; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) BOOL shouldForwardHIDEvents; 
@required
-(NSString *)identifier;
-(unsigned long long)state;
-(long long)layoutLevel;
-(BOOL)shouldForwardHIDEvents;

@end

