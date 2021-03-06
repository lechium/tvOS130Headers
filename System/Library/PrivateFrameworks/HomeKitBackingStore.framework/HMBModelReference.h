/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitBackingStore/NSSecureCoding.h>

@class NSUUID, HMBLocalZone;

@interface HMBModelReference : HMFObject <NSSecureCoding> {

	NSUUID* _hmbModelID;
	HMBLocalZone* _localZone;

}

@property (assign,nonatomic,__weak) HMBLocalZone * localZone;              //@synthesize localZone=_localZone - In the implementation block
@property (nonatomic,retain) NSUUID * hmbModelID;                          //@synthesize hmbModelID=_hmbModelID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)hmbModelID;
-(void)setLocalZone:(HMBLocalZone *)arg1 ;
-(HMBLocalZone *)localZone;
-(id)initWithModelID:(id)arg1 ;
-(void)associateWithContainer:(id)arg1 ;
-(void)setHmbModelID:(NSUUID *)arg1 ;
-(id)isValidForContainer:(id)arg1 updatedModelIDs:(id)arg2 ;
-(id)referencedModelFrom:(id)arg1 error:(id*)arg2 ;
@end

