/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@interface NSKeyedUnarchiver : NSCoder {

	id _delegate;
	unsigned _flags;
	id _objRefMap;
	id _replacementMap;
	id _nameClassMap;
	id _tmpRefObjMap;
	id _refObjMap;
	int _genericKey;
	id _data;
	void* _offsetData;
	id _containers;
	id _objects;
	const char* _bytes;
	unsigned long long _len;
	id _helper;
	void* _reserved0;

}

@property (assign) id<NSKeyedUnarchiverDelegate> delegate; 
@property (assign) BOOL requiresSecureCoding; 
@property (assign) long long decodingFailurePolicy; 
+(int)_swift_checkClassAndWarnForKeyedArchiving:(Class)arg1 operation:(int)arg2 ;
+(id)swc_unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)swc_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)pl_safeUnarchiveObjectFromData:(id)arg1 class:(Class)arg2 ;
+(id)pl_safeUnarchiveObjectFromData:(id)arg1 classes:(id)arg2 ;
+(id)pl_safeUnarchiveObjectFromFile:(id)arg1 class:(Class)arg2 ;
+(id)pl_safeUnarchiveObjectFromFile:(id)arg1 classes:(id)arg2 ;
+(id)cpl_safeUnarchiveObjectWithData:(id)arg1 class:(Class)arg2 ;
+(id)cpl_safeUnarchiveObjectWithData:(id)arg1 classes:(id)arg2 ;
+(id)MSSafeUnarchiveAllowedClasses;
+(id)MSSafeUnarchiveObjectWithData:(id)arg1 outError:(id*)arg2 ;
+(id)MSSafeUnarchiveObjectWithFile:(id)arg1 outError:(id*)arg2 ;
+(id)secureUnarchiveData:(id)arg1 withExpectedClass:(Class)arg2 otherAllowedClasses:(id)arg3 ;
+(id)axmSecurelyUnarchiveData:(id)arg1 withExpectedClass:(Class)arg2 otherAllowedClasses:(id)arg3 error:(id*)arg4 ;
+(id)ids_secureUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2 ;
+(id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withFile:(id)arg2 ;
+(id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2 ;
+(id)ls_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(void)initialize;
+(id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
+(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
+(id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id*)arg2 ;
+(id)_strictlyUnarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveObjectWithData:(id)arg1 error:(id*)arg2 ;
+(Class)classForClassName:(id)arg1 ;
-(id)pl_safeInitForReadingFromData:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(BOOL)allowsKeyedCoding;
-(id<NSKeyedUnarchiverDelegate>)delegate;
-(void)setDelegate:(id<NSKeyedUnarchiverDelegate>)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)allowedClasses;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)error;
-(BOOL)requiresSecureCoding;
-(id)decodeObject;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(void)finishDecoding;
-(void)setDecodingFailurePolicy:(long long)arg1 ;
-(id)initForReadingFromData:(id)arg1 error:(id*)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)_containsNextUnkeyedObject;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(long long)versionForClassName:(id)arg1 ;
-(id)initForReadingWithData:(id)arg1 ;
-(unsigned)systemVersion;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(id)decodeDataObject;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(id)_decodePropertyListForKey:(id)arg1 ;
-(BOOL)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2 ;
-(BOOL)_allowsValueCoding;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)setAllowedClasses:(id)arg1 ;
-(long long)decodingFailurePolicy;
-(void)__setError:(id)arg1 ;
-(void)setRequiresSecureCoding:(BOOL)arg1 ;
-(id)_blobForCurrentObject;
-(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
-(id)_initWithStream:(CFReadStreamRef)arg1 data:(id)arg2 topDict:(CFDictionaryRef)arg3 ;
-(id)_initForReadingFromData:(id)arg1 error:(id*)arg2 throwLegacyExceptions:(BOOL)arg3 ;
-(void)_setAllowedClassNames:(id)arg1 ;
-(void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2 ;
-(Class)classForClassName:(id)arg1 ;
-(id)initWithStream:(id)arg1 ;
-(id)_allowedClassNames;
-(void)_replaceObject:(id)arg1 withObject:(id)arg2 ;
-(BOOL)_validatePropertyListClass:(Class)arg1 forKey:(id)arg2 ;
-(void)_enableStrictSecureDecodingMode;
-(unsigned)_currentUniqueIdentifier;
@end
