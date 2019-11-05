/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEKeyer.h>

@interface PAESimpleKeyer : PAEKeyer
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA76*)arg3 ;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)pullInitialKey:(id*)arg1 ;
-(BOOL)isSimpleKey;
-(HGRef<HGNode>*)getKeyerNode:(HGRef<HGNode>*)arg1 omKeyer:(PAEKeyerOMKeyer2D*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)finishInitialSetup:(id*)arg1 ;
-(BOOL)oscIsPublishable;
-(void)createLutForNode:(HGNode*)arg1 input:(int)arg2 rect:(const HGRect*)arg3 omKeyer:(PAEKeyerOMKeyer2D*)arg4 ;
@end
