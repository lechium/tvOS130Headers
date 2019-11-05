/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKRequestDelegate.h>

@protocol DKExtensionAttributes, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface DKExtensionAdapter : NSObject <DKRequestDelegate> {

	id<DKExtensionAttributes> _extensionAttributes;
	NSMutableDictionary* _requestLookup;
	NSMutableDictionary* _extensionToRequestIdentifierLookup;
	NSObject*<OS_dispatch_queue> _adapterQueue;
	NSObject*<OS_dispatch_queue> _adapterConnectQueue;

}

@property (nonatomic,retain) NSMutableDictionary * requestLookup;                                   //@synthesize requestLookup=_requestLookup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * extensionToRequestIdentifierLookup;              //@synthesize extensionToRequestIdentifierLookup=_extensionToRequestIdentifierLookup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> adapterQueue;                             //@synthesize adapterQueue=_adapterQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> adapterConnectQueue;                      //@synthesize adapterConnectQueue=_adapterConnectQueue - In the implementation block
@property (nonatomic,readonly) id<DKExtensionAttributes> extensionAttributes;                       //@synthesize extensionAttributes=_extensionAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)extensionAdapterWithExtensionAttributes:(id)arg1 ;
-(NSString *)description;
-(void)cancelAll;
-(id<DKExtensionAttributes>)extensionAttributes;
-(void)beginRequest:(id)arg1 payload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithExtensionAttributes:(id)arg1 ;
-(void)request:(id)arg1 didCompleteWithPayload:(id)arg2 error:(id)arg3 ;
-(void)_attachHandlersToExtension:(id)arg1 ;
-(NSMutableDictionary *)requestLookup;
-(NSObject*<OS_dispatch_queue>)adapterConnectQueue;
-(NSMutableDictionary *)extensionToRequestIdentifierLookup;
-(NSObject*<OS_dispatch_queue>)adapterQueue;
-(void)_didCompleteExtensionRequest:(id)arg1 ;
-(void)_didCancelExtensionRequest:(id)arg1 error:(id)arg2 ;
-(void)_didInterruptExtensionRequest:(id)arg1 ;
-(id)_requestForExtensionRequestIdentifier:(id)arg1 ;
-(void)setRequestLookup:(NSMutableDictionary *)arg1 ;
-(void)setExtensionToRequestIdentifierLookup:(NSMutableDictionary *)arg1 ;
-(void)setAdapterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAdapterConnectQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
