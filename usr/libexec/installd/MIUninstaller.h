/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray, MIClientConnection;

@interface MIUninstaller : NSObject {

	unsigned _percentComplete;
	NSDictionary* _receipt;
	NSArray* _identifiers;
	NSDictionary* _options;
	MIClientConnection* _client;
	NSArray* _outstandingTerminationAssertions;

}

@property (nonatomic,readonly) NSArray * identifiers;                                 //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MIClientConnection * client;                           //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) unsigned percentComplete;                                //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) NSArray * outstandingTerminationAssertions;              //@synthesize outstandingTerminationAssertions=_outstandingTerminationAssertions - In the implementation block
@property (nonatomic,readonly) NSDictionary * receipt;                                //@synthesize receipt=_receipt - In the implementation block
+(id)uninstallerForIdentifiers:(id)arg1 withOptions:(id)arg2 forClient:(id)arg3 ;
-(NSDictionary *)options;
-(MIClientConnection *)client;
-(unsigned)percentComplete;
-(NSArray *)identifiers;
-(void)setPercentComplete:(unsigned)arg1 ;
-(NSDictionary *)receipt;
-(BOOL)performUninstallationWithError:(id*)arg1 ;
-(NSArray *)outstandingTerminationAssertions;
-(void)setOutstandingTerminationAssertions:(NSArray *)arg1 ;
-(void)_fireCallbackWithStatus:(id)arg1 ;
-(void)_fireCallbackWithStatus:(id)arg1 percentComplete:(unsigned)arg2 ;
-(id)initWithIdentifiers:(id)arg1 options:(id)arg2 forClient:(id)arg3 ;
-(void)_acquireTerminationAssertionsForIdentifiers:(id)arg1 uninstallUserDataOnly:(BOOL)arg2 ;
-(BOOL)_uninstallUserStuffForIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)_uninstallBundleWithIdentifier:(id)arg1 waitForDeletion:(BOOL)arg2 error:(id*)arg3 ;
-(void)_releaseOutstandingTerminationAssertions;
@end

