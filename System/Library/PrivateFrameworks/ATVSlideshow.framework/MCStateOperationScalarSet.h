/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCStateOperation.h>

@interface MCStateOperationScalarSet : MCStateOperation {

	double _scalar;

}

@property (assign,nonatomic) double scalar;              //@synthesize scalar=_scalar - In the implementation block
+(id)stateOperationForTargetPlugObjectID:(id)arg1 withStateKey:(id)arg2 andScalar:(double)arg3 ;
-(id)description;
-(void)setScalar:(double)arg1 ;
-(double)scalar;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end
