/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNPropertyDescription.h>

@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription

@property (nonatomic,readonly) Class valueClass; 
@property (nonatomic,readonly) BOOL isSingleValue; 
@property (nonatomic,readonly) BOOL isMultiValue; 
@property (nonatomic,readonly) NSArray * standardLabels; 
@property (nonatomic,readonly) NSArray * managedLabels; 
@property (nonatomic,readonly) Class labeledValueClass; 
@property (nonatomic,readonly) id plistTransform; 
@property (nonatomic,readonly) id fromPlistTransform; 
-(const void*)ABSValueFromCNValue:(id)arg1 ;
-(BOOL)isABSLabeledValueValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)CNValueFromABSValue:(void*)arg1 ;
-(/*^block*/id)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
-(/*^block*/id)CNLabeledValueFromABSMultiValueTranform;
-(/*^block*/id)passThroughMultivalueTransformWithLabelMapping:(id)arg1 ;
-(/*^block*/id)multiValueTransformWithLabelMapping:(id)arg1 valueTransform:(/*^block*/id)arg2 ;
-(/*^block*/id)dictionaryBasedMultiValueTransformWithLabelMapping:(id)arg1 inputKeys:(id)arg2 destinationClass:(Class)arg3 valueMapping:(id)arg4 ;
-(Class)valueClass;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(NSArray *)managedLabels;
-(id)localizedStringForLabel:(id)arg1 ;
-(BOOL)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2 ;
-(id)fromPlistTransform;
-(NSArray *)standardLabels;
-(id)stringForIndexingForContact:(id)arg1 ;
-(Class)labeledValueClass;
-(id)plistTransform;
-(BOOL)isValidMultiValueValue:(id)arg1 error:(id*)arg2 ;
-(id)standardLabelsWithOptions:(unsigned long long)arg1 ;
-(BOOL)isMultiValue;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(id)CNMutableValueForABMultivalue;
-(BOOL)applyABMultivalueValueBytes:(char*)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6 ;
-(BOOL)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5 ;
-(id)CNLabeledValueValueFromABMultiValueValueBytes:(char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
-(id)valueWithResetIdentifiers:(id)arg1 ;
-(void)assertValueType:(id)arg1 ;
-(void*)ABMutableMultiValueForABPerson:(void*)arg1 ;
-(BOOL)isSingleValue;
-(unsigned)abPropertyType;
-(id)CNLabeledValueLabelFromABMultiValueLabel:(CFStringRef)arg1 ;
-(CFStringRef)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3 ;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2 ;
@end

