/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, HMSettingValue;


@protocol HMDSettingOwnerProtocol <HMDSettingProtocol>
@property (readonly) NSArray * constraints; 
@property (copy,readonly) HMSettingValue * internalValue; 
@required
-(NSArray *)constraints;
-(void)addConstraint:(id)arg1;
-(HMSettingValue *)internalValue;
-(BOOL)updateWithSettingValue:(id)arg1;

@end

