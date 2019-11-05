/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSCore-Structs.h>
#import <MPSCore/MPSImage.h>

@interface MPSTemporaryImage : MPSImage {

	unsigned long long _readCount;

}

@property (assign,nonatomic) unsigned long long readCount;              //@synthesize readCount=_readCount - In the implementation block
+(id)defaultAllocator;
+(id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2 ;
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 featureChannels:(unsigned long long)arg3 ;
+(id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2 ;
-(id)debugDescription;
-(void)dealloc;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(unsigned long long)readCount;
-(id)initWithParentImage:(id)arg1 sliceRange:(NSRange)arg2 featureChannels:(unsigned long long)arg3 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP13)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP13)arg5 featureChannelInfo:(SCD_Struct_MP2)arg6 imageIndex:(unsigned long long)arg7 ;
@end
