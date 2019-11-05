/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _TVRibbonCellMaskingParameters : NSObject {

	BOOL _ribbonContainsFocus;
	unsigned long long _maskingMode;
	unsigned long long _position;
	double _parallaxDirection;
	long long _distanceFromCenterIndex;

}

@property (assign,nonatomic) unsigned long long maskingMode;                 //@synthesize maskingMode=_maskingMode - In the implementation block
@property (assign,nonatomic) unsigned long long position;                    //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL ribbonContainsFocus;                       //@synthesize ribbonContainsFocus=_ribbonContainsFocus - In the implementation block
@property (assign,nonatomic) double parallaxDirection;                       //@synthesize parallaxDirection=_parallaxDirection - In the implementation block
@property (assign,nonatomic) long long distanceFromCenterIndex;              //@synthesize distanceFromCenterIndex=_distanceFromCenterIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)position;
-(void)setPosition:(unsigned long long)arg1 ;
-(BOOL)ribbonContainsFocus;
-(id)initWithMaskingMode:(unsigned long long)arg1 position:(unsigned long long)arg2 ribbonContainsFocus:(BOOL)arg3 parallaxDirection:(double)arg4 distanceFromCenterIndex:(long long)arg5 ;
-(void)setRibbonContainsFocus:(BOOL)arg1 ;
-(unsigned long long)maskingMode;
-(double)parallaxDirection;
-(long long)distanceFromCenterIndex;
-(void)setMaskingMode:(unsigned long long)arg1 ;
-(void)setParallaxDirection:(double)arg1 ;
-(void)setDistanceFromCenterIndex:(long long)arg1 ;
@end
