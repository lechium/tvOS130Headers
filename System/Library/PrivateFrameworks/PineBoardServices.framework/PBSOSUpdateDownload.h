/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <PineBoardServices/NSSecureCoding.h>
#import <PineBoardServices/NSCopying.h>

@class PBSOSUpdateOperationProgress, PBSOSUpdateDescriptor;

@interface PBSOSUpdateDownload : NSObject <NSSecureCoding, NSCopying> {

	PBSOSUpdateOperationProgress* _progress;
	PBSOSUpdateDescriptor* _descriptor;

}

@property (nonatomic,retain) PBSOSUpdateDescriptor * descriptor;                   //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) PBSOSUpdateOperationProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PBSOSUpdateOperationProgress *)progress;
-(void)setProgress:(PBSOSUpdateOperationProgress *)arg1 ;
-(PBSOSUpdateDescriptor *)descriptor;
-(void)setDescriptor:(PBSOSUpdateDescriptor *)arg1 ;
-(unsigned long long)totalSpaceConsumed;
@end

