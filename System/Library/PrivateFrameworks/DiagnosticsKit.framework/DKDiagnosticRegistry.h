/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKExtensionRegistry.h>

@class NSMutableDictionary, NSArray, NSString;

@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry> {

	NSMutableDictionary* _diagnosticLookup;

}

@property (nonatomic,retain) NSMutableDictionary * diagnosticLookup;              //@synthesize diagnosticLookup=_diagnosticLookup - In the implementation block
@property (nonatomic,readonly) NSArray * diagnostics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class extensionClass; 
@property (nonatomic,readonly) Class responseObjectClass; 
-(id)init;
-(NSArray *)diagnostics;
-(id)adapterForIdentifier:(id)arg1 ;
-(void)addExtensionAdapter:(id)arg1 ;
-(void)enumerateExtensionAdaptersWithBlock:(/*^block*/id)arg1 ;
-(Class)extensionClass;
-(Class)responseObjectClass;
-(id)diagnosticForIdentifier:(id)arg1 ;
-(NSMutableDictionary *)diagnosticLookup;
-(void)setDiagnosticLookup:(NSMutableDictionary *)arg1 ;
@end

