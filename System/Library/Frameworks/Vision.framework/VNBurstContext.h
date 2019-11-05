/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BurstImageSetInternal;

@interface VNBurstContext : NSObject {

	BurstImageSetInternal* _burstSet;

}

@property (nonatomic,copy) id loggingCallback; 
-(void)dealloc;
-(id)bestImageIdentifiers;
-(id)allImageIdentifiers;
-(BOOL)isAction;
-(BOOL)isPortrait;
-(id)coverImageIdentifier;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)allImageStats;
-(id)loggingCallback;
-(void)setLoggingCallback:(id)arg1 ;
-(BOOL)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id*)arg4 ;
-(id)allClusters;
@end
