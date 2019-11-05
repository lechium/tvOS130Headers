/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/MLFeatureProvider.h>

@class NSSet, NSString;

@interface HMIInputFeatureProvider : NSObject <MLFeatureProvider> {

	CVBufferRef _pixelBuffer;
	NSString* _inputName;

}

@property (readonly) CVBufferRef pixelBuffer;                     //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) NSString * inputName;                        //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(CVBufferRef)pixelBuffer;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSString *)inputName;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 inputName:(id)arg2 ;
@end
