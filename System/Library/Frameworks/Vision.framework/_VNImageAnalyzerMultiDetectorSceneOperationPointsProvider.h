/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNOperationPointsProviding.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding> {

	_VNImageAnalyzerMultiDetectorSceneOperationPointsCache* _operationPointsCache;
	unsigned long long _requestRevision;

}
-(id)operationPointsAndReturnError:(id*)arg1 ;
-(id)initWithOperationPointsCache:(id)arg1 requestRevision:(unsigned long long)arg2 ;
@end
