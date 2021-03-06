/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBDomainAttributeManaging.h>
#import <RunningBoard/RBStateCapturing.h>

@protocol RBDomainAttributeDataProviding;
@class NSDictionary, NSString;

@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing> {

	NSDictionary* _domainAttributeTemplatesByDomain;
	id<RBDomainAttributeDataProviding> _dataProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)debugDescription;
-(id)captureState;
-(id)initWithDataProvider:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4 ;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2 ;
-(NSString*)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2 ;
-(BOOL)containsAttributeWithDomain:(id)arg1 andName:(id)arg2 ;
-(id)allEntitlements;
-(BOOL)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3 ;
-(void)_prepareAttributeTemplates;
-(BOOL)_compareTargetBundleProperties:(id)arg1 withTargetProperties:(id)arg2 ;
@end

