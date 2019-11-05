/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSPersistentStoreRequest, NSArray;


@protocol CNContactImageRequest <NSObject>
@property (nonatomic,readonly) NSPersistentStoreRequest * persistentStoreRequest; 
@property (nonatomic,retain) NSArray * contactIdentifiers; 
@required
-(NSPersistentStoreRequest *)persistentStoreRequest;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1;

@end
