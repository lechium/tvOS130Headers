/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(BOOL)isGestureServiceEnabled;
+(BOOL)isGestureServiceAvailable;
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithPriority:(int)arg1 ;
-(void)setGestureHandler:(id)arg1 ;
-(id)gestureHandler;
@end
