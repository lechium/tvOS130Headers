/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <RunningBoardServices/BSXPCSecureCoding.h>
#import <RunningBoardServices/RBSProcessMatching.h>

@class RBSProcessPredicateImpl, NSString, RBSProcessIdentity;

@interface RBSProcessPredicate : NSObject <BSXPCSecureCoding, RBSProcessMatching> {

	RBSProcessPredicateImpl* _predicate;

}

@property (nonatomic,readonly) unsigned euid; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * extensionPoint; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) RBSProcessIdentity * processIdentity; 
@property (nonatomic,readonly) RBSProcessPredicateImpl * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicate;
+(BOOL)supportsBSXPCSecureCoding;
+(id)predicateMatchingIdentifier:(id)arg1 ;
+(id)predicateMatchingTarget:(id)arg1 ;
+(id)predicateMatchingBundleIdentifier:(id)arg1 ;
+(id)predicateMatchingPredicates:(id)arg1 ;
+(id)predicateMatching:(id)arg1 ;
+(id)predicatePowerLogProcesses;
+(id)predicateMatchingIdentity:(id)arg1 ;
+(id)predicateMatchingEuid:(unsigned)arg1 ;
+(id)predicateMatchingExtensionPoint:(id)arg1 ;
+(id)predicateMatchingHandle:(id)arg1 ;
+(id)predicateMatchingJobLabel:(id)arg1 ;
+(id)predicateMatchingServiceName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned)euid;
-(NSString *)bundleIdentifier;
-(id)processIdentifier;
-(RBSProcessPredicateImpl *)predicate;
-(NSString *)serviceName;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(NSString *)jobLabel;
-(RBSProcessIdentity *)processIdentity;
-(id)initWithPredicate:(id)arg1 ;
-(NSString *)extensionPoint;
-(BOOL)matchesProcess:(id)arg1 ;
-(id)processPredicate;
@end

