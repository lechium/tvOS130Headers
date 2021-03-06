/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSArray;

@interface SAMPCollection : SAMPMediaEntity

@property (assign,nonatomic) BOOL editable; 
@property (nonatomic,copy) NSArray * items; 
+(id)collection;
+(id)collectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(void)setEditable:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)editable;
@end

