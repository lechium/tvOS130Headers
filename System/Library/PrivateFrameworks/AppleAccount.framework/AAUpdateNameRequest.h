/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest {

	NSString* _newFirstName;
	NSString* _newLastName;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 ;
@end

