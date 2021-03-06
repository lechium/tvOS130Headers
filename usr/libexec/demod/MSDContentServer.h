/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <demod/MSDDemoUpdateStatusDelegate.h>
#import <demod/MSDContentServerLocatorDelegate.h>

@protocol MSDContentServerConnectionFreeSpaceDelegate;
@class NSString, MSDContentServerConnection;

@interface MSDContentServer : NSObject <MSDDemoUpdateStatusDelegate, MSDContentServerLocatorDelegate> {

	BOOL _isLocal;
	BOOL _localHubReachable;
	BOOL _connectable;
	NSString* _server;
	NSString* _port;
	NSString* _bonjourName;
	id<MSDContentServerConnectionFreeSpaceDelegate> _freeSpaceDelegate;
	MSDContentServerConnection* _demoUpdateConnection;
	MSDContentServerConnection* _infoReportConnection;

}

@property (retain) NSString * server;                                                              //@synthesize server=_server - In the implementation block
@property (retain) NSString * port;                                                                //@synthesize port=_port - In the implementation block
@property (assign) BOOL isLocal;                                                                   //@synthesize isLocal=_isLocal - In the implementation block
@property (assign) BOOL localHubReachable;                                                         //@synthesize localHubReachable=_localHubReachable - In the implementation block
@property (retain) NSString * bonjourName;                                                         //@synthesize bonjourName=_bonjourName - In the implementation block
@property (retain) MSDContentServerConnection * demoUpdateConnection;                              //@synthesize demoUpdateConnection=_demoUpdateConnection - In the implementation block
@property (retain) MSDContentServerConnection * infoReportConnection;                              //@synthesize infoReportConnection=_infoReportConnection - In the implementation block
@property (assign) BOOL connectable;                                                               //@synthesize connectable=_connectable - In the implementation block
@property (retain) id<MSDContentServerConnectionFreeSpaceDelegate> freeSpaceDelegate;              //@synthesize freeSpaceDelegate=_freeSpaceDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSString *)port;
-(void)setPort:(NSString *)arg1 ;
-(NSString *)server;
-(void)setServer:(NSString *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isLocal;
-(BOOL)connectable;
-(void)closeConnection;
-(void)setConnectable:(BOOL)arg1 ;
-(void)setIsLocal:(BOOL)arg1 ;
-(NSString *)bonjourName;
-(void)setBonjourName:(NSString *)arg1 ;
-(BOOL)isEnrolled;
-(id)downloadManifestAndSaveTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)downloadIPA:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 to:(id)arg5 error:(id*)arg6 ;
-(BOOL)downloadContentFile:(id)arg1 ofHash:(id)arg2 to:(id)arg3 error:(id*)arg4 ;
-(void)demoUpdateFailed:(id)arg1 ;
-(void)initConnection:(id)arg1 port:(id)arg2 connectableGuess:(BOOL)arg3 ;
-(void)configServerBonjourName:(id)arg1 isLocal:(BOOL)arg2 ;
-(void)unenrollWithObliterateFlag:(BOOL)arg1 ;
-(void)demoUpdateCompleted:(id)arg1 ;
-(BOOL)enroll:(id)arg1 pairingCredential:(id)arg2 error:(id*)arg3 ;
-(BOOL)getManifestInfo:(BOOL)arg1 error:(id*)arg2 ;
-(id)getAccountSettings:(id*)arg1 ;
-(void)setFreeSpaceDelegate:(id<MSDContentServerConnectionFreeSpaceDelegate>)arg1 ;
-(void)setLocalHubReachable:(BOOL)arg1 ;
-(MSDContentServerConnection *)demoUpdateConnection;
-(void)setDemoUpdateConnection:(MSDContentServerConnection *)arg1 ;
-(MSDContentServerConnection *)infoReportConnection;
-(void)setInfoReportConnection:(MSDContentServerConnection *)arg1 ;
-(id)prepareURLComponentsWithManifestInfo;
-(BOOL)downloadFileBasedOnInfo:(id)arg1 ;
-(BOOL)localHubReachable;
-(BOOL)getFileDownloadCredential:(id*)arg1 ;
-(BOOL)downloadIPAPreCachingHub:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 to:(id)arg5 error:(id*)arg6 ;
-(BOOL)downloadIPACachingHub:(id)arg1 fullIPAHash:(id)arg2 UID:(id)arg3 currentUID:(id)arg4 to:(id)arg5 error:(id*)arg6 ;
-(id<MSDContentServerConnectionFreeSpaceDelegate>)freeSpaceDelegate;
-(void)demoUpdateProgress:(id)arg1 ;
-(void)contentServerDidAppear:(id)arg1 port:(id)arg2 ;
-(void)contentServerDidDisappear;
-(id)prepareToWrite:(id)arg1 ;
-(BOOL)freeUpSpaceFor:(long long)arg1 ;
@end

