/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/NSSecureCoding.h>
#import <HomeKit/HMObjectMerge.h>
#import <HomeKit/HMFDumpState.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge, HMFDumpState> {

	NSString* _categoryType;
	NSString* _name;

}

@property (nonatomic,copy) NSString * categoryType;                               //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isWiFiRouterAccessoryCategory; 
@property (readonly) BOOL isTelevisionAccessoryCategory; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)categoryType;
-(void)setCategoryType:(NSString *)arg1 ;
-(id)dumpState;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(BOOL)isTelevisionAccessoryCategory;
-(BOOL)isWiFiRouterAccessoryCategory;
@end

