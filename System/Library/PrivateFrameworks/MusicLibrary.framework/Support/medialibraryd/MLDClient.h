/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSString;

@interface MLDClient : NSObject {

	int _processID;
	NSXPCConnection* _connection;
	NSString* _name;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int processID;                                        //@synthesize processID=_processID - In the implementation block
@property (getter=isDaemonClient,nonatomic,readonly) BOOL daemonClient; 
+(id)daemonClient;
-(NSString *)name;
-(id)description;
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(int)processID;
-(BOOL)isDaemonClient;
@end
