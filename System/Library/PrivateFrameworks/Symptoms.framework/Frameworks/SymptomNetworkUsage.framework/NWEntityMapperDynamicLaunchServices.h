/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomNetworkUsage/NWEntityMapperNEHelper.h>

@class EntityMapCache;

@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper {

	EntityMapCache* _entityMap;

}
-(id)init;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(id)_attemptConvertingPluginNameToContainingAppName:(id)arg1 ;
-(id)stateDictionary;
-(id)_identifierForUUID:(id)arg1 fromSet:(id)arg2 ;
-(id)handleNewUUID:(id)arg1 ;
@end
