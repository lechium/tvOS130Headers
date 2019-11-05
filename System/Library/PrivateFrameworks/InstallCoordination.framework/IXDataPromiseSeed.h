/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/NSSecureCoding.h>
#import <InstallCoordination/NSCopying.h>

@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	unsigned long long _creatorIdentifier;
	NSUUID* _uniqueIdentifier;
	unsigned long long _totalBytesNeededOnDisk;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long creatorIdentifier;                   //@synthesize creatorIdentifier=_creatorIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * uniqueIdentifier;                              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytesNeededOnDisk;              //@synthesize totalBytesNeededOnDisk=_totalBytesNeededOnDisk - In the implementation block
@property (nonatomic,readonly) Class clientPromiseClass; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSUUID *)arg1 ;
-(Class)clientPromiseClass;
-(unsigned long long)creatorIdentifier;
-(unsigned long long)totalBytesNeededOnDisk;
-(void)setCreatorIdentifier:(unsigned long long)arg1 ;
-(void)setTotalBytesNeededOnDisk:(unsigned long long)arg1 ;
@end
