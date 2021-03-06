/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
@class MRContext;

@interface MRMesh : NSObject {

	MRContext* _context;
	unsigned long long _countOfVertices;
	unsigned long long _countOfIndices;
	unsigned _vao;
	unsigned _staticVBO;
	unsigned _dynamicVBO;
	unsigned _streamVBO;
	unsigned _indexBuffer;
	char _staticVBOFeatures;
	char _dynamicVBOFeatures;
	char _streamVBOFeatures;
	char _type;

}
-(void)setStreamVBOVertex2DColorTexturePointer:(SCD_Struct_MR15*)arg1 ;
-(void)setStreamVBOVertex3DPointer:(SCD_Struct_MR16*)arg1 ;
-(void)setStaticVBOVertex2DPointer:(SCD_Struct_MR17*)arg1 ;
-(void)setStreamVBOVertex2DColorPointer:(SCD_Struct_MR18*)arg1 ;
-(void)makeTriangleStrip;
-(void)setStaticVBOVertex3DPointer:(SCD_Struct_MR16*)arg1 ;
-(void)setStreamVBOVertex3DColorTexturePointer:(SCD_Struct_MR19*)arg1 ;
-(void)setDynamicVBOVertex3DNormalTexturePointer:(SCD_Struct_MR15*)arg1 ;
-(void)setDynamicVBOVertexNormalTexturePointer:(SCD_Struct_MR20*)arg1 ;
-(void)setStreamVBOVertex3DNormalTexture01Pointer:(SCD_Struct_MR21*)arg1 ;
-(void)setDynamicVBOVertex2DPointer:(SCD_Struct_MR17*)arg1 ;
-(void)makeTriangles;
-(void)setStreamVBOVertex2DPointer:(SCD_Struct_MR17*)arg1 ;
-(void)_updateVBO:(unsigned*)arg1 andFeatures:(char*)arg2 withPointer:(void*)arg3 andFeatures:(char)arg4 ;
-(void)makeGenericThenRectangularIndexedTriangleStripStartingAtIndex:(unsigned long long)arg1 withWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3 ;
-(id)initWithContext:(id)arg1 andCountOfVertices:(unsigned long long)arg2 ;
-(void)setStaticVBOVertexTexturePointer:(SCD_Struct_MR17*)arg1 ;
-(void)makeRectangularIndexedTriangleStripWithWidth:(unsigned long long)arg1 andHeight:(unsigned long long)arg2 ;
-(void)setStreamVBOVertex3DNormalPointer:(SCD_Struct_MR18*)arg1 ;
-(void)setStaticVBOVertexNormalPointer:(SCD_Struct_MR16*)arg1 ;
-(void)setStreamVBOVertex2DTexturePointer:(SCD_Struct_MR22*)arg1 ;
-(void)setStaticVBOVertex3DNormalPointer:(SCD_Struct_MR18*)arg1 ;
-(void)setDynamicVBOVertex3DPointer:(SCD_Struct_MR16*)arg1 ;
-(void)setStreamVBOVertexTexturePointer:(SCD_Struct_MR17*)arg1 ;
-(void)setDynamicVBOVertex3DTexturePointer:(SCD_Struct_MR20*)arg1 ;
-(void)setStaticVBOVertex2DTexturePointer:(SCD_Struct_MR22*)arg1 ;
-(void)setStaticVBOVertex3DTexturePointer:(SCD_Struct_MR20*)arg1 ;
-(void)setDynamicVBOVertexTexturePointer:(SCD_Struct_MR17*)arg1 ;
-(void)setStreamVBOVertexNormalTexturePointer:(SCD_Struct_MR20*)arg1 ;
-(void)setStaticVBOVertex3DColorTexturePointer:(SCD_Struct_MR19*)arg1 ;
-(void)setDynamicVBOVertex3DNormalPointer:(SCD_Struct_MR18*)arg1 ;
-(void)setStaticVBOVertex2DColorPointer:(SCD_Struct_MR18*)arg1 ;
-(void)makeQuads;
-(void)setStaticVBOVertex2DColorTexturePointer:(SCD_Struct_MR15*)arg1 ;
-(void)setStreamVBOVertexNormalPointer:(SCD_Struct_MR16*)arg1 ;
-(void)setStreamVBOVertex3DNormalTexturePointer:(SCD_Struct_MR15*)arg1 ;
-(void)setDynamicVBOVertex2DTexturePointer:(SCD_Struct_MR22*)arg1 ;
-(void)setStreamVBOVertex3DTexturePointer:(SCD_Struct_MR20*)arg1 ;
-(void)setDynamicVBOVertexNormalPointer:(SCD_Struct_MR16*)arg1 ;
-(void)setStaticVBOVertexNormalTexturePointer:(SCD_Struct_MR20*)arg1 ;
-(void)setDynamicVBOVertex2DColorTexturePointer:(SCD_Struct_MR15*)arg1 ;
-(void)setDynamicVBOVertex3DColorTexturePointer:(SCD_Struct_MR19*)arg1 ;
-(void)setDynamicVBOVertex2DColorPointer:(SCD_Struct_MR18*)arg1 ;
-(void)setStaticVBOVertex3DNormalTexturePointer:(SCD_Struct_MR15*)arg1 ;
-(void)dealloc;
-(void)cleanup;
-(void)bind;
-(void)draw;
-(void)unbind;
@end

