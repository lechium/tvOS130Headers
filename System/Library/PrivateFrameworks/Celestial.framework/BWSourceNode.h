/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@interface BWSourceNode : BWNode

@property (nonatomic,readonly) OpaqueCMClockRef clock; 
-(id)nodeType;
-(OpaqueCMClockRef)clock;
-(BOOL)stop:(id*)arg1 ;
-(BOOL)start:(id*)arg1 ;
-(void)makeOutputsLiveIfNeeded;
@end

