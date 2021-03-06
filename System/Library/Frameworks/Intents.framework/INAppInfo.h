/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/NSSecureCoding.h>

@class NSString, NSSet, NSData;

@interface INAppInfo : NSObject <NSSecureCoding> {

	NSString* _applicationIdentifier;
	NSString* _companionApplicationIdentifier;
	NSString* _developmentRegion;
	NSSet* _supportedActions;
	NSSet* _supportedActionsByExtensions;
	NSSet* _actionsRestrictedWhileLocked;
	NSSet* _actionsRestrictedWhileProtectedDataUnavailable;
	NSSet* _supportedMediaCategories;
	NSSet* _definedIntents;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                    //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * companionApplicationIdentifier;                           //@synthesize companionApplicationIdentifier=_companionApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * developmentRegion;                                        //@synthesize developmentRegion=_developmentRegion - In the implementation block
@property (nonatomic,copy) NSSet * supportedActions;                                            //@synthesize supportedActions=_supportedActions - In the implementation block
@property (nonatomic,copy) NSSet * supportedActionsByExtensions;                                //@synthesize supportedActionsByExtensions=_supportedActionsByExtensions - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileLocked;                                //@synthesize actionsRestrictedWhileLocked=_actionsRestrictedWhileLocked - In the implementation block
@property (nonatomic,copy) NSSet * actionsRestrictedWhileProtectedDataUnavailable;              //@synthesize actionsRestrictedWhileProtectedDataUnavailable=_actionsRestrictedWhileProtectedDataUnavailable - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaCategories;                                    //@synthesize supportedMediaCategories=_supportedMediaCategories - In the implementation block
@property (nonatomic,copy) NSSet * definedIntents;                                              //@synthesize definedIntents=_definedIntents - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)appInfoWithAppProxy:(id)arg1 ;
+(id)appInfoWithData:(id)arg1 error:(id*)arg2 ;
+(id)appInfoWithIntent:(id)arg1 ;
+(id)_appInfoWithAppProxy:(id)arg1 plugInKitPlugins:(id)arg2 userActivityTypes:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)companionApplicationIdentifier;
-(void)setCompanionApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)developmentRegion;
-(void)setDevelopmentRegion:(NSString *)arg1 ;
-(NSSet *)supportedActions;
-(void)setSupportedActions:(NSSet *)arg1 ;
-(NSSet *)supportedActionsByExtensions;
-(void)setSupportedActionsByExtensions:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileLocked;
-(void)setActionsRestrictedWhileLocked:(NSSet *)arg1 ;
-(NSSet *)actionsRestrictedWhileProtectedDataUnavailable;
-(void)setActionsRestrictedWhileProtectedDataUnavailable:(NSSet *)arg1 ;
-(NSSet *)supportedMediaCategories;
-(void)setSupportedMediaCategories:(NSSet *)arg1 ;
-(NSSet *)definedIntents;
-(void)setDefinedIntents:(NSSet *)arg1 ;
@end

