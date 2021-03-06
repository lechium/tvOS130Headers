/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAESunburst : PAEGeneratorDefaultBase
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(id)multiplyMatrix:(id)arg1 byMatrix:(id)arg2 ;
-(void)getTransformMatrix:(double*)arg1 forCenterX:(double)arg2 centerY:(double)arg3 angle:(double)arg4 andOutputImage:(id)arg5 ;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA76*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)frameCleanup;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA76*)arg2 ;
@end

