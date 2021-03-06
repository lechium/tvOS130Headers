/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/BSDescriptionProviding.h>
#import <SpringBoardServices/BSXPCCoding.h>
#import <SpringBoardServices/NSSecureCoding.h>

@class BSProcessHandle, NSString;

@interface SBSRemoteAlertPresentationTarget : NSObject <BSDescriptionProviding, BSXPCCoding, NSSecureCoding> {

	BOOL _shouldDismissOnUILock;
	BSProcessHandle* _targetProcess;

}

@property (nonatomic,readonly) BSProcessHandle * targetProcess;              //@synthesize targetProcess=_targetProcess - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissOnUILock;                     //@synthesize shouldDismissOnUILock=_shouldDismissOnUILock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithTargetProcess:(id)arg1 ;
-(void)setShouldDismissOnUILock:(BOOL)arg1 ;
-(BSProcessHandle *)targetProcess;
-(BOOL)shouldDismissOnUILock;
@end

