/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/NSSecureCoding.h>

@class NSSet;

@interface HMCameraStreamVideoPreferences : NSObject <NSSecureCoding> {

	NSSet* _resolutions;

}

@property (nonatomic,readonly) NSSet * resolutions;              //@synthesize resolutions=_resolutions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)resolutions;
-(id)initWithResolutions:(id)arg1 ;
@end

