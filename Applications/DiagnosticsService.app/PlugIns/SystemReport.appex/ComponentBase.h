/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/SystemReport.appex/SystemReport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemReport/SystemReport-Structs.h>
#import <DiagnosticsKit/DKReporterController.h>
#import <SystemReport/DKReporter.h>

@class DKComponentIdentity, NSString;

@interface ComponentBase : DKReporterController <DKReporter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) DKComponentIdentity * componentIdentity; 
-(BOOL)isPresent;
-(void)populateAttributes:(NSMutableDictionary*)arg1 ;
-(void)setupWithContext:(id)arg1 ;
@end
