/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SignpostSupportObjectFilter : NSObject {

	/*^block*/id _filterBlock;

}

@property (nonatomic,copy,readonly) id filterBlock;              //@synthesize filterBlock=_filterBlock - In the implementation block
-(id)filterBlock;
-(BOOL)passesObject:(id)arg1 ;
-(id)initWithFilterBlock:(/*^block*/id)arg1 ;
@end

