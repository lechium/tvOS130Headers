/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/NSObject.h>
#import <PhotosImagingFoundation/NSCopying.h>

@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <NSObject, NSCopying> {

	NSUUID* _UUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presetifyAdjustment:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(id)identifier;
-(id)UUID;
-(void)setUUID:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(id)autoIdentifier;
-(id)settingsDictionary;
-(id)archivalRepresentation;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
@end
