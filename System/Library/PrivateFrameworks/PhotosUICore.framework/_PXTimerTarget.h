/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PXTimerTarget : NSObject {

	id _target;
	SEL _selector;

}

@property (assign,nonatomic,__weak) id target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                  //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(void)handleTimer:(id)arg1 ;
@end
