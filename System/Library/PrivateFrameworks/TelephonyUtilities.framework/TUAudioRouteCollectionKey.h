/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/NSCopying.h>

@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying> {

	NSString* _category;
	NSString* _mode;

}

@property (nonatomic,copy,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * mode;                  //@synthesize mode=_mode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)isEqualToAudioRouteCollectionKey:(id)arg1 ;
-(id)initWithCategory:(id)arg1 mode:(id)arg2 ;
@end
