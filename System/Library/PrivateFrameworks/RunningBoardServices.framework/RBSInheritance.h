/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/BSXPCSecureCoding.h>
#import <RunningBoardServices/BSDescriptionProviding.h>
#import <RunningBoardServices/NSCopying.h>

@protocol OS_xpc_object;
@class NSString, NSObject, RBSAssertionIdentifier;

@interface RBSInheritance : NSObject <BSXPCSecureCoding, BSDescriptionProviding, NSCopying> {

	NSString* _endowmentNamespace;
	NSString* _environment;
	NSObject*<OS_xpc_object> _encodedEndowment;
	RBSAssertionIdentifier* _originatingIdentifier;
	unsigned long long _originatingAttributePath;
	unsigned long long _hash;

}

@property (nonatomic,copy,readonly) RBSAssertionIdentifier * originatingIdentifier;              //@synthesize originatingIdentifier=_originatingIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long originatingAttributePath;                      //@synthesize originatingAttributePath=_originatingAttributePath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> encodedEndowment;                        //@synthesize encodedEndowment=_encodedEndowment - In the implementation block
@property (nonatomic,copy,readonly) NSString * endowmentNamespace;                               //@synthesize endowmentNamespace=_endowmentNamespace - In the implementation block
@property (nonatomic,readonly) NSString * environment;                                           //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSString *)environment;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)endowmentNamespace;
-(NSObject*)endowment;
-(NSObject*<OS_xpc_object>)encodedEndowment;
-(id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5 ;
-(RBSAssertionIdentifier *)originatingIdentifier;
-(unsigned long long)originatingAttributePath;
@end

