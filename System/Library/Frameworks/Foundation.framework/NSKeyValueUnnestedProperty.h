/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueProperty.h>

@class NSArray;

@interface NSKeyValueUnnestedProperty : NSKeyValueProperty {

	NSArray* _affectingProperties;
	BOOL _cachedIsaForAutonotifyingIsValid;
	Class _cachedIsaForAutonotifying;

}
-(id)description;
-(void)dealloc;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(Class)isaForAutonotifying;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(BOOL)arg3 ;
-(BOOL)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(BOOL)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS36*)arg5 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(BOOL)arg4 forwardingValues:(SCD_Struct_NS36)arg5 ;
-(Class)_isaForAutonotifying;
-(id)_keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(BOOL*)arg2 ;
-(id)_keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(void)_givenPropertiesBeingInitialized:(CFSetRef)arg1 getAffectingProperties:(id)arg2 ;
-(void)_addDependentValueKey:(id)arg1 ;
-(id)_initWithContainerClass:(id)arg1 key:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
@end
