/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFZlibDataCompressionOptions : NSObject {

	int _compressionLevel;
	int _strategy;
	int _windowBits;
	int _memoryLevel;
	int _chunkSize;

}

@property (assign,nonatomic) int compressionLevel;              //@synthesize compressionLevel=_compressionLevel - In the implementation block
@property (assign,nonatomic) int strategy;                      //@synthesize strategy=_strategy - In the implementation block
@property (assign,nonatomic) int windowBits;                    //@synthesize windowBits=_windowBits - In the implementation block
@property (assign,nonatomic) int memoryLevel;                   //@synthesize memoryLevel=_memoryLevel - In the implementation block
@property (assign,nonatomic) int chunkSize;                     //@synthesize chunkSize=_chunkSize - In the implementation block
+(id)defaultOptions;
-(int)strategy;
-(void)setStrategy:(int)arg1 ;
-(void)setChunkSize:(int)arg1 ;
-(int)chunkSize;
-(void)setCompressionLevel:(int)arg1 ;
-(void)setCompressionStrategy:(int)arg1 ;
-(int)compressionLevel;
-(int)windowBits;
-(void)setWindowBits:(int)arg1 ;
-(int)memoryLevel;
-(void)setMemoryLevel:(int)arg1 ;
@end
