/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFChooseFromListIntentHandling <NSObject>
@optional
-(void)confirmChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(id)defaultChosenItemsForChooseFromList:(id)arg1;

@required
-(void)handleChooseFromList:(id)arg1 completion:(/*^block*/id)arg2;
-(void)resolvePromptForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resolveChosenItemsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)provideChosenItemsOptionsForChooseFromList:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

