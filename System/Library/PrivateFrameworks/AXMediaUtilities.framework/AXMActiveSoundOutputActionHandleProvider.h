/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXMActiveSoundOutputActionHandleProvider <NSObject>
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@required
-(void)stop;
-(float)pitch;
-(void)setPitch:(float)arg1;
-(void)setRate:(float)arg1;
-(float)rate;
-(void)setQuantizedRate:(long long)arg1;

@end

