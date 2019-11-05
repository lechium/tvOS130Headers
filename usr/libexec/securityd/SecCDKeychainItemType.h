/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:50 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, SecCDKeychainManagedItemType, NSArray;

@interface SecCDKeychainItemType : NSObject {

	NSString* _name;
	int _version;
	NSSet* _primaryKeys;
	NSSet* _syncableKeys;
	SecCDKeychainManagedItemType* _managedItemType;

}

@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (readonly) int version;                                                 //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSArray * primaryKeys; 
@property (copy,readonly) NSArray * syncableKeys; 
@property (readonly) SecCDKeychainManagedItemType * managedItemType;              //@synthesize managedItemType=_managedItemType - In the implementation block
+(id)itemTypeForVersion:(int)arg1 ;
+(id)itemType;
-(id)managedItemTypeWithContext:(id)arg1 error:(id*)arg2 ;
-(id)_initWithName:(id)arg1 version:(int)arg2 primaryKeys:(id)arg3 syncableKeys:(id)arg4 ;
-(NSArray *)syncableKeys;
-(SecCDKeychainManagedItemType *)managedItemType;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(int)version;
-(NSArray *)primaryKeys;
@end
