/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSArray, NSString;

@interface _WKContentRuleListAction : NSObject <WKObject> {

	ObjectStorage<API::ContentRuleListAction> _action;

}

@property (nonatomic,readonly) BOOL blockedLoad; 
@property (nonatomic,readonly) BOOL blockedCookies; 
@property (nonatomic,readonly) BOOL madeHTTPS; 
@property (nonatomic,copy,readonly) NSArray * notifications; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSArray *)notifications;
-(Object*)_apiObject;
-(BOOL)blockedLoad;
-(BOOL)blockedCookies;
-(BOOL)madeHTTPS;
@end

