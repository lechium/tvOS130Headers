/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class SAUIDomainObjectPicker, SADomainObject;

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (nonatomic,retain) SAUIDomainObjectPicker * domainObjectPicker; 
@property (nonatomic,retain) SADomainObject * selectedItem; 
+(id)domainObjectPickerSelection;
+(id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAUIDomainObjectPicker *)domainObjectPicker;
-(void)setDomainObjectPicker:(SAUIDomainObjectPicker *)arg1 ;
-(SADomainObject *)selectedItem;
-(void)setSelectedItem:(SADomainObject *)arg1 ;
@end

