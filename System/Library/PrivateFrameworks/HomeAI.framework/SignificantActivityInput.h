/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/MLFeatureProvider.h>

@class NSSet;

@interface SignificantActivityInput : NSObject <MLFeatureProvider> {

	CVBufferRef _image__Placeholder__0;

}

@property (assign,nonatomic) CVBufferRef image__Placeholder__0;              //@synthesize image__Placeholder__0=_image__Placeholder__0 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithImage__Placeholder__0:(CVBufferRef)arg1 ;
-(CVBufferRef)image__Placeholder__0;
-(void)setImage__Placeholder__0:(CVBufferRef)arg1 ;
@end
