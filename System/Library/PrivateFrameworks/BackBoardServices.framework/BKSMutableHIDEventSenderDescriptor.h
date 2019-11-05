/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventSenderDescriptor.h>

@class BKSHIDEventDisplay;

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (assign,nonatomic) long long hardwareType; 
@property (nonatomic,copy) BKSHIDEventDisplay * associatedDisplay; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
+(id)new;
-(id)init;
-(void)setHardwareType:(long long)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setAssociatedDisplay:(BKSHIDEventDisplay *)arg1 ;
-(void)setPrimaryPage:(unsigned)arg1 primaryUsage:(unsigned)arg2 ;
@end
