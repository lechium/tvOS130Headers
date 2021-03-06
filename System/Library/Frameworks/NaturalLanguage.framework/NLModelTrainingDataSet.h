/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NaturalLanguage/NLDataSet.h>

@class NLDataProvider;

@interface NLModelTrainingDataSet : NLDataSet {

	NLDataProvider* _modelTrainingDataProvider;
	NLDataProvider* _modelValidationDataProvider;

}
-(id)dataProviderOfType:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 numberOfTrainingInstances:(unsigned long long)arg2 numberOfValidationInstances:(unsigned long long)arg3 trainingDataSource:(void*)arg4 validationDataSource:(void*)arg5 instanceDataProvider:(/*^block*/id)arg6 ;
@end

