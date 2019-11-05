/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface PLProgressFollower : NSObject {

	NSProgress* _sourceProgress;
	/*^block*/id _progressHandler;
	NSProgress* _outputProgress;

}

@property (retain) NSProgress * outputProgress;              //@synthesize outputProgress=_outputProgress - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithSourceProgress:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(NSProgress *)outputProgress;
-(void)setOutputProgress:(NSProgress *)arg1 ;
@end
