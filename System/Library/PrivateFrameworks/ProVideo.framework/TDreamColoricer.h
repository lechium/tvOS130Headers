/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamColoricer : TDreamProgramWrapper {

	int firstColorUniform;
	int secondColorUniform;
	TDColor3 _secondColor;
	TDColor3 _firstColor;

}

@property (assign,nonatomic) TDColor3 firstColor;               //@synthesize firstColor=_firstColor - In the implementation block
@property (assign,nonatomic) TDColor3 secondColor;              //@synthesize secondColor=_secondColor - In the implementation block
-(id)init;
-(void)setUniforms;
-(TDColor3)secondColor;
-(void)setSecondColor:(TDColor3)arg1 ;
-(TDColor3)firstColor;
-(void)setFirstColor:(TDColor3)arg1 ;
@end

