/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNRegulatoryLogger.h>

@class NSString;

@interface _CNRegulatoryLogger : NSObject <CNRegulatoryLogger> {

	ct_green_tea_logger_sRef _log;

}

@property (nonatomic,readonly) ct_green_tea_logger_sRef log;              //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(ct_green_tea_logger_sRef)log;
-(void)readingContactsData;
-(void)modifyingContactsData;
-(void)readAndTransmittingContactsData;
@end

