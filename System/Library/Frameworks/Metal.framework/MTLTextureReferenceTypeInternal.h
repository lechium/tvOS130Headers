/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLTextureReferenceType.h>

@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType {

	unsigned long long _dataType;
	unsigned long long _textureDataType;
	unsigned long long _textureType;
	unsigned long long _access;
	BOOL _isDepthTexture;

}
-(void)dealloc;
-(unsigned long long)textureType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(BOOL)arg4 ;
-(BOOL)isDepthTexture;
-(unsigned long long)textureDataType;
-(unsigned long long)access;
@end

