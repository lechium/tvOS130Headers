/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNMTLResourceBinding.h>

@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding {

	SCD_Struct_SC94* _inputs;
	C3DFXPassInputRef _samplerInput;
	long long inputsCount;
	long long bufferSize;

}

@property (assign,nonatomic) long long inputsCount; 
@property (assign,nonatomic) long long bufferSize; 
-(id)init;
-(void)dealloc;
-(long long)bufferSize;
-(void)setBufferSize:(long long)arg1 ;
-(long long)inputsCount;
-(void)setInputsCount:(long long)arg1 ;
@end

